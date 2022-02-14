
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct netlbl_lsm_catmap {int startbit; int* bitmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct netlbl_lsm_catmap* FUNC_0 (struct netlbl_lsm_catmap**,int,int ,int ) ;

int FUNC_1(struct netlbl_lsm_catmap *VAR_4,
     u32 *VAR_5,
     unsigned long *VAR_6)
{
 struct netlbl_lsm_catmap *VAR_7;
 u32 VAR_8 = *VAR_5;
 u32 VAR_9;


 if ((VAR_8 & (VAR_0 - 1)) != 0)
  return -VAR_1;

 if (VAR_8 < VAR_4->startbit) {
  VAR_8 = VAR_4->startbit;
  *VAR_5 = VAR_8;
 }
 VAR_7 = FUNC_0(&VAR_4, VAR_8, VAR_3, 0);
 if (VAR_7 == ((void*)0)) {
  *VAR_5 = (u32)-1;
  return 0;
 }

 if (VAR_8 < VAR_7->startbit) {
  *VAR_5 = VAR_7->startbit;
  VAR_8 = 0;
 } else
  VAR_8 -= VAR_7->startbit;
 VAR_9 = VAR_8 / VAR_2;
 *VAR_6 = VAR_7->bitmap[VAR_9] >> (VAR_8 % VAR_2);

 return 0;
}
