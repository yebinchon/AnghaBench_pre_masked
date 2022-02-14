
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct udphdr {scalar_t__ check; int len; int dest; int source; } ;
struct sock {int sk_protocol; scalar_t__ sk_no_check_tx; } ;
struct sk_buff {int len; scalar_t__ ip_summed; struct sock* sk; } ;
struct inet_sock {int recverr; int inet_sport; } ;
struct inet_cork {int gso_size; scalar_t__ fragsize; } ;
struct flowi4 {int daddr; int saddr; int fl4_dport; } ;
typedef int __wsum ;
struct TYPE_2__ {int gso_size; int gso_segs; int gso_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct sock*) ;
 int VAR_6 ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (int ,int ,int,int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 struct inet_sock* FUNC_6 (struct sock*) ;
 int FUNC_7 (int ,struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*) ;
 TYPE_1__* FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sock*) ;
 int FUNC_14 (struct sk_buff*,int ,int ) ;
 int FUNC_15 (struct sk_buff*) ;
 struct udphdr* FUNC_16 (struct sk_buff*) ;
 int FUNC_17 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_18(struct sk_buff *VAR_10, struct flowi4 *VAR_11,
   struct inet_cork *VAR_12)
{
 struct sock *VAR_13 = VAR_10->sk;
 struct inet_sock *VAR_14 = FUNC_6(VAR_13);
 struct udphdr *VAR_15;
 int VAR_16 = 0;
 int VAR_17 = FUNC_1(VAR_13);
 int VAR_18 = FUNC_12(VAR_10);
 int VAR_19 = VAR_10->len - VAR_18;
 int VAR_20 = VAR_19 - sizeof(*VAR_15);
 __wsum VAR_21 = 0;




 VAR_15 = FUNC_16(VAR_10);
 VAR_15->source = VAR_14->inet_sport;
 VAR_15->dest = VAR_11->fl4_dport;
 VAR_15->len = FUNC_5(VAR_19);
 VAR_15->check = 0;

 if (VAR_12->gso_size) {
  const int VAR_22 = FUNC_10(VAR_10) +
     sizeof(struct udphdr);

  if (VAR_22 + VAR_12->gso_size > VAR_12->fragsize) {
   FUNC_8(VAR_10);
   return -VAR_3;
  }
  if (VAR_10->len > VAR_12->gso_size * VAR_7) {
   FUNC_8(VAR_10);
   return -VAR_3;
  }
  if (VAR_13->sk_no_check_tx) {
   FUNC_8(VAR_10);
   return -VAR_3;
  }
  if (VAR_10->ip_summed != VAR_1 || VAR_17 ||
      FUNC_4(FUNC_9(VAR_10))) {
   FUNC_8(VAR_10);
   return -VAR_4;
  }

  if (VAR_20 > VAR_12->gso_size) {
   FUNC_11(VAR_10)->gso_size = VAR_12->gso_size;
   FUNC_11(VAR_10)->gso_type = VAR_6;
   FUNC_11(VAR_10)->gso_segs = FUNC_0(VAR_20,
         VAR_12->gso_size);
  }
  goto csum_partial;
 }

 if (VAR_17)
  VAR_21 = FUNC_17(VAR_10);

 else if (VAR_13->sk_no_check_tx) {

  VAR_10->ip_summed = VAR_0;
  goto send;

 } else if (VAR_10->ip_summed == VAR_1) {
csum_partial:

  FUNC_14(VAR_10, VAR_11->saddr, VAR_11->daddr);
  goto send;

 } else
  VAR_21 = FUNC_15(VAR_10);


 VAR_15->check = FUNC_3(VAR_11->saddr, VAR_11->daddr, VAR_19,
          VAR_13->sk_protocol, VAR_21);
 if (VAR_15->check == 0)
  VAR_15->check = VAR_2;

send:
 VAR_16 = FUNC_7(FUNC_13(VAR_13), VAR_10);
 if (VAR_16) {
  if (VAR_16 == -VAR_5 && !VAR_14->recverr) {
   FUNC_2(FUNC_13(VAR_13),
          VAR_9, VAR_17);
   VAR_16 = 0;
  }
 } else
  FUNC_2(FUNC_13(VAR_13),
         VAR_8, VAR_17);
 return VAR_16;
}
