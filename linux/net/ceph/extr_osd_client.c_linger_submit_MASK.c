
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_16__ {int osd; } ;
struct ceph_osd_linger_request {TYPE_8__ t; int linger_id; TYPE_7__* reg_req; TYPE_4__* ping_req; scalar_t__ is_watch; struct ceph_osd_client* osdc; } ;
struct ceph_osd_client {int lock; } ;
struct ceph_osd {int dummy; } ;
struct TYPE_15__ {TYPE_6__* r_ops; } ;
struct TYPE_13__ {int cookie; } ;
struct TYPE_9__ {int cookie; } ;
struct TYPE_14__ {TYPE_5__ notify; TYPE_1__ watch; } ;
struct TYPE_12__ {TYPE_3__* r_ops; } ;
struct TYPE_10__ {int cookie; } ;
struct TYPE_11__ {TYPE_2__ watch; } ;


 int FUNC_0 (struct ceph_osd_client*,TYPE_8__*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ceph_osd_linger_request*) ;
 int FUNC_3 (struct ceph_osd*,struct ceph_osd_linger_request*) ;
 struct ceph_osd* FUNC_4 (struct ceph_osd_client*,int ,int) ;
 int FUNC_5 (struct ceph_osd_linger_request*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct ceph_osd_linger_request *VAR_0)
{
 struct ceph_osd_client *VAR_1 = VAR_0->osdc;
 struct ceph_osd *VAR_2;

 FUNC_1(&VAR_1->lock);
 FUNC_2(VAR_0);
 if (VAR_0->is_watch) {
  VAR_0->reg_req->r_ops[0].watch.cookie = VAR_0->linger_id;
  VAR_0->ping_req->r_ops[0].watch.cookie = VAR_0->linger_id;
 } else {
  VAR_0->reg_req->r_ops[0].notify.cookie = VAR_0->linger_id;
 }

 FUNC_0(VAR_1, &VAR_0->t, 0);
 VAR_2 = FUNC_4(VAR_1, VAR_0->t.osd, 1);
 FUNC_3(VAR_2, VAR_0);

 FUNC_5(VAR_0);
 FUNC_6(&VAR_1->lock);
}
