
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct nf_nat_lookup_hook_priv {unsigned int hooknum; int entries; struct nf_nat_lookup_hook_priv* priv; } ;
struct nf_nat_hooks_net {scalar_t__ users; struct nf_nat_lookup_hook_priv* nat_hook_ops; } ;
struct nf_hook_ops {unsigned int hooknum; int entries; struct nf_hook_ops* priv; } ;
struct net {int dummy; } ;
struct nat_net {struct nf_nat_hooks_net* nat_proto_net; } ;


 size_t FUNC_0 (struct nf_nat_hooks_net*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct nf_nat_lookup_hook_priv*) ;
 struct nf_nat_lookup_hook_priv* FUNC_4 (struct nf_nat_lookup_hook_priv const*,int,int ) ;
 struct nf_nat_lookup_hook_priv* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_4 ;
 struct nat_net* FUNC_8 (struct net*,int ) ;
 int FUNC_9 (int *,struct nf_nat_lookup_hook_priv const*) ;
 int VAR_5 ;
 int FUNC_10 (struct net*,struct nf_nat_lookup_hook_priv*,unsigned int) ;

int FUNC_11(struct net *VAR_6, u8 VAR_7, const struct nf_hook_ops *VAR_8,
         const struct nf_hook_ops *VAR_9, unsigned int VAR_10)
{
 struct nat_net *VAR_11 = FUNC_8(VAR_6, VAR_4);
 struct nf_nat_hooks_net *VAR_12;
 struct nf_nat_lookup_hook_priv *VAR_13;
 unsigned int VAR_14 = VAR_8->hooknum;
 struct nf_hook_ops *VAR_15;
 int VAR_16, VAR_17;

 if (FUNC_2(VAR_7 >= FUNC_0(VAR_11->nat_proto_net)))
  return -VAR_0;

 VAR_12 = &VAR_11->nat_proto_net[VAR_7];

 for (VAR_16 = 0; VAR_16 < VAR_10; VAR_16++) {
  if (VAR_9[VAR_16].hooknum == VAR_14) {
   VAR_14 = VAR_16;
   break;
  }
 }

 if (FUNC_2(VAR_16 == VAR_10))
  return -VAR_0;

 FUNC_6(&VAR_5);
 if (!VAR_12->nat_hook_ops) {
  FUNC_1(VAR_12->users != 0);

  VAR_15 = FUNC_4(VAR_9, sizeof(*VAR_9) * VAR_10, VAR_3);
  if (!VAR_15) {
   FUNC_7(&VAR_5);
   return -VAR_1;
  }

  for (VAR_16 = 0; VAR_16 < VAR_10; VAR_16++) {
   VAR_13 = FUNC_5(sizeof(*VAR_13), VAR_3);
   if (VAR_13) {
    VAR_15[VAR_16].priv = VAR_13;
    continue;
   }
   FUNC_7(&VAR_5);
   while (VAR_16)
    FUNC_3(VAR_15[--VAR_16].priv);
   FUNC_3(VAR_15);
   return -VAR_1;
  }

  VAR_17 = FUNC_10(VAR_6, VAR_15, VAR_10);
  if (VAR_17 < 0) {
   FUNC_7(&VAR_5);
   for (VAR_16 = 0; VAR_16 < VAR_10; VAR_16++)
    FUNC_3(VAR_15[VAR_16].priv);
   FUNC_3(VAR_15);
   return VAR_17;
  }

  VAR_12->nat_hook_ops = VAR_15;
 }

 VAR_15 = VAR_12->nat_hook_ops;
 VAR_13 = VAR_15[VAR_14].priv;
 if (FUNC_2(!VAR_13)) {
  FUNC_7(&VAR_5);
  return -VAR_2;
 }

 VAR_17 = FUNC_9(&VAR_13->entries, VAR_8);
 if (VAR_17 == 0)
  VAR_12->users++;

 FUNC_7(&VAR_5);
 return VAR_17;
}
