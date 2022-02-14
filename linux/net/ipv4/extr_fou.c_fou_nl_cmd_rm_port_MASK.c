
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct genl_info {int dummy; } ;
struct fou_cfg {int dummy; } ;


 int FUNC_0 (struct net*,struct fou_cfg*) ;
 struct net* FUNC_1 (struct genl_info*) ;
 int FUNC_2 (struct genl_info*,struct fou_cfg*) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_0, struct genl_info *VAR_1)
{
 struct net *VAR_2 = FUNC_1(VAR_1);
 struct fou_cfg VAR_3;
 int VAR_4;

 VAR_4 = FUNC_2(VAR_1, &VAR_3);
 if (VAR_4)
  return VAR_4;

 return FUNC_0(VAR_2, &VAR_3);
}
