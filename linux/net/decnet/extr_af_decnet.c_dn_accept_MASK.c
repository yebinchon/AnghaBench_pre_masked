
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sockaddr_dn {int dummy; } ;
struct sock {scalar_t__ sk_state; int sk_allocation; int sk_ack_backlog; int sk_receive_queue; } ;
struct sk_buff {unsigned char* data; int len; } ;
struct optdata_dn {int dummy; } ;
struct dst_entry {int dummy; } ;
struct dn_skb_cb {int services; int segsize; int dst; int src; int info; int src_port; } ;
typedef int __le16 ;
struct TYPE_6__ {scalar_t__ a_addr; } ;
struct TYPE_7__ {int sdn_flags; TYPE_1__ sdn_add; } ;
struct TYPE_8__ {scalar_t__ state; int services_rem; int segsize_rem; scalar_t__ accept_mode; TYPE_2__ discdata_out; TYPE_2__ conndata_out; TYPE_2__ peer; int conndata_in; int accessdata; TYPE_2__ addr; int max_window; int info_rem; int addrrem; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 scalar_t__ VAR_6 ;
 TYPE_5__* FUNC_0 (struct sock*) ;
 struct dn_skb_cb* FUNC_1 (struct sk_buff*) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct sk_buff*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_4 (struct sk_buff*,int *) ;
 struct sock* FUNC_5 (int ,struct socket*,int ,int) ;
 int FUNC_6 (struct sock*,long*,int ) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sk_buff*,int *) ;
 int FUNC_10 (unsigned char*,int ,TYPE_2__*,unsigned char*) ;
 struct sk_buff* FUNC_11 (struct sock*,long*) ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sock*) ;
 int FUNC_14 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_15 (struct sock*) ;
 int FUNC_16 (struct sock*,struct dst_entry*) ;
 struct sk_buff* FUNC_17 (int *) ;
 struct dst_entry* FUNC_18 (struct sk_buff*) ;
 int FUNC_19 (struct sk_buff*,int *) ;
 int FUNC_20 (struct sk_buff*,int) ;
 int FUNC_21 (struct sock*) ;
 long FUNC_22 (struct sock*,int) ;
 int FUNC_23 (struct sock*,int ) ;

__attribute__((used)) static int FUNC_24(struct socket *VAR_18, struct socket *VAR_19, int VAR_20,
       bool VAR_21)
{
 struct sock *VAR_22 = VAR_18->sk, *VAR_23;
 struct sk_buff *VAR_24 = ((void*)0);
 struct dn_skb_cb *VAR_25;
 unsigned char VAR_26;
 int VAR_27 = 0;
 unsigned char VAR_28;
 long VAR_29 = FUNC_22(VAR_22, VAR_20 & VAR_11);
 struct dst_entry *VAR_30;

 FUNC_13(VAR_22);

 if (VAR_22->sk_state != VAR_16 || FUNC_0(VAR_22)->state != VAR_6) {
  FUNC_15(VAR_22);
  return -VAR_7;
 }

 VAR_24 = FUNC_17(&VAR_22->sk_receive_queue);
 if (VAR_24 == ((void*)0)) {
  VAR_24 = FUNC_11(VAR_22, &VAR_29);
  if (FUNC_2(VAR_24)) {
   FUNC_15(VAR_22);
   return FUNC_3(VAR_24);
  }
 }

 VAR_25 = FUNC_1(VAR_24);
 VAR_22->sk_ack_backlog--;
 VAR_23 = FUNC_5(FUNC_21(VAR_22), VAR_19, VAR_22->sk_allocation, VAR_21);
 if (VAR_23 == ((void*)0)) {
  FUNC_15(VAR_22);
  FUNC_12(VAR_24);
  return -VAR_8;
 }
 FUNC_15(VAR_22);

 VAR_30 = FUNC_18(VAR_24);
 FUNC_16(VAR_23, VAR_30);
 FUNC_19(VAR_24, ((void*)0));

 FUNC_0(VAR_23)->state = VAR_1;
 FUNC_0(VAR_23)->addrrem = VAR_25->src_port;
 FUNC_0(VAR_23)->services_rem = VAR_25->services;
 FUNC_0(VAR_23)->info_rem = VAR_25->info;
 FUNC_0(VAR_23)->segsize_rem = VAR_25->segsize;
 FUNC_0(VAR_23)->accept_mode = FUNC_0(VAR_22)->accept_mode;

 if (FUNC_0(VAR_23)->segsize_rem < 230)
  FUNC_0(VAR_23)->segsize_rem = 230;

 if ((FUNC_0(VAR_23)->services_rem & VAR_9) == VAR_10)
  FUNC_0(VAR_23)->max_window = VAR_17;

 VAR_23->sk_state = VAR_16;
 FUNC_14(&(FUNC_0(VAR_23)->addr), &(FUNC_0(VAR_22)->addr), sizeof(struct sockaddr_dn));





 FUNC_0(VAR_23)->addr.sdn_flags &= ~VAR_14;

 FUNC_20(VAR_24, FUNC_10(VAR_24->data, VAR_24->len, &(FUNC_0(VAR_23)->addr), &VAR_28));
 FUNC_20(VAR_24, FUNC_10(VAR_24->data, VAR_24->len, &(FUNC_0(VAR_23)->peer), &VAR_28));
 *(__le16 *)(FUNC_0(VAR_23)->peer.sdn_add.a_addr) = VAR_25->src;
 *(__le16 *)(FUNC_0(VAR_23)->addr.sdn_add.a_addr) = VAR_25->dst;

 VAR_26 = *VAR_24->data;
 FUNC_20(VAR_24, 1);

 if (VAR_26 & VAR_2)
  FUNC_4(VAR_24, &(FUNC_0(VAR_23)->accessdata));

 if (VAR_26 & VAR_5)
  FUNC_9(VAR_24, &(FUNC_0(VAR_23)->conndata_in));

 if (VAR_26 & VAR_3)
  FUNC_0(VAR_23)->peer.sdn_flags |= VAR_12;

 if (VAR_26 & VAR_4)
  FUNC_0(VAR_23)->peer.sdn_flags |= VAR_13;

 FUNC_12(VAR_24);

 FUNC_14(&(FUNC_0(VAR_23)->conndata_out), &(FUNC_0(VAR_22)->conndata_out),
  sizeof(struct optdata_dn));
 FUNC_14(&(FUNC_0(VAR_23)->discdata_out), &(FUNC_0(VAR_22)->discdata_out),
  sizeof(struct optdata_dn));

 FUNC_13(VAR_23);
 VAR_27 = FUNC_7(VAR_23);
 if (VAR_27 == 0) {
  FUNC_23(VAR_23, VAR_15);
  FUNC_8(VAR_23);





  if (FUNC_0(VAR_23)->accept_mode == VAR_0)
   VAR_27 = FUNC_6(VAR_23, &VAR_29,
      VAR_22->sk_allocation);
 }
 FUNC_15(VAR_23);
 return VAR_27;
}
