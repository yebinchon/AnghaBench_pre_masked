
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm8350_data {unsigned int fll_freq_in; unsigned int fll_freq_out; struct wm8350* wm8350; } ;
struct wm8350 {int dev; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct _fll_div {int n; int k; int div; int ratio; } ;


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
 int FUNC_0 (int ,char*,unsigned int,unsigned int,int,int,int,int) ;
 int FUNC_1 (struct _fll_div*,unsigned int,unsigned int) ;
 struct wm8350_data* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ) ;
 int FUNC_4 (struct snd_soc_component*,int ,int) ;
 int FUNC_5 (struct wm8350*,int ,int) ;
 int FUNC_6 (struct wm8350*,int ,int) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_dai *VAR_12,
     int VAR_13, int VAR_14, unsigned int VAR_15,
     unsigned int VAR_16)
{
 struct snd_soc_component *VAR_17 = VAR_12->component;
 struct wm8350_data *VAR_18 = FUNC_2(VAR_17);
 struct wm8350 *VAR_19 = VAR_18->wm8350;
 struct _fll_div VAR_20;
 int VAR_21 = 0;
 u16 VAR_22, VAR_23;

 if (VAR_15 == VAR_18->fll_freq_in && VAR_16 == VAR_18->fll_freq_out)
  return 0;


 FUNC_5(VAR_19, VAR_11,
     VAR_4 | VAR_7);

 if (VAR_16 == 0 || VAR_15 == 0)
  return VAR_21;

 VAR_21 = FUNC_1(&VAR_20, VAR_15, VAR_16);
 if (VAR_21 < 0)
  return VAR_21;
 FUNC_0(VAR_19->dev,
  "FLL in %u FLL out %u N 0x%x K 0x%x div %d ratio %d",
  VAR_15, VAR_16, VAR_20.n, VAR_20.k, VAR_20.div,
  VAR_20.ratio);


 VAR_22 = FUNC_3(VAR_17, VAR_0) &
     ~(VAR_8 | VAR_9 | 0xc000);
 FUNC_4(VAR_17, VAR_0,
      VAR_22 | (VAR_20.div << 8) | 0x50);
 FUNC_4(VAR_17, VAR_1,
      (VAR_20.ratio << 11) | (VAR_20.
          n & VAR_6));
 FUNC_4(VAR_17, VAR_2, VAR_20.k);
 VAR_23 = FUNC_3(VAR_17, VAR_3) &
     ~(VAR_5 | VAR_10);
 FUNC_4(VAR_17, VAR_3,
      VAR_23 | (VAR_20.k ? VAR_5 : 0) |
      (VAR_20.ratio == 8 ? VAR_10 : 0));


 FUNC_6(VAR_19, VAR_11, VAR_7);
 FUNC_6(VAR_19, VAR_11, VAR_4);

 VAR_18->fll_freq_out = VAR_16;
 VAR_18->fll_freq_in = VAR_15;

 return 0;
}
