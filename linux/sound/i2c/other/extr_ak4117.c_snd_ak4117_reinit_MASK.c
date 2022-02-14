
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ak4117 {unsigned char* regmap; int init; int timer; } ;


 unsigned char VAR_0 ;
 size_t VAR_1 ;
 unsigned char VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (struct ak4117*,size_t,unsigned char) ;
 int FUNC_3 (int) ;

void FUNC_4(struct ak4117 *VAR_4)
{
 unsigned char VAR_5 = VAR_4->regmap[VAR_1], VAR_6;

 FUNC_0(&VAR_4->timer);
 VAR_4->init = 1;

 FUNC_2(VAR_4, VAR_1, 0);
 FUNC_3(200);

 FUNC_2(VAR_4, VAR_1, (VAR_5 | VAR_2) & ~VAR_0);
 FUNC_3(200);
 for (VAR_6 = 1; VAR_6 < 5; VAR_6++)
  FUNC_2(VAR_4, VAR_6, VAR_4->regmap[VAR_6]);

 FUNC_2(VAR_4, VAR_1, VAR_5 | VAR_2 | VAR_0);
 VAR_4->init = 0;
 FUNC_1(&VAR_4->timer, 1 + VAR_3);
}
