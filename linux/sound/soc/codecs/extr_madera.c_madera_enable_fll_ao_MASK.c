
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct reg_sequence {unsigned int def; scalar_t__ reg; } ;
struct madera_fll {unsigned int ref_src; scalar_t__ base; struct madera* madera; } ;
struct madera {int regmap; int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (struct madera_fll*,char*,char*) ;
 int FUNC_1 (struct madera_fll*,scalar_t__) ;
 int FUNC_2 (struct madera_fll*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__,int ,int ) ;
 int FUNC_5 (int ,scalar_t__,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct madera_fll *VAR_6,
    const struct reg_sequence *VAR_7,
    unsigned int VAR_8)
{
 struct madera *VAR_9 = VAR_6->madera;
 int VAR_10 = FUNC_1(VAR_6, VAR_6->base);
 unsigned int VAR_11;
 int VAR_12;

 if (VAR_10 < 0)
  return VAR_10;

 if (!VAR_10)
  FUNC_3(VAR_9->dev);

 FUNC_0(VAR_6, "Enabling FLL_AO, initially %s\n",
         VAR_10 ? "enabled" : "disabled");


 FUNC_4(VAR_6->madera->regmap,
      VAR_6->base + VAR_0,
      VAR_3, VAR_3);

 for (VAR_12 = 0; VAR_12 < VAR_8; VAR_12++) {
  VAR_11 = VAR_7[VAR_12].def;


  if (VAR_7[VAR_12].reg == VAR_1) {
   VAR_11 &= ~VAR_4;
   VAR_11 |= (VAR_6->ref_src << VAR_5)
    & VAR_4;
  }

  FUNC_5(VAR_9->regmap, VAR_7[VAR_12].reg, VAR_11);
 }

 FUNC_4(VAR_9->regmap,
      VAR_6->base + VAR_0,
      VAR_2, VAR_2);


 FUNC_4(VAR_9->regmap,
      VAR_6->base + VAR_0,
      VAR_3, 0);

 if (!VAR_10)
  FUNC_2(VAR_6, 1);

 return 0;
}
