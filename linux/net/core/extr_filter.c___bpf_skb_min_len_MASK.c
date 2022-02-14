
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sk_buff {scalar_t__ ip_summed; scalar_t__ csum_offset; } ;
typedef int __sum16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff const*) ;
 scalar_t__ FUNC_1 (struct sk_buff const*) ;
 scalar_t__ FUNC_2 (struct sk_buff const*) ;
 scalar_t__ FUNC_3 (struct sk_buff const*) ;

__attribute__((used)) static u32 FUNC_4(const struct sk_buff *VAR_1)
{
 u32 VAR_2 = FUNC_1(VAR_1);

 if (FUNC_2(VAR_1))
  VAR_2 = FUNC_3(VAR_1);
 if (VAR_1->ip_summed == VAR_0)
  VAR_2 = FUNC_0(VAR_1) +
     VAR_1->csum_offset + sizeof(__sum16);
 return VAR_2;
}
