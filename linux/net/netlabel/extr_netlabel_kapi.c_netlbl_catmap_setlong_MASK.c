
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct netlbl_lsm_catmap {unsigned long* bitmap; scalar_t__ startbit; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct netlbl_lsm_catmap* FUNC_0 (struct netlbl_lsm_catmap**,int,int ,int ) ;

int FUNC_1(struct netlbl_lsm_catmap **VAR_5,
     u32 VAR_6,
     unsigned long VAR_7,
     gfp_t VAR_8)
{
 struct netlbl_lsm_catmap *VAR_9;
 u32 VAR_10;


 if ((VAR_6 & (VAR_0 - 1)) != 0)
  return -VAR_1;

 VAR_9 = FUNC_0(VAR_5, VAR_6, VAR_4, VAR_8);
 if (VAR_9 == ((void*)0))
  return -VAR_2;

 VAR_6 -= VAR_9->startbit;
 VAR_10 = VAR_6 / VAR_3;
 VAR_9->bitmap[VAR_10] |= VAR_7 << (VAR_6 % VAR_3);

 return 0;
}
