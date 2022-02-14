
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ak4113 {unsigned char* regmap; } ;


 unsigned char VAR_0 ;
 int FUNC_0 (struct ak4113*,unsigned char,unsigned char) ;

void FUNC_1(struct ak4113 *VAR_1, unsigned char VAR_2,
  unsigned char VAR_3, unsigned char VAR_4)
{
 if (VAR_2 >= VAR_0)
  return;
 FUNC_0(VAR_1, VAR_2, (VAR_1->regmap[VAR_2] & ~VAR_3) | VAR_4);
}
