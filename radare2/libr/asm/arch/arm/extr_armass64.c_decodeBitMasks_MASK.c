
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut64 ;
typedef int ut32 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static ut32 FUNC_4(ut32 VAR_1) {

 int VAR_2 = 32;

 ut32 VAR_3, VAR_4;
 ut32 VAR_5 = ((ut64) - 1LL) >> (64 - VAR_2);

 if (FUNC_3 (VAR_1)) {
  VAR_4 = FUNC_2 (VAR_1);
  VAR_3 = FUNC_1 (VAR_1 >> VAR_4);
 } else {
  VAR_1 |= ~VAR_5;
  if (!FUNC_3 (VAR_1)) {
   return VAR_0;
  }

  ut32 VAR_6 = FUNC_0 (VAR_1);
  VAR_4 = 64 - VAR_6;
  VAR_3 = VAR_6 + FUNC_1 (VAR_1) - (64 - VAR_2);
 }




 ut32 VAR_7 = (VAR_2 - VAR_4) & (VAR_2 - 1);


 ut64 VAR_8 = ~(VAR_2 - 1) << 1;


 VAR_8 |= (VAR_3 - 1);

 ut32 VAR_9 = ((VAR_8 >> 6) & 1) ^ 1;
 ut64 VAR_10 = (VAR_9 << 12) | (VAR_7 << 6) | (VAR_8 & 0x3f);
 return VAR_10;
}
