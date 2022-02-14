
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wm8994_priv {size_t mbc_cfg; size_t vss_cfg; size_t vss_hpf_cfg; scalar_t__* vss_ena; scalar_t__* hpf1_ena; scalar_t__* hpf2_ena; scalar_t__* mbc_ena; scalar_t__ mbc_vss; struct wm8994* wm8994; } ;
struct TYPE_2__ {struct wm8958_vss_hpf_cfg* vss_hpf_cfgs; scalar_t__ num_vss_hpf_cfgs; struct wm8958_vss_cfg* vss_cfgs; scalar_t__ num_vss_cfgs; struct wm8958_mbc_cfg* mbc_cfgs; scalar_t__ num_mbc_cfgs; } ;
struct wm8994 {TYPE_1__ pdata; } ;
struct wm8958_vss_hpf_cfg {int* regs; } ;
struct wm8958_vss_cfg {int* regs; } ;
struct wm8958_mbc_cfg {int* combined_regs; } ;
struct snd_soc_component {int dummy; } ;


 int FUNC_0 (int*) ;
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
 int FUNC_3 (struct snd_soc_component*,int,int) ;
 int FUNC_4 (struct snd_soc_component*,char*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_5(struct snd_soc_component *VAR_8, int VAR_9)
{
 struct wm8994_priv *VAR_10 = FUNC_1(VAR_8);
 struct wm8994 *VAR_11 = VAR_10->wm8994;
 int VAR_12, VAR_13;

 if (VAR_10->mbc_vss)
  FUNC_4(VAR_8, "MBC+VSS", VAR_10->mbc_vss, 0);

 FUNC_2(VAR_8, VAR_3,
       VAR_1, VAR_1);


 if (VAR_11->pdata.num_mbc_cfgs) {
  struct wm8958_mbc_cfg *VAR_14
   = &VAR_11->pdata.mbc_cfgs[VAR_10->mbc_cfg];

  for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_14->combined_regs); VAR_12++)
   FUNC_3(VAR_8, VAR_12 + 0x2800,
          VAR_14->combined_regs[VAR_12]);
 }

 if (VAR_11->pdata.num_vss_cfgs) {
  struct wm8958_vss_cfg *VAR_15
   = &VAR_11->pdata.vss_cfgs[VAR_10->vss_cfg];

  for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_15->regs); VAR_12++)
   FUNC_3(VAR_8, VAR_12 + 0x2600, VAR_15->regs[VAR_12]);
 }

 if (VAR_11->pdata.num_vss_hpf_cfgs) {
  struct wm8958_vss_hpf_cfg *VAR_16
   = &VAR_11->pdata.vss_hpf_cfgs[VAR_10->vss_hpf_cfg];

  for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_16->regs); VAR_12++)
   FUNC_3(VAR_8, VAR_12 + 0x2400, VAR_16->regs[VAR_12]);
 }


 FUNC_3(VAR_8, VAR_2,
        VAR_4);


 VAR_13 = 0;
 if (VAR_10->mbc_ena[VAR_9])
  VAR_13 |= 0x8;
 if (VAR_10->hpf2_ena[VAR_9])
  VAR_13 |= 0x4;
 if (VAR_10->hpf1_ena[VAR_9])
  VAR_13 |= 0x2;
 if (VAR_10->vss_ena[VAR_9])
  VAR_13 |= 0x1;

 FUNC_3(VAR_8, 0x2201, VAR_13);


 FUNC_2(VAR_8, VAR_0,
       VAR_6 | VAR_5,
       VAR_9 << VAR_7 | VAR_5);
}
