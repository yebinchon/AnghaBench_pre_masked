
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wm8996_pdata {int num_retune_mobile_cfgs; TYPE_1__* retune_mobile_cfgs; } ;
struct wm8996_priv {int* retune_mobile_cfg; scalar_t__* rx_rate; int * retune_mobile_texts; int num_retune_mobile_texts; struct wm8996_pdata pdata; } ;
struct snd_soc_component {int dev; } ;
struct TYPE_2__ {int* regs; scalar_t__ rate; int name; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,char*,int,int ,scalar_t__,scalar_t__) ;
 struct wm8996_priv* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int) ;
 int FUNC_5 (struct snd_soc_component*,int,int,int) ;
 scalar_t__ FUNC_6 (int ,int ) ;

__attribute__((used)) static void FUNC_7(struct snd_soc_component *VAR_7, int VAR_8)
{
 struct wm8996_priv *VAR_9 = FUNC_3(VAR_7);
 struct wm8996_pdata *VAR_10 = &VAR_9->pdata;
 int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;

 if (!VAR_9->num_retune_mobile_texts)
  return;

 switch (VAR_8) {
 case 0:
  VAR_11 = VAR_3;
  if (FUNC_4(VAR_7, VAR_6) &
      VAR_2)
   VAR_17 = 1;
  else
   VAR_17 = 0;
  break;
 case 1:
  VAR_11 = VAR_4;
  if (FUNC_4(VAR_7, VAR_6) &
      VAR_5)
   VAR_17 = 1;
  else
   VAR_17 = 0;
  break;
 default:
  return;
 }



 VAR_16 = VAR_9->retune_mobile_cfg[VAR_8];
 VAR_12 = 0;
 VAR_13 = VAR_0;
 for (VAR_15 = 0; VAR_15 < VAR_10->num_retune_mobile_cfgs; VAR_15++) {
  if (FUNC_6(VAR_10->retune_mobile_cfgs[VAR_15].name,
      VAR_9->retune_mobile_texts[VAR_16]) == 0 &&
      FUNC_1(VAR_10->retune_mobile_cfgs[VAR_15].rate
   - VAR_9->rx_rate[VAR_17]) < VAR_13) {
   VAR_12 = VAR_15;
   VAR_13 = FUNC_1(VAR_10->retune_mobile_cfgs[VAR_15].rate
           - VAR_9->rx_rate[VAR_17]);
  }
 }

 FUNC_2(VAR_7->dev, "ReTune Mobile %d %s/%dHz for %dHz sample rate\n",
  VAR_8,
  VAR_10->retune_mobile_cfgs[VAR_12].name,
  VAR_10->retune_mobile_cfgs[VAR_12].rate,
  VAR_9->rx_rate[VAR_17]);




 VAR_14 = FUNC_4(VAR_7, VAR_11);
 VAR_14 &= VAR_1;

 for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_10->retune_mobile_cfgs[VAR_12].regs); VAR_15++)
  FUNC_5(VAR_7, VAR_11 + VAR_15, 0xffff,
        VAR_10->retune_mobile_cfgs[VAR_12].regs[VAR_15]);

 FUNC_5(VAR_7, VAR_11, VAR_1, VAR_14);
}
