
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {scalar_t__ ip_summed; long len; long csum_offset; } ;
typedef scalar_t__ __wsum ;
typedef int __sum16 ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 long FUNC_2 (struct sk_buff const*) ;
 scalar_t__ FUNC_3 (struct sk_buff const*,long,int *,long,int ) ;
 int FUNC_4 (struct sk_buff const*,int *,long) ;
 long FUNC_5 (struct sk_buff const*) ;

void FUNC_6(const struct sk_buff *VAR_1, u8 *VAR_2)
{
 __wsum VAR_3;
 long VAR_4;

 if (VAR_1->ip_summed == VAR_0)
  VAR_4 = FUNC_2(VAR_1);
 else
  VAR_4 = FUNC_5(VAR_1);

 FUNC_0(VAR_4 > FUNC_5(VAR_1));

 FUNC_4(VAR_1, VAR_2, VAR_4);

 VAR_3 = 0;
 if (VAR_4 != VAR_1->len)
  VAR_3 = FUNC_3(VAR_1, VAR_4, VAR_2 + VAR_4,
           VAR_1->len - VAR_4, 0);

 if (VAR_1->ip_summed == VAR_0) {
  long VAR_5 = VAR_4 + VAR_1->csum_offset;

  *((__sum16 *)(VAR_2 + VAR_5)) = FUNC_1(VAR_3);
 }
}
