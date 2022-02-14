
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct madera_fll {int ref_src; scalar_t__ base; int ref_freq; struct madera* madera; } ;
struct madera {int regmap; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct madera_fll*,char*,char*) ;
 int FUNC_1 (struct madera_fll*,char*,int) ;
 int FUNC_2 (struct madera_fll*,int ) ;
 int FUNC_3 (struct madera_fll*,scalar_t__) ;
 int FUNC_4 (struct madera_fll*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,scalar_t__,int,int) ;

__attribute__((used)) static int FUNC_7(struct madera_fll *VAR_9)
{
 struct madera *VAR_10 = VAR_9->madera;
 int VAR_11 = FUNC_3(VAR_9, VAR_9->base);
 int VAR_12;

 if (VAR_11 < 0)
  return VAR_11;

 if (!VAR_11)
  FUNC_5(VAR_10->dev);

 FUNC_0(VAR_9, "Enabling FLL, initially %s\n",
         VAR_11 ? "enabled" : "disabled");


 FUNC_6(VAR_9->madera->regmap,
      VAR_9->base + VAR_7,
      VAR_4,
      VAR_4);


 VAR_12 = FUNC_2(VAR_9, VAR_9->ref_freq);
 if (VAR_12) {
  FUNC_1(VAR_9, "Failed to set FLL: %d\n", VAR_12);
  goto out;
 }
 FUNC_6(VAR_10->regmap,
      VAR_9->base + VAR_7,
      VAR_0,
      VAR_9->ref_src << VAR_1);

 FUNC_6(VAR_10->regmap,
      VAR_9->base + VAR_7,
      VAR_3,
      VAR_3);

out:
 FUNC_6(VAR_10->regmap,
      VAR_9->base + VAR_6,
      VAR_5,
      VAR_5);

 FUNC_6(VAR_10->regmap,
      VAR_9->base + VAR_8,
      VAR_2,
      VAR_2);


 FUNC_6(VAR_10->regmap,
      VAR_9->base + VAR_7,
      VAR_4,
      0);

 if (!VAR_11)
  FUNC_4(VAR_9, 1);

 return 0;
}
