
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct genl_info {int * attrs; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 struct net* FUNC_0 (struct genl_info*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct net*,char*) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_2, struct genl_info *VAR_3)
{
 struct net *VAR_4 = FUNC_0(VAR_3);

 if (!VAR_3->attrs[VAR_1])
  return -VAR_0;
 return FUNC_2(VAR_4,
    (char *)FUNC_1(VAR_3->attrs[VAR_1]));
}
