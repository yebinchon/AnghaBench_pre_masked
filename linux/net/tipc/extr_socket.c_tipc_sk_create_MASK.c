
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int deferredq; } ;
struct tipc_msg {int dummy; } ;
struct tipc_sock {int group_is_open; TYPE_1__ mc_method; int snd_win; int rcv_win; int dupl_rcvcnt; int conn_timeout; int portid; struct tipc_msg phdr; int cong_links; int publications; int max_pkt; } ;
struct socket {int type; struct proto_ops const* ops; } ;
struct sock {int sk_destruct; int sk_write_space; int sk_data_ready; int sk_rcvbuf; int sk_backlog_rcv; scalar_t__ sk_shutdown; int sk_timer; } ;
struct proto_ops {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;




 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 struct proto_ops VAR_14 ;
 int FUNC_3 (struct tipc_msg*,int ) ;
 struct proto_ops VAR_15 ;
 int FUNC_4 (char*) ;
 struct sock* FUNC_5 (struct net*,int ,int ,int *,int) ;
 int FUNC_6 () ;
 int FUNC_7 (struct socket*,struct sock*) ;
 struct proto_ops VAR_16 ;
 int * VAR_17 ;
 int FUNC_8 (int *,int ,int ) ;
 int VAR_18 ;
 int FUNC_9 (int ,struct tipc_msg*,int ,int ,int ,int ) ;
 int FUNC_10 (struct net*) ;
 int VAR_19 ;
 int FUNC_11 (struct sock*,int ) ;
 struct tipc_sock* FUNC_12 (struct sock*) ;
 int VAR_20 ;
 scalar_t__ FUNC_13 (struct tipc_sock*) ;
 int VAR_21 ;
 scalar_t__ FUNC_14 (struct sock*) ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_15 (struct sock*,int *,int ,char*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct tipc_sock*,int) ;
 int FUNC_18 (struct tipc_sock*,int) ;
 scalar_t__ FUNC_19 (int) ;

__attribute__((used)) static int FUNC_20(struct net *VAR_24, struct socket *VAR_25,
     int VAR_26, int VAR_27)
{
 const struct proto_ops *VAR_28;
 struct sock *VAR_29;
 struct tipc_sock *VAR_30;
 struct tipc_msg *VAR_31;


 if (FUNC_19(VAR_26 != 0))
  return -VAR_4;

 switch (VAR_25->type) {
 case 128:
  VAR_28 = &VAR_16;
  break;
 case 129:
  VAR_28 = &VAR_15;
  break;
 case 131:
 case 130:
  VAR_28 = &VAR_14;
  break;
 default:
  return -VAR_5;
 }


 VAR_29 = FUNC_5(VAR_24, VAR_0, VAR_6, &VAR_19, VAR_27);
 if (VAR_29 == ((void*)0))
  return -VAR_3;

 VAR_30 = FUNC_12(VAR_29);
 VAR_30->max_pkt = VAR_7;
 FUNC_0(&VAR_30->publications);
 FUNC_0(&VAR_30->cong_links);
 VAR_31 = &VAR_30->phdr;


 VAR_25->ops = VAR_28;
 FUNC_7(VAR_25, VAR_29);
 FUNC_11(VAR_29, VAR_13);
 if (FUNC_13(VAR_30)) {
  FUNC_4("Socket create failed; port number exhausted\n");
  return -VAR_2;
 }


 FUNC_6();

 FUNC_9(FUNC_10(VAR_24), VAR_31, VAR_11,
        VAR_12, VAR_8, 0);

 FUNC_3(VAR_31, VAR_30->portid);
 FUNC_8(&VAR_29->sk_timer, VAR_21, 0);
 VAR_29->sk_shutdown = 0;
 VAR_29->sk_backlog_rcv = VAR_20;
 VAR_29->sk_rcvbuf = VAR_17[1];
 VAR_29->sk_data_ready = VAR_18;
 VAR_29->sk_write_space = VAR_23;
 VAR_29->sk_destruct = VAR_22;
 VAR_30->conn_timeout = VAR_1;
 VAR_30->group_is_open = 1;
 FUNC_2(&VAR_30->dupl_rcvcnt, 0);


 VAR_30->snd_win = FUNC_16(VAR_9);
 VAR_30->rcv_win = VAR_30->snd_win;

 if (FUNC_14(VAR_29)) {
  FUNC_18(VAR_30, 1);
  if (VAR_25->type == 131)
   FUNC_17(VAR_30, 1);
 }
 FUNC_1(&VAR_30->mc_method.deferredq);
 FUNC_15(VAR_29, ((void*)0), VAR_10, " ");
 return 0;
}
