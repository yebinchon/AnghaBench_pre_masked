
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct wm8994_priv {int* aifdiv; int * aifclk; TYPE_1__* fll; int * fll_locked; scalar_t__ fll_locked_irq; scalar_t__ fll_byp; struct wm8994* wm8994; } ;
struct wm8994 {int type; int revision; } ;
struct snd_soc_component {int dev; } ;
struct fll_div {int outdiv; int fll_fratio; int k; int n; int lambda; int clk_ref_div; } ;
struct TYPE_2__ {int src; unsigned int in; unsigned int out; } ;


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
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;






 int VAR_36 ;
 int FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 struct wm8994_priv* FUNC_9 (struct snd_soc_component*) ;
 int FUNC_10 (struct snd_soc_component*,int) ;
 int FUNC_11 (struct snd_soc_component*,int,int,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct snd_soc_component*) ;
 int FUNC_14 (struct snd_soc_component*) ;
 unsigned long FUNC_15 (int *,int ) ;
 int FUNC_16 (struct wm8994*,struct fll_div*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_17(struct snd_soc_component *VAR_37, int VAR_38, int VAR_39,
     unsigned int VAR_40, unsigned int VAR_41)
{
 struct wm8994_priv *VAR_42 = FUNC_9(VAR_37);
 struct wm8994 *VAR_43 = VAR_42->wm8994;
 int VAR_44, VAR_45;
 struct fll_div VAR_46;
 u16 VAR_47, VAR_48, VAR_49, VAR_50;
 unsigned long VAR_51;
 bool VAR_52;

 switch (VAR_38) {
 case 134:
  VAR_44 = 0;
  VAR_38 = 0;
  VAR_50 = 0x10;
  break;
 case 133:
  VAR_44 = 0x20;
  VAR_38 = 1;
  VAR_50 = 0x18;
  break;
 default:
  return -VAR_1;
 }

 VAR_47 = FUNC_10(VAR_37, VAR_16 + VAR_44);
 VAR_52 = VAR_47 & VAR_21;

 switch (VAR_39) {
 case 0:

  if (VAR_41)
   return -VAR_1;
  VAR_39 = VAR_42->fll[VAR_38].src;
  break;
 case 129:
 case 128:
 case 130:
 case 132:
  break;
 case 131:
  VAR_40 = 12000000;
  VAR_41 = 12000000;
  break;
 default:
  return -VAR_1;
 }


 if (VAR_42->fll[VAR_38].src == VAR_39 &&
     VAR_42->fll[VAR_38].in == VAR_40 && VAR_42->fll[VAR_38].out == VAR_41)
  return 0;





 if (VAR_41)
  VAR_45 = FUNC_16(VAR_43, &VAR_46, VAR_40, VAR_41);
 else
  VAR_45 = FUNC_16(VAR_43, &VAR_46, VAR_42->fll[VAR_38].in,
         VAR_42->fll[VAR_38].out);
 if (VAR_45 < 0)
  return VAR_45;


 VAR_48 = FUNC_10(VAR_37, VAR_15);
 if (VAR_48 & VAR_36)
  VAR_49 = VAR_13;
 else
  VAR_49 = VAR_10;
 VAR_47 = FUNC_10(VAR_37, VAR_49);

 if ((VAR_47 & VAR_7) &&
     (VAR_47 & VAR_9) == VAR_50) {
  FUNC_4(VAR_37->dev, "FLL%d is currently providing SYSCLK\n",
   VAR_38 + 1);
  return -VAR_0;
 }


 FUNC_11(VAR_37, VAR_16 + VAR_44,
       VAR_21, 0);

 if (VAR_42->fll_byp && VAR_39 == 132 &&
     VAR_40 == VAR_41 && VAR_41) {
  FUNC_3(VAR_37->dev, "Bypassing FLL%d\n", VAR_38 + 1);
  FUNC_11(VAR_37, VAR_20 + VAR_44,
        VAR_2, VAR_2);
  goto out;
 }

 VAR_47 = (VAR_46.outdiv << VAR_32) |
  (VAR_46.fll_fratio << VAR_24);
 FUNC_11(VAR_37, VAR_17 + VAR_44,
       VAR_31 |
       VAR_23, VAR_47);

 FUNC_11(VAR_37, VAR_18 + VAR_44,
       VAR_27, VAR_46.k);

 FUNC_11(VAR_37, VAR_19 + VAR_44,
       VAR_28,
       VAR_46.n << VAR_29);

 if (VAR_46.lambda) {
  FUNC_11(VAR_37, VAR_3 + VAR_44,
        VAR_6,
        VAR_46.lambda);
  FUNC_11(VAR_37, VAR_4 + VAR_44,
        VAR_5, VAR_5);
 } else {
  FUNC_11(VAR_37, VAR_4 + VAR_44,
        VAR_5, 0);
 }

 FUNC_11(VAR_37, VAR_20 + VAR_44,
       VAR_25 | VAR_2 |
       VAR_33 |
       VAR_35,
       ((VAR_39 == 131)
        << VAR_26) |
       (VAR_46.clk_ref_div << VAR_34) |
       (VAR_39 - 1));


 FUNC_12(&VAR_42->fll_locked[VAR_38]);


 if (VAR_41) {

  if (!VAR_52) {
   FUNC_1(VAR_37);

   switch (VAR_43->type) {
   case 135:
    FUNC_14(VAR_37);
    break;
   case 136:
    if (VAR_43->revision < 1)
     FUNC_14(VAR_37);
    break;
   default:
    break;
   }
  }

  VAR_47 = VAR_21;

  if (VAR_46.k)
   VAR_47 |= VAR_22;
  if (VAR_39 == 131)
   VAR_47 |= VAR_30;

  FUNC_11(VAR_37, VAR_16 + VAR_44,
        VAR_21 | VAR_30 |
        VAR_22, VAR_47);

  if (VAR_42->fll_locked_irq) {
   VAR_51 = FUNC_15(&VAR_42->fll_locked[VAR_38],
             FUNC_7(10));
   if (VAR_51 == 0)
    FUNC_5(VAR_37->dev,
      "Timed out waiting for FLL lock\n");
  } else {
   FUNC_8(5);
  }
 } else {
  if (VAR_52) {
   switch (VAR_43->type) {
   case 135:
    FUNC_13(VAR_37);
    break;
   case 136:
    if (VAR_43->revision < 1)
     FUNC_13(VAR_37);
    break;
   default:
    break;
   }

   FUNC_0(VAR_37);
  }
 }

out:
 VAR_42->fll[VAR_38].in = VAR_40;
 VAR_42->fll[VAR_38].out = VAR_41;
 VAR_42->fll[VAR_38].src = VAR_39;

 FUNC_2(VAR_37);





 if (FUNC_6(VAR_42->aifclk[0], VAR_42->aifclk[1]) < 50000) {
  FUNC_3(VAR_37->dev, "Configuring AIFs for 128fs\n");

  VAR_42->aifdiv[0] = FUNC_10(VAR_37, VAR_11)
   & VAR_8;
  VAR_42->aifdiv[1] = FUNC_10(VAR_37, VAR_14)
   & VAR_8;

  FUNC_11(VAR_37, VAR_11,
        VAR_8, 0x1);
  FUNC_11(VAR_37, VAR_14,
        VAR_12, 0x1);
 } else if (VAR_42->aifdiv[0]) {
  FUNC_11(VAR_37, VAR_11,
        VAR_8,
        VAR_42->aifdiv[0]);
  FUNC_11(VAR_37, VAR_14,
        VAR_12,
        VAR_42->aifdiv[1]);

  VAR_42->aifdiv[0] = 0;
  VAR_42->aifdiv[1] = 0;
 }

 return 0;
}
