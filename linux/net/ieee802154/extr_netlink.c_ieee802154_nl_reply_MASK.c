
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;
struct genl_info {int dummy; } ;


 void* FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 int FUNC_2 (struct sk_buff*,struct genl_info*) ;
 int FUNC_3 (struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_4 (struct sk_buff*) ;

int FUNC_5(struct sk_buff *VAR_0, struct genl_info *VAR_1)
{
 struct nlmsghdr *VAR_2 = FUNC_4(VAR_0);
 void *VAR_3 = FUNC_0(FUNC_3(VAR_2));

 FUNC_1(VAR_0, VAR_3);

 return FUNC_2(VAR_0, VAR_1);
}
