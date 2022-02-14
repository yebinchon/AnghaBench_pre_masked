
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int data_len; int middle_len; int front_len; int type; int src; } ;
struct TYPE_7__ {scalar_t__ iov_len; } ;
struct ceph_msg {int needs_out_seq; TYPE_4__ hdr; int list_head; TYPE_3__ front; } ;
struct ceph_connection {scalar_t__ state; int mutex; int peer_name; int out_queue; TYPE_2__* msgr; } ;
struct TYPE_5__ {int name; } ;
struct TYPE_6__ {TYPE_1__ inst; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ceph_msg*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ceph_connection*) ;
 scalar_t__ FUNC_5 (struct ceph_connection*,int ) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct ceph_msg*,struct ceph_connection*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct ceph_connection*) ;

void FUNC_15(struct ceph_connection *VAR_2, struct ceph_msg *VAR_3)
{

 VAR_3->hdr.src = VAR_2->msgr->inst.name;
 FUNC_0(VAR_3->front.iov_len != FUNC_8(VAR_3->hdr.front_len));
 VAR_3->needs_out_seq = 1;

 FUNC_12(&VAR_2->mutex);

 if (VAR_2->state == VAR_1) {
  FUNC_6("con_send %p closed, dropping %p\n", VAR_2, VAR_3);
  FUNC_2(VAR_3);
  FUNC_13(&VAR_2->mutex);
  return;
 }

 FUNC_11(VAR_3, VAR_2);

 FUNC_0(!FUNC_10(&VAR_3->list_head));
 FUNC_9(&VAR_3->list_head, &VAR_2->out_queue);
 FUNC_6("----- %p to %s%lld %d=%s len %d+%d+%d -----\n", VAR_3,
      FUNC_1(VAR_2->peer_name), FUNC_7(VAR_3->hdr.type),
      FUNC_3(FUNC_7(VAR_3->hdr.type)),
      FUNC_8(VAR_3->hdr.front_len),
      FUNC_8(VAR_3->hdr.middle_len),
      FUNC_8(VAR_3->hdr.data_len));

 FUNC_4(VAR_2);
 FUNC_13(&VAR_2->mutex);



 if (FUNC_5(VAR_2, VAR_0) == 0)
  FUNC_14(VAR_2);
}
