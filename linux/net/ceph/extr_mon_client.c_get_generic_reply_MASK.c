
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ceph_msg_header {int tid; } ;
struct ceph_msg {int dummy; } ;
struct ceph_mon_generic_request {int reply; } ;
struct ceph_mon_client {int mutex; int generic_request_tree; } ;
struct ceph_connection {struct ceph_mon_client* private; } ;


 struct ceph_msg* FUNC_0 (int ) ;
 int FUNC_1 (char*,int ,...) ;
 int FUNC_2 (int ) ;
 struct ceph_mon_generic_request* FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static struct ceph_msg *FUNC_6(struct ceph_connection *VAR_0,
      struct ceph_msg_header *VAR_1,
      int *VAR_2)
{
 struct ceph_mon_client *VAR_3 = VAR_0->private;
 struct ceph_mon_generic_request *VAR_4;
 u64 VAR_5 = FUNC_2(VAR_1->tid);
 struct ceph_msg *VAR_6;

 FUNC_4(&VAR_3->mutex);
 VAR_4 = FUNC_3(&VAR_3->generic_request_tree, VAR_5);
 if (!VAR_4) {
  FUNC_1("get_generic_reply %lld dne\n", VAR_5);
  *VAR_2 = 1;
  VAR_6 = ((void*)0);
 } else {
  FUNC_1("get_generic_reply %lld got %p\n", VAR_5, VAR_4->reply);
  *VAR_2 = 0;
  VAR_6 = FUNC_0(VAR_4->reply);





 }
 FUNC_5(&VAR_3->mutex);
 return VAR_6;
}
