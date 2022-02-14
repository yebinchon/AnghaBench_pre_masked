
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct madera_fll {scalar_t__ base; struct madera* madera; } ;
struct madera {int dev; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct madera_fll*,char*) ;
 int FUNC_1 (struct madera_fll*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__,int ,int ) ;
 int FUNC_4 (int ,scalar_t__,int ,int ,int*) ;

__attribute__((used)) static int FUNC_5(struct madera_fll *VAR_7)
{
 struct madera *VAR_8 = VAR_7->madera;
 bool VAR_9;

 FUNC_0(VAR_7, "Disabling FLL\n");







 FUNC_3(VAR_8->regmap,
      VAR_7->base + VAR_4,
      VAR_3, 0);
 FUNC_3(VAR_8->regmap,
      VAR_7->base + VAR_5,
      VAR_2, VAR_2);
 FUNC_4(VAR_8->regmap,
     VAR_7->base + VAR_5,
     VAR_1, 0, &VAR_9);

 FUNC_1(VAR_7, 0);
 FUNC_3(VAR_8->regmap,
      VAR_7->base + VAR_6,
      VAR_0, 0);

 if (VAR_9)
  FUNC_2(VAR_8->dev);

 return 0;
}
