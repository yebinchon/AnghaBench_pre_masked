
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int dummy; } ;
struct cfcnfg {int dummy; } ;
struct caif_net {struct cfcnfg* cfg; } ;


 int VAR_0 ;
 struct caif_net* FUNC_0 (struct net*,int ) ;

struct cfcnfg *FUNC_1(struct net *VAR_1)
{
 struct caif_net *VAR_2;
 VAR_2 = FUNC_0(VAR_1, VAR_0);
 return VAR_2->cfg;
}
