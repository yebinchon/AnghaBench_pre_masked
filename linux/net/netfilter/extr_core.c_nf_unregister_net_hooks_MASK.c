
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_hook_ops {int dummy; } ;
struct net {int dummy; } ;


 int FUNC_0 (struct net*,struct nf_hook_ops const*) ;

void FUNC_1(struct net *VAR_0, const struct nf_hook_ops *VAR_1,
        unsigned int VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
  FUNC_0(VAR_0, &VAR_1[VAR_3]);
}
