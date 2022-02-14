
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm2200_priv {int fll_fout; int fll_src; unsigned int fll_fref; int fll_lock; } ;
struct snd_soc_component {int dev; } ;
struct i2c_client {scalar_t__ irq; } ;
struct _fll_div {int fll_outdiv; int fll_fratio; int theta; int n; int fll_refclk_div; int lambda; } ;


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
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct _fll_div*,unsigned int,unsigned int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 struct wm2200_priv* FUNC_7 (struct snd_soc_component*) ;
 int FUNC_8 (struct snd_soc_component*,int ) ;
 int FUNC_9 (struct snd_soc_component*,int ,int,int) ;
 struct i2c_client* FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 unsigned long FUNC_12 (int *,int ) ;

__attribute__((used)) static int FUNC_13(struct snd_soc_component *VAR_26, int VAR_27, int VAR_28,
     unsigned int VAR_29, unsigned int VAR_30)
{
 struct i2c_client *VAR_31 = FUNC_10(VAR_26->dev);
 struct wm2200_priv *VAR_32 = FUNC_7(VAR_26);
 struct _fll_div VAR_33;
 int VAR_34, VAR_35, VAR_36;
 unsigned long VAR_37;

 if (!VAR_30) {
  FUNC_0(VAR_26->dev, "FLL disabled");

  if (VAR_32->fll_fout)
   FUNC_6(VAR_26->dev);

  VAR_32->fll_fout = 0;
  FUNC_9(VAR_26, VAR_6,
        VAR_15, 0);
  return 0;
 }

 switch (VAR_28) {
 case 129:
 case 128:
 case 130:
  break;
 default:
  FUNC_1(VAR_26->dev, "Invalid FLL source %d\n", VAR_28);
  return -VAR_0;
 }

 VAR_34 = FUNC_2(&VAR_33, VAR_29, VAR_30);
 if (VAR_34 < 0)
  return VAR_34;


 FUNC_9(VAR_26, VAR_6, VAR_15, 0);

 FUNC_9(VAR_26, VAR_7,
       VAR_21 | VAR_17,
       (VAR_33.fll_outdiv << VAR_22) |
       VAR_33.fll_fratio);
 if (VAR_33.theta) {
  FUNC_9(VAR_26, VAR_8,
        VAR_16,
        VAR_16);
  FUNC_9(VAR_26, VAR_13,
        VAR_14,
        VAR_14);
 } else {
  FUNC_9(VAR_26, VAR_8,
        VAR_16, 0);
  FUNC_9(VAR_26, VAR_13,
        VAR_14, 0);
 }

 FUNC_9(VAR_26, VAR_9, VAR_23,
       VAR_33.theta);
 FUNC_9(VAR_26, VAR_10, VAR_20,
       VAR_33.n);
 FUNC_9(VAR_26, VAR_11,
       VAR_3 |
       VAR_5,
       (VAR_33.fll_refclk_div
        << VAR_4) | VAR_28);
 FUNC_9(VAR_26, VAR_12,
       VAR_18, VAR_33.lambda);


 FUNC_11(&VAR_32->fll_lock);

 FUNC_5(VAR_26->dev);

 FUNC_9(VAR_26, VAR_6,
       VAR_15, VAR_15);

 if (VAR_31->irq)
  VAR_36 = 2;
 else
  VAR_36 = 50;

 FUNC_9(VAR_26, VAR_2, VAR_25,
       VAR_25);


 for (VAR_35 = 0; VAR_35 < VAR_36; VAR_35++) {
  if (VAR_31->irq) {
   VAR_37 = FUNC_12(
       &VAR_32->fll_lock,
       FUNC_3(25));
   if (VAR_37 > 0)
    break;
  } else {
   FUNC_4(1);
  }

  VAR_34 = FUNC_8(VAR_26,
       VAR_24);
  if (VAR_34 < 0) {
   FUNC_1(VAR_26->dev,
    "Failed to read FLL status: %d\n",
    VAR_34);
   continue;
  }
  if (VAR_34 & VAR_19)
   break;
 }
 if (VAR_35 == VAR_36) {
  FUNC_1(VAR_26->dev, "FLL lock timed out\n");
  FUNC_6(VAR_26->dev);
  return -VAR_1;
 }

 VAR_32->fll_src = VAR_28;
 VAR_32->fll_fref = VAR_29;
 VAR_32->fll_fout = VAR_30;

 FUNC_0(VAR_26->dev, "FLL running %dHz->%dHz\n", VAR_29, VAR_30);

 return 0;
}
