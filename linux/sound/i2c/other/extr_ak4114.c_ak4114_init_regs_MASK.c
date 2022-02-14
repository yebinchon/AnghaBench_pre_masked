
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ak4114 {unsigned char* regmap; unsigned char* txcsb; } ;


 unsigned char VAR_0 ;
 size_t VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int FUNC_0 (struct ak4114*,size_t,unsigned char) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct ak4114 *VAR_4)
{
 unsigned char VAR_5 = VAR_4->regmap[VAR_1], VAR_6;


 FUNC_0(VAR_4, VAR_1, VAR_5 & ~(VAR_3|VAR_0));
 FUNC_1(200);

 FUNC_0(VAR_4, VAR_1, (VAR_5 | VAR_3) & ~VAR_0);
 FUNC_1(200);
 for (VAR_6 = 1; VAR_6 < 6; VAR_6++)
  FUNC_0(VAR_4, VAR_6, VAR_4->regmap[VAR_6]);
 for (VAR_6 = 0; VAR_6 < 5; VAR_6++)
  FUNC_0(VAR_4, VAR_6 + VAR_2, VAR_4->txcsb[VAR_6]);

 FUNC_0(VAR_4, VAR_1, VAR_5 | VAR_3 | VAR_0);
}
