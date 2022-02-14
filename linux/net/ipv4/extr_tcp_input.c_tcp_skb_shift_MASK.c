
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int len; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,struct sk_buff*,int) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int) ;

int FUNC_3(struct sk_buff *VAR_1, struct sk_buff *VAR_2,
    int VAR_3, int VAR_4)
{





 if (FUNC_2(VAR_1->len + VAR_4 >= 65535 * VAR_0))
  return 0;
 if (FUNC_2(FUNC_1(VAR_1) + VAR_3 > 65535))
  return 0;
 return FUNC_0(VAR_1, VAR_2, VAR_4);
}
