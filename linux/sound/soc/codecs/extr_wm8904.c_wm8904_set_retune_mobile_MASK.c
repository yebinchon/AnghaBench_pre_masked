
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wm8904_priv {int retune_mobile_cfg; scalar_t__ fs; int * retune_mobile_texts; int num_retune_mobile_texts; struct wm8904_pdata* pdata; } ;
struct wm8904_pdata {int num_retune_mobile_cfgs; TYPE_1__* retune_mobile_cfgs; } ;
struct snd_soc_component {int dev; } ;
struct TYPE_2__ {int* regs; scalar_t__ rate; int name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,char*,int ,scalar_t__,scalar_t__) ;
 struct wm8904_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,scalar_t__) ;
 int FUNC_4 (struct snd_soc_component*,scalar_t__,int,int) ;
 scalar_t__ FUNC_5 (int ,int ) ;

__attribute__((used)) static void FUNC_6(struct snd_soc_component *VAR_4)
{
 struct wm8904_priv *VAR_5 = FUNC_2(VAR_4);
 struct wm8904_pdata *VAR_6 = VAR_5->pdata;
 int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;

 if (!VAR_6 || !VAR_5->num_retune_mobile_texts)
  return;



 VAR_11 = VAR_5->retune_mobile_cfg;
 VAR_7 = 0;
 VAR_8 = VAR_0;
 for (VAR_10 = 0; VAR_10 < VAR_6->num_retune_mobile_cfgs; VAR_10++) {
  if (FUNC_5(VAR_6->retune_mobile_cfgs[VAR_10].name,
      VAR_5->retune_mobile_texts[VAR_11]) == 0 &&
      FUNC_0(VAR_6->retune_mobile_cfgs[VAR_10].rate
   - VAR_5->fs) < VAR_8) {
   VAR_7 = VAR_10;
   VAR_8 = FUNC_0(VAR_6->retune_mobile_cfgs[VAR_10].rate
           - VAR_5->fs);
  }
 }

 FUNC_1(VAR_4->dev, "ReTune Mobile %s/%dHz for %dHz sample rate\n",
  VAR_6->retune_mobile_cfgs[VAR_7].name,
  VAR_6->retune_mobile_cfgs[VAR_7].rate,
  VAR_5->fs);




 VAR_9 = FUNC_3(VAR_4, VAR_1);

 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++)
  FUNC_4(VAR_4, VAR_1 + VAR_10, 0xffff,
    VAR_6->retune_mobile_cfgs[VAR_7].regs[VAR_10]);

 FUNC_4(VAR_4, VAR_1, VAR_2, VAR_9);
}
