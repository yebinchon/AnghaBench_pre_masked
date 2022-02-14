
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct socket {int file; int sk; } ;
struct l2cap_conn {int dummy; } ;
struct TYPE_4__ {int list; int remove; int probe; } ;
struct hidp_session {int flags; int conn; struct socket* ctrl_sock; struct socket* intr_sock; int report_queue; int report_mutex; int timer; int dev_init; int idle_to; void* intr_mtu; void* ctrl_mtu; int intr_transmit; int ctrl_transmit; TYPE_1__ user; int bdaddr; int state_queue; int state; int ref; } ;
struct hidp_connadd_req {int flags; int idle_to; } ;
struct bt_sock {int dummy; } ;
typedef int bdaddr_t ;
struct TYPE_6__ {TYPE_2__* chan; } ;
struct TYPE_5__ {int imtu; int omtu; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int const*) ;
 struct bt_sock* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_4 ;
 int FUNC_7 (struct hidp_session*,struct hidp_connadd_req const*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct hidp_session*) ;
 int FUNC_10 (int *) ;
 struct hidp_session* FUNC_11 (int,int ) ;
 int FUNC_12 (struct l2cap_conn*) ;
 int FUNC_13 (int ) ;
 TYPE_3__* FUNC_14 (struct bt_sock*) ;
 void* FUNC_15 (int ,int ,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int ,int ) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_19(struct hidp_session **VAR_9, const bdaddr_t *VAR_10,
       struct socket *VAR_11,
       struct socket *VAR_12,
       const struct hidp_connadd_req *VAR_13,
       struct l2cap_conn *VAR_14)
{
 struct hidp_session *VAR_15;
 int VAR_16;
 struct bt_sock *VAR_17, *VAR_18;

 VAR_17 = FUNC_5(VAR_11->sk);
 VAR_18 = FUNC_5(VAR_12->sk);

 VAR_15 = FUNC_11(sizeof(*VAR_15), VAR_1);
 if (!VAR_15)
  return -VAR_0;


 FUNC_10(&VAR_15->ref);
 FUNC_3(&VAR_15->state, VAR_3);
 FUNC_8(&VAR_15->state_queue);
 VAR_15->flags = VAR_13->flags & FUNC_0(VAR_2);


 FUNC_4(&VAR_15->bdaddr, VAR_10);
 VAR_15->conn = FUNC_12(VAR_14);
 VAR_15->user.probe = VAR_6;
 VAR_15->user.remove = VAR_7;
 FUNC_1(&VAR_15->user.list);
 VAR_15->ctrl_sock = VAR_11;
 VAR_15->intr_sock = VAR_12;
 FUNC_17(&VAR_15->ctrl_transmit);
 FUNC_17(&VAR_15->intr_transmit);
 VAR_15->ctrl_mtu = FUNC_15(VAR_8, FUNC_14(VAR_17)->chan->omtu,
     FUNC_14(VAR_17)->chan->imtu);
 VAR_15->intr_mtu = FUNC_15(VAR_8, FUNC_14(VAR_18)->chan->omtu,
     FUNC_14(VAR_18)->chan->imtu);
 VAR_15->idle_to = VAR_13->idle_to;


 FUNC_2(&VAR_15->dev_init, VAR_5);
 FUNC_18(&VAR_15->timer, VAR_4, 0);


 FUNC_16(&VAR_15->report_mutex);
 FUNC_8(&VAR_15->report_queue);

 VAR_16 = FUNC_7(VAR_15, VAR_13);
 if (VAR_16)
  goto err_free;

 FUNC_6(VAR_15->intr_sock->file);
 FUNC_6(VAR_15->ctrl_sock->file);
 *VAR_9 = VAR_15;
 return 0;

err_free:
 FUNC_13(VAR_15->conn);
 FUNC_9(VAR_15);
 return VAR_16;
}
