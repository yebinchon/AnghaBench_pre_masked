
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,int) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_2, int VAR_3)
{
 if (FUNC_1(VAR_2->len < VAR_3))
  return -VAR_0;
 if (FUNC_1(!FUNC_0(VAR_2, VAR_3)))
  return -VAR_1;
 return 0;
}
