
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm9081_priv {unsigned int fll_fref; unsigned int fll_fout; } ;
struct snd_soc_component {int dev; } ;
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
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;

 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct _fll_div*,unsigned int,unsigned int) ;
 struct wm9081_priv* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ) ;
 int FUNC_5 (struct snd_soc_component*,int ,int ,int ) ;
 int FUNC_6 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_component *VAR_18, int VAR_19,
     unsigned int VAR_20, unsigned int VAR_21)
{
 struct wm9081_priv *VAR_22 = FUNC_3(VAR_18);
 u16 VAR_23, VAR_24, VAR_25;
 struct _fll_div VAR_26;
 int VAR_27;
 int VAR_28;


 if (VAR_20 == VAR_22->fll_fref && VAR_21 == VAR_22->fll_fout)
  return 0;


 if (VAR_21 == 0) {
  FUNC_0(VAR_18->dev, "FLL disabled\n");
  VAR_22->fll_fref = 0;
  VAR_22->fll_fout = 0;

  return 0;
 }

 VAR_27 = FUNC_2(&VAR_26, VAR_20, VAR_21);
 if (VAR_27 != 0)
  return VAR_27;

 VAR_25 = FUNC_4(VAR_18, VAR_10);
 VAR_25 &= ~VAR_5;

 switch (VAR_19) {
 case 128:
  VAR_25 |= 0x1;
  break;

 default:
  FUNC_1(VAR_18->dev, "Unknown FLL ID %d\n", VAR_19);
  return -VAR_0;
 }


 VAR_28 = FUNC_4(VAR_18, VAR_2);
 if (VAR_28 & VAR_1)
  FUNC_6(VAR_18, VAR_2,
        VAR_28 & ~VAR_1);



 VAR_23 = FUNC_4(VAR_18, VAR_6);
 VAR_23 &= ~VAR_11;
 FUNC_6(VAR_18, VAR_6, VAR_23);


 if (VAR_26.k)
  VAR_23 |= VAR_12;
 else
  VAR_23 &= ~VAR_12;
 FUNC_6(VAR_18, VAR_6, VAR_23);

 FUNC_6(VAR_18, VAR_7,
       (VAR_26.fll_outdiv << VAR_17) |
       (VAR_26.fll_fratio << VAR_13));
 FUNC_6(VAR_18, VAR_8, VAR_26.k);

 VAR_24 = FUNC_4(VAR_18, VAR_9);
 VAR_24 &= ~VAR_15;
 VAR_24 |= VAR_26.n << VAR_16;
 FUNC_6(VAR_18, VAR_9, VAR_24);

 VAR_25 &= ~VAR_3;
 VAR_25 |= VAR_26.fll_clk_ref_div << VAR_4;
 FUNC_6(VAR_18, VAR_10, VAR_25);


 FUNC_5(VAR_18, VAR_9,
       VAR_14, 0);


 FUNC_6(VAR_18, VAR_6, VAR_23 | VAR_11);


 if (VAR_28 & VAR_1)
  FUNC_6(VAR_18, VAR_2, VAR_28);

 FUNC_0(VAR_18->dev, "FLL enabled at %dHz->%dHz\n", VAR_20, VAR_21);

 VAR_22->fll_fref = VAR_20;
 VAR_22->fll_fout = VAR_21;

 return 0;
}
