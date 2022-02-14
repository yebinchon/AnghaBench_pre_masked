
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct netlbl_lsm_catmap {size_t* bitmap; scalar_t__ startbit; } ;
typedef int gfp_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 struct netlbl_lsm_catmap* FUNC_0 (struct netlbl_lsm_catmap**,size_t,int ,int ) ;

int FUNC_1(struct netlbl_lsm_catmap **VAR_4,
    u32 VAR_5,
    gfp_t VAR_6)
{
 struct netlbl_lsm_catmap *VAR_7;
 u32 VAR_8;

 VAR_7 = FUNC_0(VAR_4, VAR_5, VAR_3, VAR_6);
 if (VAR_7 == ((void*)0))
  return -VAR_0;

 VAR_5 -= VAR_7->startbit;
 VAR_8 = VAR_5 / VAR_2;
 VAR_7->bitmap[VAR_8] |= VAR_1 << (VAR_5 % VAR_2);

 return 0;
}
