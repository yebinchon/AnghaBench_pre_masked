
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,int ,int ,int ) ;
 int FUNC_1 (struct sk_buff*,int) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (struct sk_buff*) ;

int FUNC_4(struct sk_buff *VAR_2, int VAR_3)
{
 if (!FUNC_1(VAR_2, VAR_3))
  return -VAR_0;

 if (!FUNC_3(VAR_2) || FUNC_2(VAR_2, VAR_3))
  return 0;

 return FUNC_0(VAR_2, 0, 0, VAR_1);
}
