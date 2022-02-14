
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {int protocol; } ;
typedef int __be16 ;


 int FUNC_0 (struct sk_buff*,int *) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,int ,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(struct sk_buff *VAR_0)
{
 u16 VAR_1;
 __be16 VAR_2;
 int VAR_3;

 if (FUNC_4(FUNC_5(VAR_0))) {
  FUNC_1(VAR_0);
 } else {
  if (FUNC_6(!FUNC_3(VAR_0->protocol)))
   return 0;

  VAR_3 = FUNC_0(VAR_0, &VAR_1);
  if (VAR_3)
   return VAR_3;
 }

 if (FUNC_4(!FUNC_3(VAR_0->protocol)))
  return 0;

 VAR_2 = VAR_0->protocol;
 VAR_3 = FUNC_0(VAR_0, &VAR_1);
 if (FUNC_6(VAR_3))
  return VAR_3;

 FUNC_2(VAR_0, VAR_2, VAR_1);
 return 0;
}
