
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct udphdr {int check; } ;
struct tcphdr {int check; } ;
struct tcf_result {int dummy; } ;
struct TYPE_2__ {int drops; } ;
struct tcf_nat {int old_addr; int new_addr; int mask; int flags; int tcf_action; int tcf_lock; TYPE_1__ tcf_qstats; int tcf_bstats; int tcf_tm; } ;
struct tc_action {int dummy; } ;
struct sk_buff {int ip_summed; } ;
struct iphdr {int saddr; int daddr; int frag_off; scalar_t__ protocol; int ihl; int check; } ;
struct icmphdr {int checksum; int type; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,struct sk_buff*) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,struct sk_buff*,int,int,int) ;
 struct iphdr* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*,int) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 struct tcf_nat* FUNC_12 (struct tc_action const*) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(struct sk_buff *VAR_8, const struct tc_action *VAR_9,
         struct tcf_result *VAR_10)
{
 struct tcf_nat *VAR_11 = FUNC_12(VAR_9);
 struct iphdr *VAR_12;
 __be32 VAR_13;
 __be32 VAR_14;
 __be32 VAR_15;
 __be32 VAR_16;
 int VAR_17;
 int VAR_18;
 int VAR_19;
 int VAR_20;

 FUNC_9(&VAR_11->tcf_lock);

 FUNC_11(&VAR_11->tcf_tm);
 VAR_13 = VAR_11->old_addr;
 VAR_14 = VAR_11->new_addr;
 VAR_15 = VAR_11->mask;
 VAR_17 = VAR_11->flags & VAR_6;
 VAR_18 = VAR_11->tcf_action;

 FUNC_0(&VAR_11->tcf_bstats, VAR_8);

 FUNC_10(&VAR_11->tcf_lock);

 if (FUNC_13(VAR_18 == VAR_7))
  goto drop;

 VAR_20 = FUNC_7(VAR_8);
 if (!FUNC_5(VAR_8, sizeof(*VAR_12) + VAR_20))
  goto drop;

 VAR_12 = FUNC_4(VAR_8);

 if (VAR_17)
  VAR_16 = VAR_12->saddr;
 else
  VAR_16 = VAR_12->daddr;

 if (!((VAR_13 ^ VAR_16) & VAR_15)) {
  if (FUNC_8(VAR_8, sizeof(*VAR_12) + VAR_20))
   goto drop;

  VAR_14 &= VAR_15;
  VAR_14 |= VAR_16 & ~VAR_15;


  VAR_12 = FUNC_4(VAR_8);
  if (VAR_17)
   VAR_12->saddr = VAR_14;
  else
   VAR_12->daddr = VAR_14;

  FUNC_1(&VAR_12->check, VAR_16, VAR_14);
 } else if ((VAR_12->frag_off & FUNC_2(VAR_5)) ||
     VAR_12->protocol != 130) {
  goto out;
 }

 VAR_19 = VAR_12->ihl * 4;


 switch (VAR_12->frag_off & FUNC_2(VAR_5) ? 0 : VAR_12->protocol) {
 case 129:
 {
  struct tcphdr *VAR_21;

  if (!FUNC_5(VAR_8, VAR_19 + sizeof(*VAR_21) + VAR_20) ||
      FUNC_8(VAR_8, VAR_19 + sizeof(*VAR_21) + VAR_20))
   goto drop;

  VAR_21 = (void *)(FUNC_6(VAR_8) + VAR_19);
  FUNC_3(&VAR_21->check, VAR_8, VAR_16, VAR_14,
      1);
  break;
 }
 case 128:
 {
  struct udphdr *VAR_22;

  if (!FUNC_5(VAR_8, VAR_19 + sizeof(*VAR_22) + VAR_20) ||
      FUNC_8(VAR_8, VAR_19 + sizeof(*VAR_22) + VAR_20))
   goto drop;

  VAR_22 = (void *)(FUNC_6(VAR_8) + VAR_19);
  if (VAR_22->check || VAR_8->ip_summed == VAR_0) {
   FUNC_3(&VAR_22->check, VAR_8, VAR_16,
       VAR_14, 1);
   if (!VAR_22->check)
    VAR_22->check = VAR_1;
  }
  break;
 }
 case 130:
 {
  struct icmphdr *VAR_23;

  if (!FUNC_5(VAR_8, VAR_19 + sizeof(*VAR_23) + VAR_20))
   goto drop;

  VAR_23 = (void *)(FUNC_6(VAR_8) + VAR_19);

  if ((VAR_23->type != VAR_2) &&
      (VAR_23->type != VAR_4) &&
      (VAR_23->type != VAR_3))
   break;

  if (!FUNC_5(VAR_8, VAR_19 + sizeof(*VAR_23) + sizeof(*VAR_12) +
     VAR_20))
   goto drop;

  VAR_23 = (void *)(FUNC_6(VAR_8) + VAR_19);
  VAR_12 = (void *)(VAR_23 + 1);
  if (VAR_17)
   VAR_16 = VAR_12->daddr;
  else
   VAR_16 = VAR_12->saddr;

  if ((VAR_13 ^ VAR_16) & VAR_15)
   break;

  if (FUNC_8(VAR_8, VAR_19 + sizeof(*VAR_23) +
       sizeof(*VAR_12) + VAR_20))
   goto drop;

  VAR_23 = (void *)(FUNC_6(VAR_8) + VAR_19);
  VAR_12 = (void *)(VAR_23 + 1);

  VAR_14 &= VAR_15;
  VAR_14 |= VAR_16 & ~VAR_15;


  if (VAR_17)
   VAR_12->daddr = VAR_14;
  else
   VAR_12->saddr = VAR_14;

  FUNC_3(&VAR_23->checksum, VAR_8, VAR_16, VAR_14,
      0);
  break;
 }
 default:
  break;
 }

out:
 return VAR_18;

drop:
 FUNC_9(&VAR_11->tcf_lock);
 VAR_11->tcf_qstats.drops++;
 FUNC_10(&VAR_11->tcf_lock);
 return VAR_7;
}
