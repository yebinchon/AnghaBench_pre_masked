
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ceph_osd_linger_request {int osd; TYPE_1__* reg_req; TYPE_1__* ping_req; scalar_t__ is_watch; } ;
struct TYPE_2__ {scalar_t__ r_osd; } ;


 int FUNC_0 (struct ceph_osd_linger_request*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct ceph_osd_linger_request*) ;
 int FUNC_3 (int ,struct ceph_osd_linger_request*) ;

__attribute__((used)) static void FUNC_4(struct ceph_osd_linger_request *VAR_0)
{
 if (VAR_0->is_watch && VAR_0->ping_req->r_osd)
  FUNC_1(VAR_0->ping_req);
 if (VAR_0->reg_req->r_osd)
  FUNC_1(VAR_0->reg_req);
 FUNC_0(VAR_0);
 FUNC_3(VAR_0->osd, VAR_0);
 FUNC_2(VAR_0);
}
