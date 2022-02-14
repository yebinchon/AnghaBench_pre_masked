
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wm8904_priv {size_t drc_cfg; struct wm8904_pdata* pdata; } ;
struct wm8904_pdata {TYPE_1__* drc_cfgs; } ;
struct snd_soc_component {int dummy; } ;
struct TYPE_2__ {int* regs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct wm8904_priv* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,scalar_t__) ;
 int FUNC_2 (struct snd_soc_component*,scalar_t__,int,int) ;

__attribute__((used)) static void FUNC_3(struct snd_soc_component *VAR_4)
{
 struct wm8904_priv *VAR_5 = FUNC_0(VAR_4);
 struct wm8904_pdata *VAR_6 = VAR_5->pdata;
 int VAR_7, VAR_8;


 VAR_7 = FUNC_1(VAR_4, VAR_0);

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
  FUNC_2(VAR_4, VAR_0 + VAR_8, 0xffff,
        VAR_6->drc_cfgs[VAR_5->drc_cfg].regs[VAR_8]);


 FUNC_2(VAR_4, VAR_0,
       VAR_2 | VAR_1, VAR_7);
}
