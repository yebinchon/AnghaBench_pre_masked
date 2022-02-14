
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct netlbl_lsm_catmap {scalar_t__ startbit; int* bitmap; struct netlbl_lsm_catmap* next; } ;
typedef int NETLBL_CATMAP_MAPTYPE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct netlbl_lsm_catmap* FUNC_0 (struct netlbl_lsm_catmap**,scalar_t__,int ,int ) ;

int FUNC_1(struct netlbl_lsm_catmap *VAR_6, u32 VAR_7)
{
 struct netlbl_lsm_catmap *VAR_8;
 struct netlbl_lsm_catmap *VAR_9 = ((void*)0);
 u32 VAR_10;
 u32 VAR_11;
 NETLBL_CATMAP_MAPTYPE VAR_12;
 NETLBL_CATMAP_MAPTYPE VAR_13;

 VAR_8 = FUNC_0(&VAR_6, VAR_7, VAR_5, 0);
 if (VAR_8 == ((void*)0))
  return -VAR_0;
 if (VAR_7 > VAR_8->startbit) {
  VAR_7 -= VAR_8->startbit;
  VAR_10 = VAR_7 / VAR_3;
  VAR_11 = VAR_7 % VAR_3;
 } else {
  VAR_10 = 0;
  VAR_11 = 0;
 }
 VAR_12 = VAR_1 << VAR_11;

 for (;;) {
  VAR_13 = VAR_8->bitmap[VAR_10];
  while (VAR_12 != 0 && (VAR_13 & VAR_12) != 0) {
   VAR_12 <<= 1;
   VAR_11++;
  }

  if (VAR_9 && VAR_10 == 0 && VAR_11 == 0)
   return VAR_9->startbit + VAR_4 - 1;
  else if (VAR_12 != 0)
   return VAR_8->startbit +
    (VAR_3 * VAR_10) + VAR_11 - 1;
  else if (++VAR_10 >= VAR_2) {
   if (VAR_8->next == ((void*)0))
    return VAR_8->startbit + VAR_4 - 1;
   VAR_9 = VAR_8;
   VAR_8 = VAR_8->next;
   VAR_10 = 0;
  }
  VAR_12 = VAR_1;
  VAR_11 = 0;
 }

 return -VAR_0;
}
