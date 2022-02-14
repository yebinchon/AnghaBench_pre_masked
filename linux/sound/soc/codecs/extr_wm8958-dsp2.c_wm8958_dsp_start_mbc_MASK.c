
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wm8994_priv {size_t mbc_cfg; scalar_t__ mbc; struct wm8994* wm8994; } ;
struct TYPE_2__ {struct wm8958_mbc_cfg* mbc_cfgs; scalar_t__ num_mbc_cfgs; } ;
struct wm8994 {TYPE_1__ pdata; } ;
struct wm8958_mbc_cfg {int * cutoff_regs; int * coeff_regs; } ;
struct snd_soc_component {int dummy; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct wm8994_priv* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ) ;
 int FUNC_3 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_4 (struct snd_soc_component*,scalar_t__,int ) ;
 int FUNC_5 (struct snd_soc_component*,char*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_6(struct snd_soc_component *VAR_10, int VAR_11)
{
 struct wm8994_priv *VAR_12 = FUNC_1(VAR_10);
 struct wm8994 *VAR_13 = VAR_12->wm8994;
 int VAR_14;


 if (FUNC_2(VAR_10, VAR_3) & VAR_1)
  return;


 if (VAR_12->mbc)
  FUNC_5(VAR_10, "MBC", VAR_12->mbc, 0);

 FUNC_3(VAR_10, VAR_3,
       VAR_1, VAR_1);


 if (VAR_13->pdata.num_mbc_cfgs) {
  struct wm8958_mbc_cfg *VAR_15
   = &VAR_13->pdata.mbc_cfgs[VAR_12->mbc_cfg];

  for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_15->coeff_regs); VAR_14++)
   FUNC_4(VAR_10, VAR_14 + VAR_5,
          VAR_15->coeff_regs[VAR_14]);

  for (VAR_14 = 0; VAR_14 < FUNC_0(VAR_15->cutoff_regs); VAR_14++)
   FUNC_4(VAR_10,
          VAR_14 + VAR_6,
          VAR_15->cutoff_regs[VAR_14]);
 }


 FUNC_4(VAR_10, VAR_2,
        VAR_4);


 FUNC_3(VAR_10, VAR_0,
       VAR_7 |
       VAR_8,
       VAR_11 << VAR_9 |
       VAR_7);
}
