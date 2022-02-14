
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int) ;
 int * FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;

struct sk_buff *FUNC_7(struct sk_buff *VAR_2)
{
 u8 *VAR_3 = FUNC_1(VAR_2);
 u8 *VAR_4 = VAR_3 + VAR_1;

 FUNC_0(VAR_4, VAR_3, VAR_0 - VAR_1);
 FUNC_2(VAR_2, VAR_1);
 FUNC_4(VAR_2, VAR_0);
 FUNC_5(VAR_2);
 FUNC_6(VAR_2);
 FUNC_3(VAR_2, VAR_0);

 return VAR_2;
}
