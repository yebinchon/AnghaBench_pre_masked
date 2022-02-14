
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct madera_fll {scalar_t__ base; struct madera* madera; } ;
struct madera {int dev; int regmap; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct madera_fll*,char*) ;
 int FUNC_1 (struct madera_fll*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__,int ,int ) ;
 int FUNC_4 (int ,scalar_t__,int ,int ,int*) ;

__attribute__((used)) static int FUNC_5(struct madera_fll *VAR_5)
{
 struct madera *VAR_6 = VAR_5->madera;
 bool VAR_7;

 FUNC_0(VAR_5, "Disabling FLL_AO\n");

 FUNC_3(VAR_6->regmap,
      VAR_5->base + VAR_0,
      VAR_4, VAR_4);
 FUNC_4(VAR_6->regmap,
     VAR_5->base + VAR_0,
     VAR_3, 0, &VAR_7);

 FUNC_1(VAR_5, 0);
 FUNC_3(VAR_6->regmap,
      VAR_5->base + VAR_1,
      VAR_2, 0);

 if (VAR_7)
  FUNC_2(VAR_6->dev);

 return 0;
}
