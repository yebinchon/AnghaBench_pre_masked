
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; int base_oloc; int base_oid; } ;
struct ceph_osd_linger_request {int is_watch; void* ping_req; void* reg_req; int mtime; TYPE_1__ t; int watch_valid_thru; void* data; int errcb; int wcb; } ;
struct ceph_osd_client {int dummy; } ;
struct ceph_object_locator {int dummy; } ;
struct ceph_object_id {int dummy; } ;
typedef int rados_watcherrcb_t ;
typedef int rados_watchcb2_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ceph_osd_linger_request* FUNC_0 (int) ;
 void* FUNC_1 (struct ceph_osd_linger_request*,int ) ;
 int FUNC_2 (int *,struct ceph_object_id*) ;
 int FUNC_3 (int *,struct ceph_object_locator*) ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 struct ceph_osd_linger_request* FUNC_5 (struct ceph_osd_client*) ;
 int FUNC_6 (struct ceph_osd_linger_request*) ;
 int FUNC_7 (struct ceph_osd_linger_request*) ;
 int FUNC_8 (struct ceph_osd_linger_request*) ;
 int FUNC_9 (struct ceph_osd_linger_request*) ;

struct ceph_osd_linger_request *
FUNC_10(struct ceph_osd_client *VAR_5,
  struct ceph_object_id *VAR_6,
  struct ceph_object_locator *VAR_7,
  rados_watchcb2_t VAR_8,
  rados_watcherrcb_t VAR_9,
  void *VAR_10)
{
 struct ceph_osd_linger_request *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_5(VAR_5);
 if (!VAR_11)
  return FUNC_0(-VAR_3);

 VAR_11->is_watch = 1;
 VAR_11->wcb = VAR_8;
 VAR_11->errcb = VAR_9;
 VAR_11->data = VAR_10;
 VAR_11->watch_valid_thru = VAR_4;

 FUNC_2(&VAR_11->t.base_oid, VAR_6);
 FUNC_3(&VAR_11->t.base_oloc, VAR_7);
 VAR_11->t.flags = VAR_0;
 FUNC_4(&VAR_11->mtime);

 VAR_11->reg_req = FUNC_1(VAR_11, VAR_2);
 if (!VAR_11->reg_req) {
  VAR_12 = -VAR_3;
  goto err_put_lreq;
 }

 VAR_11->ping_req = FUNC_1(VAR_11, VAR_1);
 if (!VAR_11->ping_req) {
  VAR_12 = -VAR_3;
  goto err_put_lreq;
 }

 FUNC_9(VAR_11);
 VAR_12 = FUNC_8(VAR_11);
 if (VAR_12) {
  FUNC_6(VAR_11);
  goto err_put_lreq;
 }

 return VAR_11;

err_put_lreq:
 FUNC_7(VAR_11);
 return FUNC_0(VAR_12);
}
