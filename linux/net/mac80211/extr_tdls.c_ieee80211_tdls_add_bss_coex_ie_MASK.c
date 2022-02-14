
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_1(struct sk_buff *VAR_2)
{
 u8 *VAR_3 = FUNC_0(VAR_2, 3);

 *VAR_3++ = VAR_1;
 *VAR_3++ = 1;

 *VAR_3++ = VAR_0;
}
