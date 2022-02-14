
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct max98090_priv {unsigned int sysclk; unsigned int pclk; int master; int devtype; int pll_work; int pll_det_disable_work; int pll_det_enable_work; int jack_work; int jack_state; scalar_t__ pa2en; scalar_t__ pa1en; scalar_t__ lin_state; struct max98090_cdata* dai; struct snd_soc_component* component; int mclk; } ;
struct max98090_cdata {unsigned int rate; unsigned int fmt; } ;
typedef enum max98090_type { ____Placeholder_max98090_type } max98090_type ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*,unsigned int) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,char*,unsigned int*) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (struct snd_soc_component*) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_10 (struct max98090_priv*) ;
 struct max98090_priv* FUNC_11 (struct snd_soc_component*) ;
 int FUNC_12 (struct snd_soc_component*,int ) ;
 int FUNC_13 (struct snd_soc_component*,int ,int ,unsigned int) ;
 int FUNC_14 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_15(struct snd_soc_component *VAR_28)
{
 struct max98090_priv *VAR_29 = FUNC_11(VAR_28);
 struct max98090_cdata *VAR_30;
 enum max98090_type VAR_31;
 int VAR_32 = 0;
 int VAR_33;
 unsigned int VAR_34;

 FUNC_3(VAR_28->dev, "max98090_probe\n");

 VAR_29->mclk = FUNC_8(VAR_28->dev, "mclk");
 if (FUNC_2(VAR_29->mclk) == -VAR_0)
  return -VAR_0;

 VAR_29->component = VAR_28;


 FUNC_10(VAR_29);



 VAR_29->sysclk = (unsigned)-1;
 VAR_29->pclk = (unsigned)-1;
 VAR_29->master = 0;

 VAR_30 = &VAR_29->dai[0];
 VAR_30->rate = (unsigned)-1;
 VAR_30->fmt = (unsigned)-1;

 VAR_29->lin_state = 0;
 VAR_29->pa1en = 0;
 VAR_29->pa2en = 0;

 VAR_32 = FUNC_12(VAR_28, VAR_18);
 if (VAR_32 < 0) {
  FUNC_4(VAR_28->dev, "Failed to read device revision: %d\n",
   VAR_32);
  goto err_access;
 }

 if ((VAR_32 >= VAR_19) && (VAR_32 <= VAR_19 + 0x0f)) {
  VAR_31 = VAR_22;
  FUNC_5(VAR_28->dev, "MAX98090 REVID=0x%02x\n", VAR_32);
 } else if ((VAR_32 >= VAR_21) && (VAR_32 <= VAR_21 + 0x0f)) {
  VAR_31 = VAR_23;
  FUNC_5(VAR_28->dev, "MAX98091 REVID=0x%02x\n", VAR_32);
 } else {
  VAR_31 = VAR_22;
  FUNC_4(VAR_28->dev, "Unrecognized revision 0x%02x\n", VAR_32);
 }

 if (VAR_29->devtype != VAR_31) {
  FUNC_6(VAR_28->dev, "Mismatch in DT specified CODEC type.\n");
  VAR_29->devtype = VAR_31;
 }

 VAR_29->jack_state = VAR_5;

 FUNC_0(&VAR_29->jack_work, VAR_24);
 FUNC_0(&VAR_29->pll_det_enable_work,
     VAR_26);
 FUNC_1(&VAR_29->pll_det_disable_work,
    VAR_25);
 FUNC_1(&VAR_29->pll_work, VAR_27);


 FUNC_14(VAR_28, VAR_16,
  VAR_7 | VAR_6);






 FUNC_12(VAR_28, VAR_15);


 FUNC_13(VAR_28, VAR_14,
  VAR_3,
  1 << VAR_4);
 FUNC_13(VAR_28, VAR_14,
  VAR_10,
  0 << VAR_11);
 FUNC_13(VAR_28, VAR_12,
  VAR_1,
  1 << VAR_2);


 FUNC_14(VAR_28, VAR_13,
  VAR_20);

 VAR_33 = FUNC_7(VAR_28->dev, "maxim,micbias", &VAR_34);
 if (VAR_33) {
  VAR_34 = VAR_8;
  FUNC_5(VAR_28->dev, "use default 2.8v micbias\n");
 } else if (VAR_34 > VAR_8) {
  FUNC_4(VAR_28->dev, "micbias out of range 0x%x\n", VAR_34);
  VAR_34 = VAR_8;
 }

 FUNC_13(VAR_28, VAR_17,
  VAR_9, VAR_34);

 FUNC_9(VAR_28);

err_access:
 return VAR_32;
}
