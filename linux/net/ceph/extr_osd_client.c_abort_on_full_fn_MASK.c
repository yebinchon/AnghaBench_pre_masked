
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pool; } ;
struct TYPE_5__ {TYPE_1__ base_oloc; } ;
struct ceph_osd_request {int r_flags; TYPE_2__ r_t; struct ceph_osd_client* r_osdc; } ;
struct ceph_osd_client {TYPE_3__* osdmap; } ;
struct TYPE_6__ {int epoch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ceph_osd_request*,int ) ;
 scalar_t__ FUNC_1 (struct ceph_osd_client*,int ) ;
 scalar_t__ FUNC_2 (struct ceph_osd_client*,int ) ;
 int FUNC_3 (struct ceph_osd_client*,int ) ;

__attribute__((used)) static int FUNC_4(struct ceph_osd_request *VAR_3, void *VAR_4)
{
 struct ceph_osd_client *VAR_5 = VAR_3->r_osdc;
 bool *VAR_6 = VAR_4;

 if ((VAR_3->r_flags & VAR_1) &&
     (FUNC_1(VAR_5, VAR_0) ||
      FUNC_2(VAR_5, VAR_3->r_t.base_oloc.pool))) {
  if (!*VAR_6) {
   FUNC_3(VAR_5, VAR_5->osdmap->epoch);
   *VAR_6 = 1;
  }
  FUNC_0(VAR_3, -VAR_2);
 }

 return 0;
}
