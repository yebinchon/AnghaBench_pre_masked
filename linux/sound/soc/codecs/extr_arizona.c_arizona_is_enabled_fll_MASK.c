
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arizona_fll {struct arizona* arizona; } ;
struct arizona {int regmap; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct arizona_fll*,char*,int) ;
 int FUNC_1 (int ,int,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct arizona_fll *VAR_1, int VAR_2)
{
 struct arizona *VAR_3 = VAR_1->arizona;
 unsigned int VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3->regmap, VAR_2 + 1, &VAR_4);
 if (VAR_5 != 0) {
  FUNC_0(VAR_1, "Failed to read current state: %d\n",
    VAR_5);
  return VAR_5;
 }

 return VAR_4 & VAR_0;
}
