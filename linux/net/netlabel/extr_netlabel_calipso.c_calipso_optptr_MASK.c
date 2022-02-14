
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct netlbl_calipso_ops {unsigned char* (* skbuff_optptr ) (struct sk_buff const*) ;} ;


 struct netlbl_calipso_ops* FUNC_0 () ;
 unsigned char* FUNC_1 (struct sk_buff const*) ;

unsigned char *FUNC_2(const struct sk_buff *VAR_0)
{
 unsigned char *VAR_1 = ((void*)0);
 const struct netlbl_calipso_ops *VAR_2 = FUNC_0();

 if (VAR_2)
  VAR_1 = VAR_2->skbuff_optptr(VAR_0);
 return VAR_1;
}
