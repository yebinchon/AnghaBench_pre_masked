
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm5100_priv {struct wm5100_fll* fll; } ;
struct wm5100_fll {int fout; int src; unsigned int fref; int lock; } ;
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
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct _fll_div*,unsigned int,unsigned int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 struct wm5100_priv* FUNC_7 (struct snd_soc_component*) ;
 int FUNC_8 (struct snd_soc_component*,int ) ;
 int FUNC_9 (struct snd_soc_component*,int,int,int) ;
 struct i2c_client* FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 unsigned long FUNC_12 (int *,int ) ;

__attribute__((used)) static int FUNC_13(struct snd_soc_component *VAR_19, int VAR_20, int VAR_21,
     unsigned int VAR_22, unsigned int VAR_23)
{
 struct i2c_client *VAR_24 = FUNC_10(VAR_19->dev);
 struct wm5100_priv *VAR_25 = FUNC_7(VAR_19);
 struct _fll_div VAR_26;
 struct wm5100_fll *VAR_27;
 int VAR_28, VAR_29, VAR_30, VAR_31, VAR_32;
 unsigned long VAR_33;

 switch (VAR_20) {
 case 136:
  VAR_27 = &VAR_25->fll[0];
  VAR_29 = VAR_3 - 1;
  VAR_30 = VAR_7;
  break;
 case 135:
  VAR_27 = &VAR_25->fll[1];
  VAR_29 = VAR_15 - 1;
  VAR_30 = VAR_16;
  break;
 default:
  FUNC_1(VAR_19->dev, "Unknown FLL %d\n",VAR_20);
  return -VAR_0;
 }

 if (!VAR_23) {
  FUNC_0(VAR_19->dev, "FLL%d disabled", VAR_20);
  if (VAR_27->fout)
   FUNC_6(VAR_19->dev);
  VAR_27->fout = 0;
  FUNC_9(VAR_19, VAR_29 + 1, VAR_4, 0);
  return 0;
 }

 switch (VAR_21) {
 case 129:
 case 128:
 case 131:
 case 130:
 case 134:
 case 133:
 case 132:
  break;
 default:
  FUNC_1(VAR_19->dev, "Invalid FLL source %d\n", VAR_21);
  return -VAR_0;
 }

 VAR_28 = FUNC_2(&VAR_26, VAR_22, VAR_23);
 if (VAR_28 < 0)
  return VAR_28;


 FUNC_9(VAR_19, VAR_29 + 1, VAR_4, 0);

 FUNC_9(VAR_19, VAR_29 + 2,
       VAR_9 | VAR_5,
       (VAR_26.fll_outdiv << VAR_10) |
       VAR_26.fll_fratio);
 FUNC_9(VAR_19, VAR_29 + 3, VAR_14,
       VAR_26.theta);
 FUNC_9(VAR_19, VAR_29 + 5, VAR_8, VAR_26.n);
 FUNC_9(VAR_19, VAR_29 + 6,
       VAR_11 |
       VAR_13,
       (VAR_26.fll_refclk_div
        << VAR_12) | VAR_21);
 FUNC_9(VAR_19, VAR_29 + 7, VAR_6,
       VAR_26.lambda);


 FUNC_11(&VAR_27->lock);

 FUNC_5(VAR_19->dev);

 FUNC_9(VAR_19, VAR_29 + 1, VAR_4, VAR_4);

 if (VAR_24->irq)
  VAR_32 = 2;
 else
  VAR_32 = 50;

 FUNC_9(VAR_19, VAR_2, VAR_18,
       VAR_18);


 for (VAR_31 = 0; VAR_31 < VAR_32; VAR_31++) {
  if (VAR_24->irq) {
   VAR_33 = FUNC_12(&VAR_27->lock,
       FUNC_3(25));
   if (VAR_33 > 0)
    break;
  } else {
   FUNC_4(1);
  }

  VAR_28 = FUNC_8(VAR_19,
       VAR_17);
  if (VAR_28 < 0) {
   FUNC_1(VAR_19->dev,
    "Failed to read FLL status: %d\n",
    VAR_28);
   continue;
  }
  if (VAR_28 & VAR_30)
   break;
 }
 if (VAR_31 == VAR_32) {
  FUNC_1(VAR_19->dev, "FLL%d lock timed out\n", VAR_20);
  FUNC_6(VAR_19->dev);
  return -VAR_1;
 }

 VAR_27->src = VAR_21;
 VAR_27->fref = VAR_22;
 VAR_27->fout = VAR_23;

 FUNC_0(VAR_19->dev, "FLL%d running %dHz->%dHz\n", VAR_20,
  VAR_22, VAR_23);

 return 0;
}
