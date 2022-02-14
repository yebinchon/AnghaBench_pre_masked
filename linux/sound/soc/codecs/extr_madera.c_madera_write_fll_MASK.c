
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct madera_fll_cfg {int theta; int lambda; int fratio; int refdiv; int n; } ;
struct madera {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_0 (int ,scalar_t__,int,int,int*) ;

__attribute__((used)) static bool FUNC_1(struct madera *VAR_19, unsigned int VAR_20,
        struct madera_fll_cfg *VAR_21, int VAR_22,
        bool VAR_23, int VAR_24)
{
 bool VAR_25, VAR_26;

 VAR_26 = 0;
 FUNC_0(VAR_19->regmap,
     VAR_20 + VAR_13,
     VAR_11,
     VAR_21->theta, &VAR_25);
 VAR_26 |= VAR_25;
 FUNC_0(VAR_19->regmap,
     VAR_20 + VAR_14,
     VAR_5,
     VAR_21->lambda, &VAR_25);
 VAR_26 |= VAR_25;
 FUNC_0(VAR_19->regmap,
     VAR_20 + VAR_15,
     VAR_1,
     VAR_21->fratio << VAR_2,
     &VAR_25);
 VAR_26 |= VAR_25;
 FUNC_0(VAR_19->regmap,
     VAR_20 + VAR_16,
     VAR_7 |
     VAR_9,
     VAR_21->refdiv << VAR_8 |
     VAR_22 << VAR_10,
     &VAR_25);
 VAR_26 |= VAR_25;

 if (VAR_23) {
  FUNC_0(VAR_19->regmap,
      VAR_20 + VAR_18,
      VAR_3,
      VAR_24 << VAR_4,
      &VAR_25);
  VAR_26 |= VAR_25;
 } else {
  FUNC_0(VAR_19->regmap,
      VAR_20 + VAR_17,
      VAR_3,
      VAR_24 << VAR_4,
      &VAR_25);
  VAR_26 |= VAR_25;
 }

 FUNC_0(VAR_19->regmap,
     VAR_20 + VAR_12,
     VAR_0 | VAR_6,
     VAR_0 | VAR_21->n, &VAR_25);
 VAR_26 |= VAR_25;

 return VAR_26;
}
