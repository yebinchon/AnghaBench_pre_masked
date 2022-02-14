
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8904_priv {int fll_src; unsigned int fll_fref; unsigned int fll_fout; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct _fll_div {int fll_outdiv; int fll_fratio; int n; int fll_clk_ref_div; scalar_t__ k; } ;
typedef int fll_div ;


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
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct _fll_div*,unsigned int,unsigned int) ;
 int FUNC_3 (struct _fll_div*,int ,int) ;
 struct wm8904_priv* FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_component*,int ) ;
 int FUNC_6 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_7 (struct snd_soc_component*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct snd_soc_dai *VAR_24, int VAR_25, int VAR_26,
     unsigned int VAR_27, unsigned int VAR_28)
{
 struct snd_soc_component *VAR_29 = VAR_24->component;
 struct wm8904_priv *VAR_30 = FUNC_4(VAR_29);
 struct _fll_div VAR_31;
 int VAR_32, VAR_33;
 int VAR_34, VAR_35;


 if (VAR_26 == VAR_30->fll_src && VAR_27 == VAR_30->fll_fref &&
     VAR_28 == VAR_30->fll_fout)
  return 0;

 VAR_34 = FUNC_5(VAR_29, VAR_2);

 if (VAR_28 == 0) {
  FUNC_0(VAR_29->dev, "FLL disabled\n");

  VAR_30->fll_fref = 0;
  VAR_30->fll_fout = 0;


  FUNC_6(VAR_29, VAR_2,
        VAR_1, 0);

  FUNC_6(VAR_29, VAR_7,
        VAR_20 | VAR_12, 0);

  goto out;
 }


 switch (VAR_26) {
 case 128:
 case 129:
 case 131:
  VAR_32 = FUNC_2(&VAR_31, VAR_27, VAR_28);
  if (VAR_32 != 0)
   return VAR_32;
  break;

 case 130:
  FUNC_0(VAR_29->dev, "Using free running FLL\n");

  VAR_28 = 12000000;
  VAR_27 = 12000000;

  FUNC_3(&VAR_31, 0, sizeof(VAR_31));
  VAR_31.fll_outdiv = 3;
  break;

 default:
  FUNC_1(VAR_29->dev, "Unknown FLL ID %d\n", VAR_25);
  return -VAR_0;
 }



 VAR_35 = FUNC_5(VAR_29, VAR_7);
 FUNC_6(VAR_29, VAR_2,
       VAR_1, 0);
 FUNC_6(VAR_29, VAR_7,
       VAR_20 | VAR_12, 0);


 FUNC_6(VAR_29, VAR_3,
       VAR_23, VAR_23);

 if (VAR_25 == 130) {
  VAR_33 = VAR_16;
 } else {
  VAR_33 = 0;
 }

 FUNC_6(VAR_29, VAR_17, VAR_16,
       VAR_33);
 FUNC_6(VAR_29, VAR_3,
       VAR_23, 0);

 switch (VAR_25) {
 case 128:
  FUNC_6(VAR_29, VAR_11,
        VAR_6, 0);
  break;

 case 129:
  FUNC_6(VAR_29, VAR_11,
        VAR_6, 1);
  break;

 case 131:
  FUNC_6(VAR_29, VAR_11,
        VAR_6, 2);
  break;
 }

 if (VAR_31.k)
  VAR_33 = VAR_13;
 else
  VAR_33 = 0;
 FUNC_6(VAR_29, VAR_7,
       VAR_13, VAR_33);

 FUNC_6(VAR_29, VAR_8,
       VAR_21 | VAR_14,
       (VAR_31.fll_outdiv << VAR_22) |
       (VAR_31.fll_fratio << VAR_15));

 FUNC_7(VAR_29, VAR_9, VAR_31.k);

 FUNC_6(VAR_29, VAR_10, VAR_18,
       VAR_31.n << VAR_19);

 FUNC_6(VAR_29, VAR_11,
       VAR_4,
       VAR_31.fll_clk_ref_div
       << VAR_5);

 FUNC_0(VAR_29->dev, "FLL configured for %dHz->%dHz\n", VAR_27, VAR_28);

 VAR_30->fll_fref = VAR_27;
 VAR_30->fll_fout = VAR_28;
 VAR_30->fll_src = VAR_26;


 FUNC_6(VAR_29, VAR_7,
       VAR_20, VAR_35);
 FUNC_6(VAR_29, VAR_7,
       VAR_12, VAR_35);

out:

 FUNC_6(VAR_29, VAR_2,
       VAR_1, VAR_34);

 return 0;
}
