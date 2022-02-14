
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct madera_fll_cfg {int gain; int lambda; int theta; int alt_gain; } ;
struct madera_fll {unsigned int base; scalar_t__ ref_src; scalar_t__ ref_freq; scalar_t__ fout; scalar_t__ sync_src; scalar_t__ sync_freq; struct madera* madera; } ;
struct madera {int type; int regmap; int dev; int rev; } ;



 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;

 int FUNC_0 (struct madera_fll*,struct madera_fll_cfg*,scalar_t__,int) ;
 int FUNC_1 (struct madera_fll*) ;
 int FUNC_2 (struct madera_fll*,char*,char*) ;
 int FUNC_3 (struct madera_fll*,char*,...) ;
 int FUNC_4 (struct madera_fll*,char*) ;
 int FUNC_5 (struct madera_fll*,unsigned int) ;
 int FUNC_6 (struct madera_fll*,struct madera_fll_cfg*,int) ;
 int FUNC_7 (struct madera_fll*,int) ;
 int FUNC_8 (struct madera*,unsigned int,struct madera_fll_cfg*,scalar_t__,int,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,scalar_t__,int ,int ) ;
 int FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(struct madera_fll *VAR_15)
{
 struct madera *VAR_16 = VAR_15->madera;
 bool VAR_17 = 0;
 int VAR_18 = FUNC_5(VAR_15, VAR_15->base);
 int VAR_19;
 struct madera_fll_cfg VAR_20;
 unsigned int VAR_21;
 int VAR_22, VAR_23;
 bool VAR_24 = 0;

 if (VAR_18 < 0)
  return VAR_18;

 if (VAR_15->ref_src < 0 || VAR_15->ref_freq == 0) {
  FUNC_3(VAR_15, "No REFCLK\n");
  VAR_23 = -VAR_1;
  goto err;
 }

 FUNC_2(VAR_15, "Enabling FLL, initially %s\n",
         VAR_18 ? "enabled" : "disabled");

 if (VAR_15->fout < VAR_11 ||
     VAR_15->fout > VAR_10) {
  FUNC_3(VAR_15, "invalid fout %uHz\n", VAR_15->fout);
  VAR_23 = -VAR_1;
  goto err;
 }

 switch (VAR_16->type) {
 case 130:
  VAR_21 = VAR_15->base + VAR_0;
  break;
 default:
  VAR_21 = VAR_15->base + VAR_14;
  break;
 }

 VAR_19 = FUNC_5(VAR_15, VAR_21);
 if (VAR_19 < 0)
  return VAR_19;

 if (VAR_18) {

  FUNC_10(VAR_15->madera->regmap,
       VAR_15->base + VAR_8,
       VAR_3,
       VAR_3);
  FUNC_11(32);
  FUNC_10(VAR_15->madera->regmap,
       VAR_15->base + VAR_9,
       VAR_4, 0);
 }


 if (VAR_15->sync_src >= 0) {
  VAR_23 = FUNC_0(VAR_15, &VAR_20, VAR_15->sync_freq, 1);
  if (VAR_23 < 0)
   goto err;

  VAR_24 |= FUNC_8(VAR_16, VAR_21,
            &VAR_20, VAR_15->sync_src,
            1, VAR_20.gain);
  VAR_17 = 1;
 }

 if (VAR_18 && !!VAR_19 != VAR_17)
  FUNC_4(VAR_15, "Synchroniser changed on active FLL\n");


 VAR_23 = FUNC_0(VAR_15, &VAR_20, VAR_15->ref_freq, 0);
 if (VAR_23 < 0)
  goto err;


 if (VAR_17 && VAR_20.lambda)
  VAR_20.theta = (VAR_20.theta * (1 << 16)) / VAR_20.lambda;

 switch (VAR_15->madera->type) {
 case 130:
  switch (VAR_15->madera->rev) {
  case 0:
   VAR_22 = VAR_20.gain;
   break;
  default:
   VAR_24 |=
    FUNC_6(VAR_15, &VAR_20,
        VAR_17);
   if (!VAR_17 && VAR_20.theta == 0)
    VAR_22 = VAR_20.alt_gain;
   else
    VAR_22 = VAR_20.gain;
   break;
  }
  break;
 case 129:
 case 128:
  VAR_22 = VAR_20.gain;
  break;
 default:
  VAR_24 |= FUNC_6(VAR_15, &VAR_20,
             VAR_17);
  if (!VAR_17 && VAR_20.theta == 0)
   VAR_22 = VAR_20.alt_gain;
  else
   VAR_22 = VAR_20.gain;
  break;
 }

 VAR_24 |= FUNC_8(VAR_16, VAR_15->base,
           &VAR_20, VAR_15->ref_src,
           0, VAR_22);





 if (VAR_17 && VAR_15->sync_freq > 100000)
  FUNC_10(VAR_16->regmap,
       VAR_21 + VAR_13,
       VAR_6, 0);
 else
  FUNC_10(VAR_16->regmap,
       VAR_21 + VAR_13,
       VAR_6,
       VAR_5);

 if (!VAR_18)
  FUNC_9(VAR_16->dev);

 if (VAR_17)
  FUNC_10(VAR_16->regmap,
       VAR_21 + VAR_12,
       VAR_7,
       VAR_7);
 FUNC_10(VAR_16->regmap,
      VAR_15->base + VAR_8,
      VAR_2, VAR_2);

 if (VAR_18)
  FUNC_10(VAR_16->regmap,
       VAR_15->base + VAR_8,
       VAR_3, 0);

 if (VAR_24 || !VAR_18)
  FUNC_7(VAR_15, 1);

 return 0;

err:

 FUNC_1(VAR_15);

 return VAR_23;
}
