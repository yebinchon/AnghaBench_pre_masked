
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct madera_fll {struct madera* madera; } ;
struct madera {int regmap; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct madera_fll*,char*,int) ;
 int FUNC_1 (int ,scalar_t__,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct madera_fll *VAR_2, int VAR_3)
{
 struct madera *VAR_4 = VAR_2->madera;
 unsigned int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_4->regmap,
     VAR_3 + VAR_1, &VAR_5);
 if (VAR_6 != 0) {
  FUNC_0(VAR_2, "Failed to read current state: %d\n", VAR_6);
  return VAR_6;
 }

 return VAR_5 & VAR_0;
}
