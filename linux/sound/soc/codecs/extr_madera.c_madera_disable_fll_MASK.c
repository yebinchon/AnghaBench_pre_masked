
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct madera_fll {unsigned int base; struct madera* madera; } ;
struct madera {int type; int dev; int regmap; } ;



 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (struct madera_fll*,char*) ;
 int FUNC_1 (struct madera_fll*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned int,int ,int ) ;
 int FUNC_4 (int ,unsigned int,int ,int ,int*) ;

__attribute__((used)) static void FUNC_5(struct madera_fll *VAR_7)
{
 struct madera *VAR_8 = VAR_7->madera;
 unsigned int VAR_9;
 bool VAR_10;

 switch (VAR_8->type) {
 case 128:
  VAR_9 = VAR_7->base + VAR_0;
  break;
 default:
  VAR_9 = VAR_7->base + VAR_6;
  break;
 }

 FUNC_0(VAR_7, "Disabling FLL\n");

 FUNC_3(VAR_8->regmap,
      VAR_7->base + VAR_4,
      VAR_2, VAR_2);
 FUNC_4(VAR_8->regmap,
     VAR_7->base + VAR_4,
     VAR_1, 0, &VAR_10);
 FUNC_3(VAR_8->regmap,
      VAR_9 + VAR_5,
      VAR_3, 0);
 FUNC_3(VAR_8->regmap,
      VAR_7->base + VAR_4,
      VAR_2, 0);

 FUNC_1(VAR_7, 0);

 if (VAR_10)
  FUNC_2(VAR_8->dev);
}
