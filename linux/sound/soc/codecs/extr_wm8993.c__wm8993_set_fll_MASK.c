
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm8993_priv {unsigned int fll_fref; unsigned int fll_fout; int fll_src; int fll_lock; } ;
struct snd_soc_component {int dev; } ;
struct i2c_client {scalar_t__ irq; } ;
struct _fll_div {int k; int fll_outdiv; int fll_fratio; int n; int fll_clk_ref_div; } ;


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
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct _fll_div*,unsigned int,unsigned int) ;
 unsigned int FUNC_4 (int) ;
 struct wm8993_priv* FUNC_5 (struct snd_soc_component*) ;
 int FUNC_6 (struct snd_soc_component*,int ) ;
 int FUNC_7 (struct snd_soc_component*,int ,int) ;
 struct i2c_client* FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 unsigned int FUNC_10 (int *,unsigned int) ;

__attribute__((used)) static int FUNC_11(struct snd_soc_component *VAR_15, int VAR_16, int VAR_17,
     unsigned int VAR_18, unsigned int VAR_19)
{
 struct wm8993_priv *VAR_20 = FUNC_5(VAR_15);
 struct i2c_client *VAR_21 = FUNC_8(VAR_15->dev);
 u16 VAR_22, VAR_23, VAR_24;
 struct _fll_div VAR_25;
 unsigned int VAR_26;
 int VAR_27;


 if (VAR_18 == VAR_20->fll_fref && VAR_19 == VAR_20->fll_fout)
  return 0;


 if (VAR_19 == 0) {
  FUNC_0(VAR_15->dev, "FLL disabled\n");
  VAR_20->fll_fref = 0;
  VAR_20->fll_fout = 0;

  VAR_22 = FUNC_6(VAR_15, VAR_4);
  VAR_22 &= ~VAR_9;
  FUNC_7(VAR_15, VAR_4, VAR_22);

  return 0;
 }

 VAR_27 = FUNC_3(&VAR_25, VAR_18, VAR_19);
 if (VAR_27 != 0)
  return VAR_27;

 VAR_24 = FUNC_6(VAR_15, VAR_8);
 VAR_24 &= ~VAR_3;

 switch (VAR_16) {
 case 128:
  break;

 case 129:
  VAR_24 |= 1;
  break;

 case 130:
  VAR_24 |= 2;
  break;

 default:
  FUNC_1(VAR_15->dev, "Unknown FLL ID %d\n", VAR_16);
  return -VAR_0;
 }



 VAR_22 = FUNC_6(VAR_15, VAR_4);
 VAR_22 &= ~VAR_9;
 FUNC_7(VAR_15, VAR_4, VAR_22);


 if (VAR_25.k)
  VAR_22 |= VAR_10;
 else
  VAR_22 &= ~VAR_10;
 FUNC_7(VAR_15, VAR_4, VAR_22);

 FUNC_7(VAR_15, VAR_5,
        (VAR_25.fll_outdiv << VAR_14) |
        (VAR_25.fll_fratio << VAR_11));
 FUNC_7(VAR_15, VAR_6, VAR_25.k);

 VAR_23 = FUNC_6(VAR_15, VAR_7);
 VAR_23 &= ~VAR_12;
 VAR_23 |= VAR_25.n << VAR_13;
 FUNC_7(VAR_15, VAR_7, VAR_23);

 VAR_24 &= ~VAR_1;
 VAR_24 |= VAR_25.fll_clk_ref_div << VAR_2;
 FUNC_7(VAR_15, VAR_8, VAR_24);


 if (VAR_21->irq)
  VAR_26 = FUNC_4(20);
 else if (VAR_18 < 1000000)
  VAR_26 = FUNC_4(3);
 else
  VAR_26 = FUNC_4(1);

 FUNC_9(&VAR_20->fll_lock);


 FUNC_7(VAR_15, VAR_4, VAR_22 | VAR_9);

 VAR_26 = FUNC_10(&VAR_20->fll_lock, VAR_26);
 if (VAR_21->irq && !VAR_26)
  FUNC_2(VAR_15->dev, "Timed out waiting for FLL\n");

 FUNC_0(VAR_15->dev, "FLL enabled at %dHz->%dHz\n", VAR_18, VAR_19);

 VAR_20->fll_fref = VAR_18;
 VAR_20->fll_fout = VAR_19;
 VAR_20->fll_src = VAR_17;

 return 0;
}
