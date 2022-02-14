
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nau8825 {int regmap; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int,unsigned int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(struct nau8825 *VAR_5,
 unsigned int VAR_6, unsigned int VAR_7, unsigned int VAR_8)
{
 unsigned int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;

 if (VAR_6 == VAR_7 || VAR_8 == 0) {
  return;
 } else if (VAR_6 < VAR_7) {
  VAR_11 = 1;
  VAR_12 = VAR_6;
  VAR_13 = VAR_7;
 } else {
  VAR_11 = 0;
  VAR_12 = VAR_7;
  VAR_13 = VAR_6;
 }

 if (VAR_13 > VAR_3)
  VAR_13 = VAR_3;

 for (VAR_10 = VAR_12; VAR_10 < VAR_13; VAR_10 += VAR_8) {
  if (VAR_11)
   VAR_9 = VAR_10;
  else
   VAR_9 = VAR_13 - VAR_10 + VAR_12;
  FUNC_0(VAR_5->regmap, VAR_4,
   VAR_0 | VAR_2,
   (VAR_9 << VAR_1) | VAR_9);
  FUNC_1(10000, 10500);
 }
 if (VAR_11)
  VAR_9 = VAR_13;
 else
  VAR_9 = VAR_12;
 FUNC_0(VAR_5->regmap, VAR_4,
  VAR_0 | VAR_2,
  (VAR_9 << VAR_1) | VAR_9);
}
