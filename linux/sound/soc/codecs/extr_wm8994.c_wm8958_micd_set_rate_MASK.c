
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wm8994_priv {int* aifclk; scalar_t__ jackdet; int jack_mic; struct wm8994* wm8994; } ;
struct TYPE_2__ {int num_micd_rates; struct wm8958_micd_rate* micd_rates; } ;
struct wm8994 {TYPE_1__ pdata; } ;
struct wm8958_micd_rate {int idle; int start; int rate; scalar_t__ sysclk; } ;
struct snd_soc_component {int dev; } ;


 int FUNC_0 (struct wm8958_micd_rate*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,char*,int,int,int,char*) ;
 struct wm8958_micd_rate* VAR_7 ;
 struct wm8958_micd_rate* VAR_8 ;
 struct wm8994_priv* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ) ;
 int FUNC_5 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static void FUNC_6(struct snd_soc_component *VAR_9)
{
 struct wm8994_priv *VAR_10 = FUNC_3(VAR_9);
 struct wm8994 *VAR_11 = VAR_10->wm8994;
 int VAR_12, VAR_13, VAR_14, VAR_15;
 bool VAR_16;
 const struct wm8958_micd_rate *VAR_17;
 int VAR_18;

 VAR_16 = !VAR_10->jack_mic;

 VAR_14 = FUNC_4(VAR_9, VAR_5);
 if (VAR_14 & VAR_6)
  VAR_14 = VAR_10->aifclk[1];
 else
  VAR_14 = VAR_10->aifclk[0];

 if (VAR_11->pdata.micd_rates) {
  VAR_17 = VAR_11->pdata.micd_rates;
  VAR_18 = VAR_11->pdata.num_micd_rates;
 } else if (VAR_10->jackdet) {
  VAR_17 = VAR_7;
  VAR_18 = FUNC_0(VAR_7);
 } else {
  VAR_17 = VAR_8;
  VAR_18 = FUNC_0(VAR_8);
 }

 VAR_12 = 0;
 for (VAR_13 = 0; VAR_13 < VAR_18; VAR_13++) {
  if (VAR_17[VAR_13].idle != VAR_16)
   continue;
  if (FUNC_1(VAR_17[VAR_13].sysclk - VAR_14) <
      FUNC_1(VAR_17[VAR_12].sysclk - VAR_14))
   VAR_12 = VAR_13;
  else if (VAR_17[VAR_12].idle != VAR_16)
   VAR_12 = VAR_13;
 }

 VAR_15 = VAR_17[VAR_12].start << VAR_1
  | VAR_17[VAR_12].rate << VAR_3;

 FUNC_2(VAR_9->dev, "MICD rate %d,%d for %dHz %s\n",
  VAR_17[VAR_12].start, VAR_17[VAR_12].rate, VAR_14,
  VAR_16 ? "idle" : "active");

 FUNC_5(VAR_9, VAR_4,
       VAR_0 |
       VAR_2, VAR_15);
}
