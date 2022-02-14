
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct sockaddr_ll {scalar_t__ sll_pkttype; int sll_addr; int sll_halen; int sll_ifindex; int sll_hatype; } ;
struct TYPE_9__ {int lock; } ;
struct sock {scalar_t__ sk_type; scalar_t__ sk_rcvbuf; int sk_drops; int (* sk_data_ready ) (struct sock*) ;TYPE_4__ sk_receive_queue; int sk_rmem_alloc; } ;
struct sk_buff {int len; scalar_t__ pkt_type; int * data; struct net_device* dev; } ;
struct packet_type {struct sock* af_packet_priv; } ;
struct TYPE_7__ {int tp_packets; } ;
struct TYPE_8__ {TYPE_2__ stats1; } ;
struct packet_sock {int tp_drops; TYPE_3__ stats; int origdev; } ;
struct net_device {int ifindex; int type; scalar_t__ header_ops; } ;
struct TYPE_6__ {int origlen; struct sockaddr_ll ll; } ;
struct TYPE_10__ {TYPE_1__ sa; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_5__* FUNC_0 (struct sk_buff*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (TYPE_4__*,struct sk_buff*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct sk_buff*,int ) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct sk_buff*) ;
 struct packet_sock* FUNC_10 (struct sock*) ;
 scalar_t__ FUNC_11 (struct sk_buff*,unsigned int) ;
 unsigned int FUNC_12 (struct sk_buff*,struct sock*,unsigned int) ;
 struct sk_buff* FUNC_13 (struct sk_buff*,int ) ;
 int FUNC_14 (struct sk_buff*) ;
 int FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*) ;
 int FUNC_17 (struct sk_buff*,int ) ;
 int FUNC_18 (struct sk_buff*,int *) ;
 int FUNC_19 (struct sk_buff*,struct sock*) ;
 scalar_t__ FUNC_20 (struct sk_buff*) ;
 int FUNC_21 (struct sock*) ;
 int FUNC_22 (scalar_t__) ;
 int FUNC_23 (struct sock*,struct sk_buff*) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (struct sock*) ;
 scalar_t__ FUNC_27 (int ) ;

__attribute__((used)) static int FUNC_28(struct sk_buff *VAR_5, struct net_device *VAR_6,
        struct packet_type *VAR_7, struct net_device *VAR_8)
{
 struct sock *VAR_9;
 struct sockaddr_ll *VAR_10;
 struct packet_sock *VAR_11;
 u8 *VAR_12 = VAR_5->data;
 int VAR_13 = VAR_5->len;
 unsigned int VAR_14, VAR_15;
 bool VAR_16 = 0;

 if (VAR_5->pkt_type == VAR_2)
  goto drop;

 VAR_9 = VAR_7->af_packet_priv;
 VAR_11 = FUNC_10(VAR_9);

 if (!FUNC_8(FUNC_5(VAR_6), FUNC_21(VAR_9)))
  goto drop;

 VAR_5->dev = VAR_6;

 if (VAR_6->header_ops) {







  if (VAR_9->sk_type != VAR_4)
   FUNC_18(VAR_5, VAR_5->data - FUNC_15(VAR_5));
  else if (VAR_5->pkt_type == VAR_3) {

   FUNC_17(VAR_5, FUNC_16(VAR_5));
  }
 }

 VAR_14 = VAR_5->len;

 VAR_15 = FUNC_12(VAR_5, VAR_9, VAR_14);
 if (!VAR_15)
  goto drop_n_restore;
 if (VAR_14 > VAR_15)
  VAR_14 = VAR_15;

 if (FUNC_3(&VAR_9->sk_rmem_alloc) >= VAR_9->sk_rcvbuf)
  goto drop_n_acct;

 if (FUNC_20(VAR_5)) {
  struct sk_buff *VAR_17 = FUNC_13(VAR_5, VAR_0);
  if (VAR_17 == ((void*)0))
   goto drop_n_acct;

  if (VAR_12 != VAR_5->data) {
   VAR_5->data = VAR_12;
   VAR_5->len = VAR_13;
  }
  FUNC_4(VAR_5);
  VAR_5 = VAR_17;
 }

 FUNC_22(sizeof(*FUNC_0(VAR_5)) + VAR_1 - 8);

 VAR_10 = &FUNC_0(VAR_5)->sa.ll;
 VAR_10->sll_hatype = VAR_6->type;
 VAR_10->sll_pkttype = VAR_5->pkt_type;
 if (FUNC_27(VAR_11->origdev))
  VAR_10->sll_ifindex = VAR_8->ifindex;
 else
  VAR_10->sll_ifindex = VAR_6->ifindex;

 VAR_10->sll_halen = FUNC_6(VAR_5, VAR_10->sll_addr);




 FUNC_0(VAR_5)->sa.origlen = VAR_5->len;

 if (FUNC_11(VAR_5, VAR_14))
  goto drop_n_acct;

 FUNC_19(VAR_5, VAR_9);
 VAR_5->dev = ((void*)0);
 FUNC_14(VAR_5);


 FUNC_9(VAR_5);

 FUNC_24(&VAR_9->sk_receive_queue.lock);
 VAR_11->stats.stats1.tp_packets++;
 FUNC_23(VAR_9, VAR_5);
 FUNC_1(&VAR_9->sk_receive_queue, VAR_5);
 FUNC_25(&VAR_9->sk_receive_queue.lock);
 VAR_9->sk_data_ready(VAR_9);
 return 0;

drop_n_acct:
 VAR_16 = 1;
 FUNC_2(&VAR_11->tp_drops);
 FUNC_2(&VAR_9->sk_drops);

drop_n_restore:
 if (VAR_12 != VAR_5->data && FUNC_20(VAR_5)) {
  VAR_5->data = VAR_12;
  VAR_5->len = VAR_13;
 }
drop:
 if (!VAR_16)
  FUNC_4(VAR_5);
 else
  FUNC_7(VAR_5);
 return 0;
}
