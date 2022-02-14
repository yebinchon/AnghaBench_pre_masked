
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm8400_priv {unsigned int fll_in; unsigned int fll_out; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct fll_factors {int fratio; int freq_ref; int k; int n; int outdiv; } ;
typedef int factors ;


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
 int FUNC_0 (struct wm8400_priv*,struct fll_factors*,unsigned int,unsigned int) ;
 int FUNC_1 (struct fll_factors*,int ,int) ;
 struct wm8400_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ) ;
 int FUNC_4 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_dai *VAR_12, int VAR_13,
         int VAR_14, unsigned int VAR_15,
         unsigned int VAR_16)
{
 struct snd_soc_component *VAR_17 = VAR_12->component;
 struct wm8400_priv *VAR_18 = FUNC_2(VAR_17);
 struct fll_factors VAR_19;
 int VAR_20;
 u16 VAR_21;

 if (VAR_15 == VAR_18->fll_in && VAR_16 == VAR_18->fll_out)
  return 0;

 if (VAR_16) {
  VAR_20 = FUNC_0(VAR_18, &VAR_19, VAR_15, VAR_16);
  if (VAR_20 != 0)
   return VAR_20;
 } else {



  FUNC_1(&VAR_19, 0, sizeof(VAR_19));
 }

 VAR_18->fll_out = VAR_16;
 VAR_18->fll_in = VAR_15;


 VAR_21 = FUNC_3(VAR_17, VAR_11);
 VAR_21 &= ~VAR_4;
 FUNC_4(VAR_17, VAR_11, VAR_21);

 VAR_21 = FUNC_3(VAR_17, VAR_0);
 VAR_21 &= ~VAR_7;
 FUNC_4(VAR_17, VAR_0, VAR_21);

 if (!VAR_16)
  return 0;

 VAR_21 &= ~(VAR_9 | VAR_6);
 VAR_21 |= VAR_5 | VAR_19.fratio;
 VAR_21 |= VAR_19.freq_ref << VAR_10;
 FUNC_4(VAR_17, VAR_0, VAR_21);

 FUNC_4(VAR_17, VAR_1, VAR_19.k);
 FUNC_4(VAR_17, VAR_2, VAR_19.n);

 VAR_21 = FUNC_3(VAR_17, VAR_3);
 VAR_21 &= ~VAR_8;
 VAR_21 |= VAR_19.outdiv;
 FUNC_4(VAR_17, VAR_3, VAR_21);

 return 0;
}
