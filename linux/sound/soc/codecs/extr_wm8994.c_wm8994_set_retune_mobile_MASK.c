
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wm8994_priv {int* retune_mobile_cfg; scalar_t__* dac_rates; int * retune_mobile_texts; int num_retune_mobile_texts; struct wm8994* wm8994; } ;
struct wm8994_pdata {int num_retune_mobile_cfgs; TYPE_1__* retune_mobile_cfgs; } ;
struct wm8994 {struct wm8994_pdata pdata; } ;
struct snd_soc_component {int dev; } ;
struct TYPE_2__ {int* regs; scalar_t__ rate; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,char*,int,int ,scalar_t__,scalar_t__) ;
 struct wm8994_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int) ;
 int FUNC_4 (struct snd_soc_component*,int,int,int) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int* VAR_3 ;

__attribute__((used)) static void FUNC_6(struct snd_soc_component *VAR_4, int VAR_5)
{
 struct wm8994_priv *VAR_6 = FUNC_2(VAR_4);
 struct wm8994 *VAR_7 = VAR_6->wm8994;
 struct wm8994_pdata *VAR_8 = &VAR_7->pdata;
 int VAR_9 = VAR_3[VAR_5];
 int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;

 if (!VAR_8 || !VAR_6->num_retune_mobile_texts)
  return;

 switch (VAR_5) {
 case 0:
 case 1:
  VAR_10 = 0;
  break;
 case 2:
  VAR_10 = 1;
  break;
 default:
  return;
 }



 VAR_15 = VAR_6->retune_mobile_cfg[VAR_5];
 VAR_11 = 0;
 VAR_12 = VAR_0;
 for (VAR_14 = 0; VAR_14 < VAR_8->num_retune_mobile_cfgs; VAR_14++) {
  if (FUNC_5(VAR_8->retune_mobile_cfgs[VAR_14].name,
      VAR_6->retune_mobile_texts[VAR_15]) == 0 &&
      FUNC_0(VAR_8->retune_mobile_cfgs[VAR_14].rate
   - VAR_6->dac_rates[VAR_10]) < VAR_12) {
   VAR_11 = VAR_14;
   VAR_12 = FUNC_0(VAR_8->retune_mobile_cfgs[VAR_14].rate
           - VAR_6->dac_rates[VAR_10]);
  }
 }

 FUNC_1(VAR_4->dev, "ReTune Mobile %d %s/%dHz for %dHz sample rate\n",
  VAR_5,
  VAR_8->retune_mobile_cfgs[VAR_11].name,
  VAR_8->retune_mobile_cfgs[VAR_11].rate,
  VAR_6->dac_rates[VAR_10]);




 VAR_13 = FUNC_3(VAR_4, VAR_9);
 VAR_13 &= VAR_1;

 for (VAR_14 = 0; VAR_14 < VAR_2; VAR_14++)
  FUNC_4(VAR_4, VAR_9 + VAR_14, 0xffff,
    VAR_8->retune_mobile_cfgs[VAR_11].regs[VAR_14]);

 FUNC_4(VAR_4, VAR_9, VAR_1, VAR_13);
}
