
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union nf_inet_addr {int in6; int ip; } ;
typedef scalar_t__ u_int8_t ;
struct xt_recent_mtinfo_v1 {int invert; scalar_t__ side; int check_set; unsigned long seconds; unsigned int hit_count; int name; } ;
struct xt_action_param {int hotdrop; struct xt_recent_mtinfo_v1* matchinfo; } ;
struct sk_buff {int sk; } ;
struct recent_table {int mask; } ;
struct recent_net {int dummy; } ;
struct recent_entry {unsigned int nstamps; scalar_t__ ttl; int * stamps; } ;
struct net {int dummy; } ;
struct ipv6hdr {scalar_t__ hop_limit; int saddr; int daddr; } ;
struct iphdr {scalar_t__ ttl; int saddr; int daddr; } ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct iphdr* FUNC_0 (struct sk_buff const*) ;
 struct ipv6hdr* FUNC_1 (struct sk_buff const*) ;
 unsigned long VAR_9 ;
 int FUNC_2 (int *,int *,int) ;
 int FUNC_3 (struct net*,int ) ;
 int FUNC_4 (union nf_inet_addr*,union nf_inet_addr*,int *) ;
 struct recent_entry* FUNC_5 (struct recent_table*,union nf_inet_addr*,scalar_t__,scalar_t__) ;
 struct recent_entry* FUNC_6 (struct recent_table*,union nf_inet_addr*,scalar_t__,scalar_t__) ;
 int FUNC_7 (struct recent_table*,unsigned long) ;
 int FUNC_8 (struct recent_table*,struct recent_entry*) ;
 int FUNC_9 (struct recent_table*,struct recent_entry*) ;
 int VAR_10 ;
 struct recent_net* FUNC_10 (struct net*) ;
 struct recent_table* FUNC_11 (struct recent_net*,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 scalar_t__ FUNC_15 (unsigned long,int ) ;
 scalar_t__ FUNC_16 (struct xt_action_param*) ;
 struct net* FUNC_17 (struct xt_action_param*) ;
 int * FUNC_18 (struct xt_action_param*) ;

__attribute__((used)) static bool
FUNC_19(const struct sk_buff *VAR_11, struct xt_action_param *VAR_12)
{
 struct net *VAR_13 = FUNC_17(VAR_12);
 struct recent_net *VAR_14 = FUNC_10(VAR_13);
 const struct xt_recent_mtinfo_v1 *VAR_15 = VAR_12->matchinfo;
 struct recent_table *VAR_16;
 struct recent_entry *VAR_17;
 union nf_inet_addr VAR_18 = {}, VAR_19;
 u_int8_t VAR_20;
 bool VAR_21 = VAR_15->invert;

 if (FUNC_16(VAR_12) == VAR_1) {
  const struct iphdr *VAR_22 = FUNC_0(VAR_11);

  if (VAR_15->side == VAR_3)
   VAR_18.ip = VAR_22->daddr;
  else
   VAR_18.ip = VAR_22->saddr;

  VAR_20 = VAR_22->ttl;
 } else {
  const struct ipv6hdr *VAR_23 = FUNC_1(VAR_11);

  if (VAR_15->side == VAR_3)
   FUNC_2(&VAR_18.in6, &VAR_23->daddr, sizeof(VAR_18.in6));
  else
   FUNC_2(&VAR_18.in6, &VAR_23->saddr, sizeof(VAR_18.in6));

  VAR_20 = VAR_23->hop_limit;
 }


 if (FUNC_18(VAR_12) != ((void*)0) &&
     (!VAR_11->sk || !FUNC_3(VAR_13, FUNC_12(VAR_11->sk))))
  VAR_20++;

 FUNC_13(&VAR_10);
 VAR_16 = FUNC_11(VAR_14, VAR_15->name);

 FUNC_4(&VAR_18, &VAR_19, &VAR_16->mask);

 VAR_17 = FUNC_6(VAR_16, &VAR_19, FUNC_16(VAR_12),
    (VAR_15->check_set & VAR_7) ? VAR_20 : 0);
 if (VAR_17 == ((void*)0)) {
  if (!(VAR_15->check_set & VAR_6))
   goto out;
  VAR_17 = FUNC_5(VAR_16, &VAR_19, FUNC_16(VAR_12), VAR_20);
  if (VAR_17 == ((void*)0))
   VAR_12->hotdrop = 1;
  VAR_21 = !VAR_21;
  goto out;
 }

 if (VAR_15->check_set & VAR_6)
  VAR_21 = !VAR_21;
 else if (VAR_15->check_set & VAR_5) {
  FUNC_8(VAR_16, VAR_17);
  VAR_21 = !VAR_21;
 } else if (VAR_15->check_set & (VAR_2 | VAR_8)) {
  unsigned long VAR_24 = VAR_9 - VAR_15->seconds * VAR_0;
  unsigned int VAR_25, VAR_26 = 0;

  for (VAR_25 = 0; VAR_25 < VAR_17->nstamps; VAR_25++) {
   if (VAR_15->seconds && FUNC_15(VAR_24, VAR_17->stamps[VAR_25]))
    continue;
   if (!VAR_15->hit_count || ++VAR_26 >= VAR_15->hit_count) {
    VAR_21 = !VAR_21;
    break;
   }
  }


  if (VAR_15->check_set & VAR_4)
   FUNC_7(VAR_16, VAR_24);
 }

 if (VAR_15->check_set & VAR_6 ||
     (VAR_15->check_set & VAR_8 && VAR_21)) {
  FUNC_9(VAR_16, VAR_17);
  VAR_17->ttl = VAR_20;
 }
out:
 FUNC_14(&VAR_10);
 return VAR_21;
}
