
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct nf_nat_lookup_hook_priv {int entries; } ;
struct nf_nat_hooks_net {scalar_t__ users; struct nf_hook_ops* nat_hook_ops; } ;
struct nf_hook_ops {int hooknum; struct nf_nat_lookup_hook_priv* priv; } ;
struct net {int dummy; } ;
struct nat_net {struct nf_nat_hooks_net* nat_proto_net; } ;


 size_t FUNC_0 (struct nf_nat_hooks_net*) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct nf_hook_ops*) ;
 int FUNC_4 (struct nf_nat_lookup_hook_priv*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_0 ;
 struct nat_net* FUNC_7 (struct net*,int ) ;
 int FUNC_8 (int *,struct nf_hook_ops const*) ;
 int VAR_1 ;
 int FUNC_9 (struct net*,struct nf_hook_ops*,unsigned int) ;
 int VAR_2 ;

void FUNC_10(struct net *VAR_3, u8 VAR_4, const struct nf_hook_ops *VAR_5,
     unsigned int VAR_6)
{
 struct nat_net *VAR_7 = FUNC_7(VAR_3, VAR_0);
 struct nf_nat_hooks_net *VAR_8;
 struct nf_nat_lookup_hook_priv *VAR_9;
 struct nf_hook_ops *VAR_10;
 int VAR_11 = VAR_5->hooknum;
 int VAR_12;

 if (VAR_4 >= FUNC_0(VAR_7->nat_proto_net))
  return;

 VAR_8 = &VAR_7->nat_proto_net[VAR_4];

 FUNC_5(&VAR_1);
 if (FUNC_1(VAR_8->users == 0))
  goto unlock;

 VAR_8->users--;

 VAR_10 = VAR_8->nat_hook_ops;
 for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
  if (VAR_10[VAR_12].hooknum == VAR_11) {
   VAR_11 = VAR_12;
   break;
  }
 }
 if (FUNC_2(VAR_12 == VAR_6))
  goto unlock;
 VAR_9 = VAR_10[VAR_11].priv;
 FUNC_8(&VAR_9->entries, VAR_5);

 if (VAR_8->users == 0) {
  FUNC_9(VAR_3, VAR_10, VAR_6);

  for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
   VAR_9 = VAR_10[VAR_12].priv;
   FUNC_4(VAR_9, VAR_2);
  }

  VAR_8->nat_hook_ops = ((void*)0);
  FUNC_3(VAR_10);
 }
unlock:
 FUNC_6(&VAR_1);
}
