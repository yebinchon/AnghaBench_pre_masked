
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct rtable {int dst; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 struct rtable* FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_3(struct sk_buff *VAR_0)
{
 struct rtable *VAR_1;

 FUNC_1(VAR_0);

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1)
  FUNC_0(&VAR_1->dst, 0);
}
