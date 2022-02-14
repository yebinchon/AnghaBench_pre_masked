
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct udphdr {scalar_t__ check; int len; int dest; int source; } ;
struct sock {int dummy; } ;
struct sk_buff {int len; scalar_t__ ip_summed; struct sock* sk; } ;
struct inet_cork {int gso_size; scalar_t__ fragsize; } ;
struct flowi6 {int flowi6_proto; int daddr; int saddr; int fl6_dport; int fl6_sport; } ;
typedef int __wsum ;
struct TYPE_6__ {int recverr; } ;
struct TYPE_5__ {int gso_size; int gso_segs; int gso_type; } ;
struct TYPE_4__ {scalar_t__ no_check6_tx; } ;


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
 scalar_t__ FUNC_3 (int *,int *,int,int ,int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 TYPE_3__* FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*) ;
 TYPE_2__* FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sock*) ;
 int FUNC_14 (struct sock*,struct sk_buff*,int *,int *,int) ;
 int FUNC_15 (struct sk_buff*) ;
 struct udphdr* FUNC_16 (struct sk_buff*) ;
 TYPE_1__* FUNC_17 (struct sock*) ;
 int FUNC_18 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_19(struct sk_buff *VAR_10, struct flowi6 *VAR_11,
      struct inet_cork *VAR_12)
{
 struct sock *VAR_13 = VAR_10->sk;
 struct udphdr *VAR_14;
 int VAR_15 = 0;
 int VAR_16 = FUNC_1(VAR_13);
 __wsum VAR_17 = 0;
 int VAR_18 = FUNC_12(VAR_10);
 int VAR_19 = VAR_10->len - VAR_18;
 int VAR_20 = VAR_19 - sizeof(*VAR_14);




 VAR_14 = FUNC_16(VAR_10);
 VAR_14->source = VAR_11->fl6_sport;
 VAR_14->dest = VAR_11->fl6_dport;
 VAR_14->len = FUNC_5(VAR_19);
 VAR_14->check = 0;

 if (VAR_12->gso_size) {
  const int VAR_21 = FUNC_10(VAR_10) +
     sizeof(struct udphdr);

  if (VAR_21 + VAR_12->gso_size > VAR_12->fragsize) {
   FUNC_8(VAR_10);
   return -VAR_3;
  }
  if (VAR_10->len > VAR_12->gso_size * VAR_7) {
   FUNC_8(VAR_10);
   return -VAR_3;
  }
  if (FUNC_17(VAR_13)->no_check6_tx) {
   FUNC_8(VAR_10);
   return -VAR_3;
  }
  if (VAR_10->ip_summed != VAR_1 || VAR_16 ||
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

 if (VAR_16)
  VAR_17 = FUNC_18(VAR_10);
 else if (FUNC_17(VAR_13)->no_check6_tx) {
  VAR_10->ip_summed = VAR_0;
  goto send;
 } else if (VAR_10->ip_summed == VAR_1) {
csum_partial:
  FUNC_14(VAR_13, VAR_10, &VAR_11->saddr, &VAR_11->daddr, VAR_19);
  goto send;
 } else
  VAR_17 = FUNC_15(VAR_10);


 VAR_14->check = FUNC_3(&VAR_11->saddr, &VAR_11->daddr,
        VAR_19, VAR_11->flowi6_proto, VAR_17);
 if (VAR_14->check == 0)
  VAR_14->check = VAR_2;

send:
 VAR_15 = FUNC_7(VAR_10);
 if (VAR_15) {
  if (VAR_15 == -VAR_5 && !FUNC_6(VAR_13)->recverr) {
   FUNC_2(FUNC_13(VAR_13),
           VAR_9, VAR_16);
   VAR_15 = 0;
  }
 } else {
  FUNC_2(FUNC_13(VAR_13),
          VAR_8, VAR_16);
 }
 return VAR_15;
}
