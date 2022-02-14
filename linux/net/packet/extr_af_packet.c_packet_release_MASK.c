
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef union tpacket_req_u {int dummy; } tpacket_req_u ;
struct socket {struct sock* sk; } ;
struct sock {int sk_receive_queue; int sk_prot; } ;
struct TYPE_8__ {scalar_t__ pg_vec; } ;
struct TYPE_7__ {scalar_t__ pg_vec; } ;
struct TYPE_6__ {int * dev; } ;
struct packet_sock {struct packet_fanout* rollover; TYPE_4__ tx_ring; TYPE_3__ rx_ring; int bind_lock; TYPE_2__ prot_hook; } ;
struct packet_fanout {int dummy; } ;
struct TYPE_5__ {int sklist_lock; } ;
struct net {TYPE_1__ packet; } ;
typedef int req_u ;


 int FUNC_0 (int *) ;
 struct packet_fanout* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct packet_fanout*) ;
 int FUNC_3 (struct packet_fanout*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (union tpacket_req_u*,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct packet_sock*) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (struct packet_sock*) ;
 int FUNC_11 (struct sock*,union tpacket_req_u*,int,int) ;
 struct packet_sock* FUNC_12 (struct sock*) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (struct sock*) ;
 int FUNC_16 (struct sock*) ;
 int FUNC_17 (struct sock*) ;
 int FUNC_18 (int *) ;
 struct net* FUNC_19 (struct sock*) ;
 int FUNC_20 (struct sock*) ;
 int FUNC_21 (struct net*,int ,int) ;
 int FUNC_22 (struct sock*) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 () ;
 int FUNC_26 (struct sock*,int) ;

__attribute__((used)) static int FUNC_27(struct socket *VAR_0)
{
 struct sock *VAR_1 = VAR_0->sk;
 struct packet_sock *VAR_2;
 struct packet_fanout *VAR_3;
 struct net *VAR_4;
 union tpacket_req_u VAR_5;

 if (!VAR_1)
  return 0;

 VAR_4 = FUNC_19(VAR_1);
 VAR_2 = FUNC_12(VAR_1);

 FUNC_6(&VAR_4->packet.sklist_lock);
 FUNC_16(VAR_1);
 FUNC_7(&VAR_4->packet.sklist_lock);

 FUNC_13();
 FUNC_21(VAR_4, VAR_1->sk_prot, -1);
 FUNC_14();

 FUNC_23(&VAR_2->bind_lock);
 FUNC_26(VAR_1, 0);
 FUNC_8(VAR_2);

 if (VAR_2->prot_hook.dev) {
  FUNC_0(VAR_2->prot_hook.dev);
  VAR_2->prot_hook.dev = ((void*)0);
 }
 FUNC_24(&VAR_2->bind_lock);

 FUNC_9(VAR_1);

 FUNC_4(VAR_1);
 if (VAR_2->rx_ring.pg_vec) {
  FUNC_5(&VAR_5, 0, sizeof(VAR_5));
  FUNC_11(VAR_1, &VAR_5, 1, 0);
 }

 if (VAR_2->tx_ring.pg_vec) {
  FUNC_5(&VAR_5, 0, sizeof(VAR_5));
  FUNC_11(VAR_1, &VAR_5, 1, 1);
 }
 FUNC_15(VAR_1);

 VAR_3 = FUNC_1(VAR_1);

 FUNC_25();

 FUNC_3(VAR_2->rollover);
 if (VAR_3) {
  FUNC_2(VAR_3);
  FUNC_3(VAR_3);
 }



 FUNC_20(VAR_1);
 VAR_0->sk = ((void*)0);



 FUNC_18(&VAR_1->sk_receive_queue);
 FUNC_10(VAR_2);
 FUNC_17(VAR_1);

 FUNC_22(VAR_1);
 return 0;
}
