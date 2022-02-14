
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8962_priv {int fll_src; unsigned int fll_fref; unsigned int fll_fout; scalar_t__ irq; int fll_lock; } ;
struct snd_soc_component {int dev; } ;
struct _fll_div {int fll_outdiv; int fll_refclk_div; int fll_fratio; scalar_t__ n; scalar_t__ lambda; scalar_t__ theta; } ;


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
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct _fll_div*,unsigned int,unsigned int) ;
 unsigned long FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 struct wm8962_priv* FUNC_7 (struct snd_soc_component*) ;
 int FUNC_8 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_9 (struct snd_soc_component*,int ,scalar_t__) ;
 unsigned long FUNC_10 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_11(struct snd_soc_component *VAR_19, int VAR_20, int VAR_21,
     unsigned int VAR_22, unsigned int VAR_23)
{
 struct wm8962_priv *VAR_24 = FUNC_7(VAR_19);
 struct _fll_div VAR_25;
 unsigned long VAR_26;
 int VAR_27;
 int VAR_28 = 0;


 if (VAR_21 == VAR_24->fll_src && VAR_22 == VAR_24->fll_fref &&
     VAR_23 == VAR_24->fll_fout)
  return 0;

 if (VAR_23 == 0) {
  FUNC_0(VAR_19->dev, "FLL disabled\n");

  VAR_24->fll_fref = 0;
  VAR_24->fll_fout = 0;

  FUNC_8(VAR_19, VAR_2,
        VAR_9, 0);

  FUNC_5(VAR_19->dev);

  return 0;
 }

 VAR_27 = FUNC_2(&VAR_25, VAR_22, VAR_23);
 if (VAR_27 != 0)
  return VAR_27;


 FUNC_8(VAR_19, VAR_2, VAR_9, 0);

 switch (VAR_20) {
 case 129:
 case 131:
 case 128:
  VAR_28 |= (VAR_20 - 1) << VAR_18;
  break;
 case 130:
  FUNC_8(VAR_19, VAR_2,
        VAR_13, VAR_13);
  FUNC_8(VAR_19, VAR_5,
        VAR_12, VAR_12);
  break;
 default:
  FUNC_1(VAR_19->dev, "Unknown FLL source %d\n", VAR_27);
  return -VAR_0;
 }

 if (VAR_25.theta || VAR_25.lambda)
  VAR_28 |= VAR_10;


 FUNC_8(VAR_19, VAR_2, VAR_9, 0);

 FUNC_8(VAR_19, VAR_3,
       VAR_14 |
       VAR_16,
       (VAR_25.fll_outdiv << VAR_15) |
       (VAR_25.fll_refclk_div));

 FUNC_8(VAR_19, VAR_4,
       VAR_11, VAR_25.fll_fratio);

 FUNC_9(VAR_19, VAR_6, VAR_25.theta);
 FUNC_9(VAR_19, VAR_7, VAR_25.lambda);
 FUNC_9(VAR_19, VAR_8, VAR_25.n);

 FUNC_6(&VAR_24->fll_lock);

 VAR_27 = FUNC_4(VAR_19->dev);
 if (VAR_27 < 0) {
  FUNC_1(VAR_19->dev, "Failed to resume device: %d\n", VAR_27);
  return VAR_27;
 }

 FUNC_8(VAR_19, VAR_2,
       VAR_10 | VAR_17 |
       VAR_9, VAR_28 | VAR_9);

 FUNC_0(VAR_19->dev, "FLL configured for %dHz->%dHz\n", VAR_22, VAR_23);




 if (VAR_24->irq)
  VAR_26 = FUNC_3(5);
 else
  VAR_26 = FUNC_3(1);

 VAR_26 = FUNC_10(&VAR_24->fll_lock,
           VAR_26);

 if (VAR_26 == 0 && VAR_24->irq) {
  FUNC_1(VAR_19->dev, "FLL lock timed out");
  FUNC_8(VAR_19, VAR_2,
        VAR_9, 0);
  FUNC_5(VAR_19->dev);
  return -VAR_1;
 }

 VAR_24->fll_fref = VAR_22;
 VAR_24->fll_fout = VAR_23;
 VAR_24->fll_src = VAR_21;

 return 0;
}
