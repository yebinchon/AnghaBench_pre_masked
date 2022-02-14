
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ceph_connection {scalar_t__ state; int delay; int out_queue; int out_sent; TYPE_1__* in_msg; int * error_msg; int peer_addr; int peer_name; } ;
struct TYPE_2__ {struct ceph_connection* con; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (int ) ;
 int VAR_11 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ceph_connection*) ;
 int FUNC_6 (struct ceph_connection*,int ) ;
 int FUNC_7 (struct ceph_connection*,int ) ;
 scalar_t__ FUNC_8 (struct ceph_connection*,int ) ;
 int FUNC_9 (char*,...) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (char*,int ,int ,int *) ;
 int FUNC_13 (struct ceph_connection*) ;

__attribute__((used)) static void FUNC_14(struct ceph_connection *VAR_12)
{
 FUNC_9("fault %p state %lu to peer %s\n",
      VAR_12, VAR_12->state, FUNC_4(&VAR_12->peer_addr));

 FUNC_12("%s%lld %s %s\n", FUNC_1(VAR_12->peer_name),
  FUNC_4(&VAR_12->peer_addr), VAR_12->error_msg);
 VAR_12->error_msg = ((void*)0);

 FUNC_2(VAR_12->state != VAR_6 &&
        VAR_12->state != VAR_7 &&
        VAR_12->state != VAR_8);

 FUNC_5(VAR_12);

 if (FUNC_8(VAR_12, VAR_3)) {
  FUNC_9("fault on LOSSYTX channel, marking CLOSED\n");
  VAR_12->state = VAR_5;
  return;
 }

 if (VAR_12->in_msg) {
  FUNC_0(VAR_12->in_msg->con != VAR_12);
  FUNC_3(VAR_12->in_msg);
  VAR_12->in_msg = ((void*)0);
 }


 FUNC_11(&VAR_12->out_sent, &VAR_12->out_queue);



 if (FUNC_10(&VAR_12->out_queue) &&
     !FUNC_8(VAR_12, VAR_2)) {
  FUNC_9("fault %p setting STANDBY clearing WRITE_PENDING\n", VAR_12);
  FUNC_6(VAR_12, VAR_4);
  VAR_12->state = VAR_10;
 } else {

  VAR_12->state = VAR_9;
  if (VAR_12->delay == 0)
   VAR_12->delay = VAR_0;
  else if (VAR_12->delay < VAR_11)
   VAR_12->delay *= 2;
  FUNC_7(VAR_12, VAR_1);
  FUNC_13(VAR_12);
 }
}
