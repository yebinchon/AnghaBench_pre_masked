
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct netlbl_lsm_catmap {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int FUNC_0 (struct netlbl_lsm_catmap**,int ,int ) ;
 int FUNC_1 (struct netlbl_lsm_catmap**,int,unsigned long,int ) ;

int FUNC_2(struct netlbl_lsm_catmap **VAR_1,
    u32 VAR_2,
    u32 VAR_3,
    gfp_t VAR_4)
{
 int VAR_5 = 0;
 u32 VAR_6 = VAR_2;

 while (VAR_5 == 0 && VAR_6 <= VAR_3) {
  if (((VAR_6 & (VAR_0 - 1)) == 0) &&
      ((VAR_3 - VAR_6) > VAR_0)) {
   VAR_5 = FUNC_1(VAR_1,
         VAR_6,
         (unsigned long)-1,
         VAR_4);
   VAR_6 += VAR_0;
  } else
   VAR_5 = FUNC_0(VAR_1, VAR_6++, VAR_4);
 }

 return VAR_5;
}
