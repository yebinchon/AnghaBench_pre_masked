
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct ila_xlat_params {int dummy; } ;
struct genl_info {int dummy; } ;


 struct net* FUNC_0 (struct genl_info*) ;
 int FUNC_1 (struct net*,struct ila_xlat_params*) ;
 int FUNC_2 (struct genl_info*,struct ila_xlat_params*) ;

int FUNC_3(struct sk_buff *VAR_0, struct genl_info *VAR_1)
{
 struct net *VAR_2 = FUNC_0(VAR_1);
 struct ila_xlat_params VAR_3;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_1, &VAR_3);
 if (VAR_4)
  return VAR_4;

 FUNC_1(VAR_2, &VAR_3);

 return 0;
}
