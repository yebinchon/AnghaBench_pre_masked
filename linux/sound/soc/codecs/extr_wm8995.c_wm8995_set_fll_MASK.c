
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct wm8995_priv {TYPE_1__* fll; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct fll_div {int outdiv; int fll_fratio; int n; int clk_ref_div; int k; } ;
struct TYPE_2__ {int src; unsigned int in; unsigned int out; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;

 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
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





 int FUNC_0 (struct snd_soc_component*) ;
 struct wm8995_priv* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,scalar_t__) ;
 int FUNC_3 (struct snd_soc_component*,scalar_t__,int,int) ;
 int FUNC_4 (struct snd_soc_component*,scalar_t__,int ) ;
 int FUNC_5 (struct fll_div*,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_dai *VAR_23, int VAR_24,
     int VAR_25, unsigned int VAR_26,
     unsigned int VAR_27)
{
 struct snd_soc_component *VAR_28;
 struct wm8995_priv *VAR_29;
 int VAR_30, VAR_31;
 struct fll_div VAR_32;
 u16 VAR_33, VAR_34, VAR_35;

 VAR_28 = VAR_23->component;
 VAR_29 = FUNC_1(VAR_28);

 VAR_34 = FUNC_2(VAR_28, VAR_3)
        & VAR_1;

 VAR_35 = FUNC_2(VAR_28, VAR_6)
        & VAR_4;

 switch (VAR_24) {
 case 133:
  VAR_30 = 0;
  VAR_24 = 0;
  break;
 case 132:
  VAR_30 = 0x20;
  VAR_24 = 1;
  break;
 default:
  return -VAR_0;
 }

 switch (VAR_25) {
 case 0:

  if (VAR_27)
   return -VAR_0;
  break;
 case 129:
 case 128:
 case 130:
 case 131:
  break;
 default:
  return -VAR_0;
 }


 if (VAR_29->fll[VAR_24].src == VAR_25 &&
     VAR_29->fll[VAR_24].in == VAR_26 && VAR_29->fll[VAR_24].out == VAR_27)
  return 0;





 if (VAR_27)
  VAR_31 = FUNC_5(&VAR_32, VAR_26, VAR_27);
 else
  VAR_31 = FUNC_5(&VAR_32, VAR_29->fll[VAR_24].in,
         VAR_29->fll[VAR_24].out);
 if (VAR_31 < 0)
  return VAR_31;


 FUNC_3(VAR_28, VAR_3,
       VAR_2, 0);
 FUNC_3(VAR_28, VAR_6,
       VAR_5, 0);


 FUNC_3(VAR_28, VAR_7 + VAR_30,
       VAR_13, 0);

 VAR_33 = (VAR_32.outdiv << VAR_19) |
       (VAR_32.fll_fratio << VAR_15);
 FUNC_3(VAR_28, VAR_8 + VAR_30,
       VAR_18 |
       VAR_14, VAR_33);

 FUNC_4(VAR_28, VAR_9 + VAR_30, VAR_32.k);

 FUNC_3(VAR_28, VAR_10 + VAR_30,
       VAR_16,
       VAR_32.n << VAR_17);

 FUNC_3(VAR_28, VAR_11 + VAR_30,
       VAR_20 |
       VAR_22,
       (VAR_32.clk_ref_div << VAR_21) |
       (VAR_25 - 1));

 if (VAR_27)
  FUNC_3(VAR_28, VAR_7 + VAR_30,
        VAR_13, VAR_12);

 VAR_29->fll[VAR_24].in = VAR_26;
 VAR_29->fll[VAR_24].out = VAR_27;
 VAR_29->fll[VAR_24].src = VAR_25;


 FUNC_3(VAR_28, VAR_3,
       VAR_2, VAR_34);
 FUNC_3(VAR_28, VAR_6,
       VAR_5, VAR_35);

 FUNC_0(VAR_28);

 return 0;
}
