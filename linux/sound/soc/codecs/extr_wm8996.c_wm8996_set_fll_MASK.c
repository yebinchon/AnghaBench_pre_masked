
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8996_priv {int fll_src; unsigned int fll_fref; unsigned int fll_fout; int fll_lock; } ;
struct snd_soc_component {int dev; } ;
struct i2c_client {scalar_t__ irq; } ;
struct _fll_div {int fll_refclk_div; int fll_ref_freq; int theta; int lambda; int fll_outdiv; int fll_fratio; int n; int fll_loop_gain; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

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
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct _fll_div*,unsigned int,unsigned int) ;
 unsigned long FUNC_4 (int) ;
 struct wm8996_priv* FUNC_5 (struct snd_soc_component*) ;
 int FUNC_6 (struct snd_soc_component*,int ) ;
 int FUNC_7 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_8 (struct snd_soc_component*,int ,int) ;
 struct i2c_client* FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 unsigned long FUNC_11 (int) ;
 unsigned long FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (struct snd_soc_component*) ;
 int FUNC_14 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_15(struct snd_soc_component *VAR_27, int VAR_28, int VAR_29,
     unsigned int VAR_30, unsigned int VAR_31)
{
 struct wm8996_priv *VAR_32 = FUNC_5(VAR_27);
 struct i2c_client *VAR_33 = FUNC_9(VAR_27->dev);
 struct _fll_div VAR_34;
 unsigned long VAR_35, VAR_36;
 int VAR_37, VAR_38, VAR_39;


 if (VAR_29 == VAR_32->fll_src && VAR_30 == VAR_32->fll_fref &&
     VAR_31 == VAR_32->fll_fout)
  return 0;

 if (VAR_31 == 0) {
  FUNC_1(VAR_27->dev, "FLL disabled\n");

  VAR_32->fll_fref = 0;
  VAR_32->fll_fout = 0;

  FUNC_7(VAR_27, VAR_2,
        VAR_11, 0);

  FUNC_13(VAR_27);

  return 0;
 }

 VAR_37 = FUNC_3(&VAR_34, VAR_30, VAR_31);
 if (VAR_37 != 0)
  return VAR_37;

 switch (VAR_29) {
 case 129:
  VAR_38 = 0;
  break;
 case 128:
  VAR_38 = 1;
  break;
 case 130:
  VAR_38 = 2;
  break;
 case 131:
  VAR_38 = 3;
  break;
 default:
  FUNC_2(VAR_27->dev, "Unknown FLL source %d\n", VAR_37);
  return -VAR_0;
 }

 VAR_38 |= VAR_34.fll_refclk_div << VAR_21;
 VAR_38 |= VAR_34.fll_ref_freq << VAR_24;

 FUNC_7(VAR_27, VAR_6,
       VAR_20 | VAR_23 |
       VAR_22, VAR_38);

 VAR_38 = 0;
 if (VAR_34.theta || VAR_34.lambda)
  VAR_38 |= VAR_10 | (3 << VAR_13);
 else
  VAR_38 |= 1 << VAR_13;
 FUNC_8(VAR_27, VAR_9, VAR_38);

 FUNC_7(VAR_27, VAR_3,
       VAR_18 |
       VAR_12,
       (VAR_34.fll_outdiv << VAR_19) |
       (VAR_34.fll_fratio));

 FUNC_8(VAR_27, VAR_4, VAR_34.theta);

 FUNC_7(VAR_27, VAR_5,
       VAR_16 | VAR_15,
       (VAR_34.n << VAR_17) |
       VAR_34.fll_loop_gain);

 FUNC_8(VAR_27, VAR_8, VAR_34.lambda);


 VAR_37 = FUNC_6(VAR_27, VAR_2);
 if (!(VAR_37 & VAR_11))
  FUNC_14(VAR_27);


 FUNC_10(&VAR_32->fll_lock);

 FUNC_7(VAR_27, VAR_2,
       VAR_11, VAR_11);




 FUNC_8(VAR_27, VAR_7, VAR_25);


 if (VAR_30 > 1000000)
  VAR_35 = FUNC_11(300);
 else
  VAR_35 = FUNC_4(2);




 if (VAR_33->irq)
  VAR_35 *= 10;
 else

  VAR_35 = VAR_35/2 ? : 1;

 for (VAR_39 = 0; VAR_39 < 10; VAR_39++) {
  VAR_36 = FUNC_12(&VAR_32->fll_lock,
       VAR_35);
  if (VAR_36 != 0) {
   FUNC_0(!VAR_33->irq);
   VAR_37 = 1;
   break;
  }

  VAR_37 = FUNC_6(VAR_27, VAR_26);
  if (VAR_37 & VAR_14)
   break;
 }
 if (VAR_39 == 10) {
  FUNC_2(VAR_27->dev, "Timed out waiting for FLL\n");
  VAR_37 = -VAR_1;
 }

 FUNC_1(VAR_27->dev, "FLL configured for %dHz->%dHz\n", VAR_30, VAR_31);

 VAR_32->fll_fref = VAR_30;
 VAR_32->fll_fout = VAR_31;
 VAR_32->fll_src = VAR_29;

 return VAR_37;
}
