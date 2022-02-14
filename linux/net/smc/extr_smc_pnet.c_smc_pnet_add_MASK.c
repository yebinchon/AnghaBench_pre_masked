
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smc_user_pnetentry {scalar_t__ ndev; } ;
struct smc_pnettable {int dummy; } ;
struct smc_net {struct smc_pnettable pnettable; } ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct genl_info {int attrs; } ;


 int FUNC_0 (scalar_t__) ;
 struct net* FUNC_1 (struct genl_info*) ;
 struct smc_net* FUNC_2 (struct net*,int ) ;
 int VAR_0 ;
 int FUNC_3 (struct smc_pnettable*,struct smc_user_pnetentry*) ;
 int FUNC_4 (struct net*,struct smc_user_pnetentry*,int ) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_1, struct genl_info *VAR_2)
{
 struct net *VAR_3 = FUNC_1(VAR_2);
 struct smc_user_pnetentry VAR_4;
 struct smc_pnettable *VAR_5;
 struct smc_net *VAR_6;
 int VAR_7;


 VAR_6 = FUNC_2(VAR_3, VAR_0);
 VAR_5 = &VAR_6->pnettable;

 VAR_7 = FUNC_4(VAR_3, &VAR_4, VAR_2->attrs);
 if (!VAR_7)
  VAR_7 = FUNC_3(VAR_5, &VAR_4);
 if (VAR_4.ndev)
  FUNC_0(VAR_4.ndev);
 return VAR_7;
}
