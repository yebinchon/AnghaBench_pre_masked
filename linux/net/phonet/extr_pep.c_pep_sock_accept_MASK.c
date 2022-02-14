
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct sockaddr_pn {int dummy; } ;
struct sock {scalar_t__ sk_state; int sk_destruct; int sk_protocol; int sk_backlog_rcv; int sk_prot; } ;
struct sk_buff {int dummy; } ;
struct pnpipehdr {scalar_t__ pipe_handle; int state_after_connect; int other_pep_type; scalar_t__* data; } ;
struct TYPE_2__ {int resource; void* dobject; void* sobject; } ;
struct pep_sock {int peer_type; int hlist; scalar_t__ aligned; scalar_t__ init_enable; int tx_fc; int rx_fc; scalar_t__ rx_credits; scalar_t__ ifindex; int tx_credits; scalar_t__ pipe_handle; int ctrlreq_queue; struct sock* listener; TYPE_1__ pn_sk; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;


 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;


 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*,struct sk_buff*) ;
 struct sock* FUNC_5 (int *,struct sockaddr_pn*,scalar_t__) ;
 scalar_t__* FUNC_6 (struct sk_buff*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_7 (struct sock*,struct sk_buff*,int ,int ) ;
 struct pep_sock* FUNC_8 (struct sock*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_9 (struct sk_buff*,struct sockaddr_pn*) ;
 int FUNC_10 (struct sk_buff*,struct sockaddr_pn*) ;
 void* FUNC_11 (struct sockaddr_pn*) ;
 int FUNC_12 (struct sockaddr_pn*) ;
 struct pnpipehdr* FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (struct sk_buff*,int) ;
 int FUNC_15 (struct sock*) ;
 int FUNC_16 (struct sock*) ;
 int FUNC_17 (struct sock*,int *) ;
 struct sock* FUNC_18 (int ,int ,int ,int ,int) ;
 int FUNC_19 (int *) ;
 struct sk_buff* FUNC_20 (struct sock*,int ,int,int*) ;
 int FUNC_21 (struct sock*) ;
 int FUNC_22 (int *,struct sock*) ;
 int FUNC_23 (struct sock*) ;
 int FUNC_24 (struct sock*) ;
 scalar_t__ FUNC_25 (struct sock*) ;

__attribute__((used)) static struct sock *FUNC_26(struct sock *VAR_14, int VAR_15, int *VAR_16,
        bool VAR_17)
{
 struct pep_sock *VAR_18 = FUNC_8(VAR_14), *VAR_19;
 struct sock *VAR_20 = ((void*)0);
 struct sk_buff *VAR_21;
 struct pnpipehdr *VAR_22;
 struct sockaddr_pn VAR_23, VAR_24;
 int VAR_25;
 u16 VAR_26;
 u8 VAR_27, VAR_28, VAR_29;
 u8 VAR_30 = 0;

 VAR_21 = FUNC_20(VAR_14, 0, VAR_15 & VAR_4, VAR_16);
 if (!VAR_21)
  return ((void*)0);

 FUNC_3(VAR_14);
 if (VAR_14->sk_state != VAR_10) {
  VAR_25 = -VAR_0;
  goto drop;
 }
 FUNC_16(VAR_14);

 VAR_25 = -VAR_2;
 if (!FUNC_14(VAR_21, sizeof(*VAR_22) + 4))
  goto drop;

 VAR_22 = FUNC_13(VAR_21);
 VAR_27 = VAR_22->pipe_handle;
 switch (VAR_22->state_after_connect) {
 case 131:
  VAR_28 = 0;
  break;
 case 130:
  VAR_28 = 1;
  break;
 default:
  FUNC_7(VAR_14, VAR_21, VAR_7,
    VAR_3);
  goto drop;
 }
 VAR_26 = VAR_22->other_pep_type << 8;


 VAR_29 = VAR_22->data[3];
 while (VAR_29 > 0) {
  u8 VAR_31, VAR_32[1], VAR_33 = sizeof(VAR_32);
  const u8 *VAR_34 = FUNC_6(VAR_21, &VAR_31, &VAR_33, VAR_32);

  if (VAR_34 == ((void*)0))
   goto drop;
  switch (VAR_31) {
  case 128:
   if (VAR_33 < 1)
    goto drop;
   VAR_26 = (VAR_26 & 0xff00) | VAR_34[0];
   break;
  case 129:
   VAR_30 = VAR_34[0] != 0;
   break;
  }
  VAR_29--;
 }


 VAR_20 = FUNC_5(&VAR_18->hlist, &VAR_23, VAR_27);
 if (FUNC_25(VAR_20)) {
  FUNC_0(VAR_20);
  VAR_20 = ((void*)0);
  FUNC_7(VAR_14, VAR_21, VAR_9, VAR_3);
  goto drop;
 }


 VAR_20 = FUNC_18(FUNC_23(VAR_14), VAR_5, VAR_3, VAR_14->sk_prot,
    VAR_17);
 if (!VAR_20) {
  FUNC_7(VAR_14, VAR_21, VAR_8, VAR_3);
  VAR_25 = -VAR_1;
  goto drop;
 }

 FUNC_22(((void*)0), VAR_20);
 VAR_20->sk_state = VAR_11;
 VAR_20->sk_backlog_rcv = VAR_13;
 VAR_20->sk_protocol = VAR_14->sk_protocol;
 VAR_20->sk_destruct = VAR_12;

 VAR_19 = FUNC_8(VAR_20);
 FUNC_9(VAR_21, &VAR_23);
 FUNC_10(VAR_21, &VAR_24);
 VAR_19->pn_sk.sobject = FUNC_11(&VAR_23);
 VAR_19->pn_sk.dobject = FUNC_11(&VAR_24);
 VAR_19->pn_sk.resource = FUNC_12(&VAR_23);
 FUNC_21(VAR_14);
 VAR_19->listener = VAR_14;
 FUNC_19(&VAR_19->ctrlreq_queue);
 VAR_19->pipe_handle = VAR_27;
 FUNC_1(&VAR_19->tx_credits, 0);
 VAR_19->ifindex = 0;
 VAR_19->peer_type = VAR_26;
 VAR_19->rx_credits = 0;
 VAR_19->rx_fc = VAR_19->tx_fc = VAR_6;
 VAR_19->init_enable = VAR_28;
 VAR_19->aligned = VAR_30;

 VAR_25 = FUNC_4(VAR_20, VAR_21);
 if (VAR_25) {
  FUNC_24(VAR_20);
  VAR_20 = ((void*)0);
  goto drop;
 }
 FUNC_17(VAR_20, &VAR_18->hlist);
drop:
 FUNC_15(VAR_14);
 FUNC_2(VAR_21);
 *VAR_16 = VAR_25;
 return VAR_20;
}
