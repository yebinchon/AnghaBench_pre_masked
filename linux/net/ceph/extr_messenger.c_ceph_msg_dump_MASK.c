
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int iov_len; int * iov_base; } ;
struct ceph_msg {int footer; TYPE_3__* middle; TYPE_1__ front; int hdr; int data_length; int front_alloc_len; } ;
struct TYPE_5__ {int iov_len; int * iov_base; } ;
struct TYPE_6__ {TYPE_2__ vec; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,struct ceph_msg*,int ,int ) ;
 int FUNC_1 (int ,char*,int ,int,int,int *,int,int) ;

void FUNC_2(struct ceph_msg *VAR_2)
{
 FUNC_0("msg_dump %p (front_alloc_len %d length %zd)\n", VAR_2,
   VAR_2->front_alloc_len, VAR_2->data_length);
 FUNC_1(VAR_1, "header: ",
         VAR_0, 16, 1,
         &VAR_2->hdr, sizeof(VAR_2->hdr), 1);
 FUNC_1(VAR_1, " front: ",
         VAR_0, 16, 1,
         VAR_2->front.iov_base, VAR_2->front.iov_len, 1);
 if (VAR_2->middle)
  FUNC_1(VAR_1, "middle: ",
          VAR_0, 16, 1,
          VAR_2->middle->vec.iov_base,
          VAR_2->middle->vec.iov_len, 1);
 FUNC_1(VAR_1, "footer: ",
         VAR_0, 16, 1,
         &VAR_2->footer, sizeof(VAR_2->footer), 1);
}
