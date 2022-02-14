
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wm8994_priv {size_t enh_eq_cfg; int enh_eq; struct wm8994* wm8994; } ;
struct TYPE_2__ {struct wm8958_enh_eq_cfg* enh_eq_cfgs; scalar_t__ num_enh_eq_cfgs; } ;
struct wm8994 {TYPE_1__ pdata; } ;
struct wm8958_enh_eq_cfg {int * regs; } ;
struct snd_soc_component {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct wm8994_priv* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_3 (struct snd_soc_component*,int,int ) ;
 int FUNC_4 (struct snd_soc_component*,char*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct snd_soc_component *VAR_8, int VAR_9)
{
 struct wm8994_priv *VAR_10 = FUNC_1(VAR_8);
 struct wm8994 *VAR_11 = VAR_10->wm8994;
 int VAR_12;

 FUNC_4(VAR_8, "ENH_EQ", VAR_10->enh_eq, 0);

 FUNC_2(VAR_8, VAR_3,
       VAR_1, VAR_1);


 if (VAR_11->pdata.num_enh_eq_cfgs) {
  struct wm8958_enh_eq_cfg *VAR_13
   = &VAR_11->pdata.enh_eq_cfgs[VAR_10->enh_eq_cfg];

  for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_13->regs); VAR_12++)
   FUNC_3(VAR_8, VAR_12 + 0x2200,
          VAR_13->regs[VAR_12]);
 }


 FUNC_3(VAR_8, VAR_2,
        VAR_4);


 FUNC_2(VAR_8, VAR_0,
       VAR_6 | VAR_5,
       VAR_9 << VAR_7 | VAR_5);
}
