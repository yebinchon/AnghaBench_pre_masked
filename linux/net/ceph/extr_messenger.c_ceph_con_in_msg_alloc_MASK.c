
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ceph_msg_header {int middle_len; } ;
struct ceph_msg {int middle; int hdr; } ;
struct ceph_connection {scalar_t__ state; char* error_msg; struct ceph_msg* in_msg; struct ceph_msg_header in_hdr; int mutex; TYPE_1__* ops; } ;
struct TYPE_2__ {struct ceph_msg* (* alloc_msg ) (struct ceph_connection*,struct ceph_msg_header*,int*) ;} ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ceph_connection*,struct ceph_msg*) ;
 int FUNC_2 (struct ceph_msg*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,struct ceph_msg_header*,int) ;
 int FUNC_5 (struct ceph_msg*,struct ceph_connection*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct ceph_msg* FUNC_8 (struct ceph_connection*,struct ceph_msg_header*,int*) ;

__attribute__((used)) static int FUNC_9(struct ceph_connection *VAR_3, int *VAR_4)
{
 struct ceph_msg_header *VAR_5 = &VAR_3->in_hdr;
 int VAR_6 = FUNC_3(VAR_5->middle_len);
 struct ceph_msg *VAR_7;
 int VAR_8 = 0;

 FUNC_0(VAR_3->in_msg != ((void*)0));
 FUNC_0(!VAR_3->ops->alloc_msg);

 FUNC_7(&VAR_3->mutex);
 VAR_7 = VAR_3->ops->alloc_msg(VAR_3, VAR_5, VAR_4);
 FUNC_6(&VAR_3->mutex);
 if (VAR_3->state != VAR_0) {
  if (VAR_7)
   FUNC_2(VAR_7);
  return -VAR_1;
 }
 if (VAR_7) {
  FUNC_0(*VAR_4);
  FUNC_5(VAR_7, VAR_3);
  VAR_3->in_msg = VAR_7;
 } else {





  if (*VAR_4)
   return 0;

  VAR_3->error_msg = "error allocating memory for incoming message";
  return -VAR_2;
 }
 FUNC_4(&VAR_3->in_msg->hdr, &VAR_3->in_hdr, sizeof(VAR_3->in_hdr));

 if (VAR_6 && !VAR_3->in_msg->middle) {
  VAR_8 = FUNC_1(VAR_3, VAR_3->in_msg);
  if (VAR_8 < 0) {
   FUNC_2(VAR_3->in_msg);
   VAR_3->in_msg = ((void*)0);
  }
 }

 return VAR_8;
}
