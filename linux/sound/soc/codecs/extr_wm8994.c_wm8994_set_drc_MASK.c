
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wm8994_priv {int* drc_cfg; struct wm8994* wm8994; } ;
struct wm8994_pdata {TYPE_1__* drc_cfgs; } ;
struct wm8994 {struct wm8994_pdata pdata; } ;
struct snd_soc_component {int dummy; } ;
struct TYPE_2__ {int* regs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct wm8994_priv* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int) ;
 int FUNC_2 (struct snd_soc_component*,int,int,int) ;
 int* VAR_4 ;

__attribute__((used)) static void FUNC_3(struct snd_soc_component *VAR_5, int VAR_6)
{
 struct wm8994_priv *VAR_7 = FUNC_0(VAR_5);
 struct wm8994 *VAR_8 = VAR_7->wm8994;
 struct wm8994_pdata *VAR_9 = &VAR_8->pdata;
 int VAR_10 = VAR_4[VAR_6];
 int VAR_11 = VAR_7->drc_cfg[VAR_6];
 int VAR_12, VAR_13;


 VAR_12 = FUNC_1(VAR_5, VAR_10);
 VAR_12 &= VAR_2 | VAR_0 |
  VAR_1;

 for (VAR_13 = 0; VAR_13 < VAR_3; VAR_13++)
  FUNC_2(VAR_5, VAR_10 + VAR_13, 0xffff,
        VAR_9->drc_cfgs[VAR_11].regs[VAR_13]);

 FUNC_2(VAR_5, VAR_10, VAR_2 |
        VAR_0 |
        VAR_1, VAR_12);
}
