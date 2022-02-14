
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlmsghdr {int dummy; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 int FUNC_2 (int *,struct sk_buff*,int ,unsigned int,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct nlmsghdr*) ;
 struct nlmsghdr* FUNC_4 (struct sk_buff*) ;

int FUNC_5(struct sk_buff *VAR_2, unsigned int VAR_3)
{
 struct nlmsghdr *VAR_4 = FUNC_4(VAR_2);
 void *VAR_5 = FUNC_0(FUNC_3(VAR_4));

 FUNC_1(VAR_2, VAR_5);

 return FUNC_2(&VAR_1, VAR_2, 0, VAR_3, VAR_0);
}
