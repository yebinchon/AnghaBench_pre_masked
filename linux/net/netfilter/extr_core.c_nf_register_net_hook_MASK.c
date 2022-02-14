
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_hook_ops {scalar_t__ pf; } ;
struct net {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct net*,scalar_t__,struct nf_hook_ops const*) ;
 int FUNC_1 (struct net*,scalar_t__,struct nf_hook_ops const*) ;

int FUNC_2(struct net *VAR_3, const struct nf_hook_ops *VAR_4)
{
 int VAR_5;

 if (VAR_4->pf == VAR_0) {
  VAR_5 = FUNC_0(VAR_3, VAR_1, VAR_4);
  if (VAR_5 < 0)
   return VAR_5;

  VAR_5 = FUNC_0(VAR_3, VAR_2, VAR_4);
  if (VAR_5 < 0) {
   FUNC_1(VAR_3, VAR_1, VAR_4);
   return VAR_5;
  }
 } else {
  VAR_5 = FUNC_0(VAR_3, VAR_4->pf, VAR_4);
  if (VAR_5 < 0)
   return VAR_5;
 }

 return 0;
}
