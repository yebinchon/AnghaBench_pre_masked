
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {struct snd_soc_component* component; } ;
struct TYPE_12__ {int items; int * texts; } ;
struct wm8994_priv {int dsp_active; TYPE_5__ hubs; int * enh_eq_texts; TYPE_6__ enh_eq_enum; int * vss_hpf_texts; TYPE_6__ vss_hpf_enum; int * vss_texts; TYPE_6__ vss_enum; int * mbc_texts; TYPE_6__ mbc_enum; struct wm8994* wm8994; } ;
struct wm8994_pdata {int num_mbc_cfgs; int num_vss_cfgs; int num_vss_hpf_cfgs; int num_enh_eq_cfgs; TYPE_4__* enh_eq_cfgs; TYPE_3__* vss_hpf_cfgs; TYPE_2__* vss_cfgs; TYPE_1__* mbc_cfgs; } ;
struct wm8994 {struct wm8994_pdata pdata; } ;
struct snd_soc_component {int dev; } ;
struct snd_kcontrol_new {int dummy; } ;
struct TYPE_10__ {int name; } ;
struct TYPE_9__ {int name; } ;
struct TYPE_8__ {int name; } ;
struct TYPE_7__ {int name; } ;


 int FUNC_0 (struct snd_kcontrol_new*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct snd_kcontrol_new FUNC_1 (char*,TYPE_6__,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,int) ;
 void* FUNC_3 (int,int,int ) ;
 int FUNC_4 (int ,int ,char*,int ,int ,struct snd_soc_component*,int ) ;
 int FUNC_5 (struct snd_soc_component*,struct snd_kcontrol_new*,int) ;
 struct wm8994_priv* FUNC_6 (struct snd_soc_component*) ;
 int VAR_3 ;
 struct snd_kcontrol_new* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct snd_kcontrol_new* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 struct snd_kcontrol_new* VAR_16 ;

void FUNC_7(struct snd_soc_component *VAR_17)
{
 struct wm8994_priv *VAR_18 = FUNC_6(VAR_17);
 struct wm8994 *VAR_19 = VAR_18->wm8994;
 struct wm8994_pdata *VAR_20 = &VAR_19->pdata;
 int VAR_21, VAR_22;

 VAR_18->dsp_active = -1;

 FUNC_5(VAR_17, VAR_10,
        FUNC_0(VAR_10));
 FUNC_5(VAR_17, VAR_16,
        FUNC_0(VAR_16));
 FUNC_5(VAR_17, VAR_4,
        FUNC_0(VAR_4));



 FUNC_4(VAR_2, VAR_0,
    "wm8958_mbc.wfw", VAR_17->dev, VAR_1,
    VAR_17, VAR_9);
 FUNC_4(VAR_2, VAR_0,
    "wm8958_mbc_vss.wfw", VAR_17->dev, VAR_1,
    VAR_17, VAR_11);
 FUNC_4(VAR_2, VAR_0,
    "wm8958_enh_eq.wfw", VAR_17->dev, VAR_1,
    VAR_17, VAR_3);

 if (VAR_20->num_mbc_cfgs) {
  struct snd_kcontrol_new VAR_23[] = {
   FUNC_1("MBC Mode", VAR_18->mbc_enum,
         VAR_6, VAR_13),
  };


  VAR_18->mbc_texts = FUNC_3(VAR_20->num_mbc_cfgs,
        sizeof(char *),
        VAR_1);
  if (!VAR_18->mbc_texts)
   return;

  for (VAR_22 = 0; VAR_22 < VAR_20->num_mbc_cfgs; VAR_22++)
   VAR_18->mbc_texts[VAR_22] = VAR_20->mbc_cfgs[VAR_22].name;

  VAR_18->mbc_enum.items = VAR_20->num_mbc_cfgs;
  VAR_18->mbc_enum.texts = VAR_18->mbc_texts;

  VAR_21 = FUNC_5(VAR_18->hubs.component,
       VAR_23, 1);
  if (VAR_21 != 0)
   FUNC_2(VAR_18->hubs.component->dev,
    "Failed to add MBC mode controls: %d\n", VAR_21);
 }

 if (VAR_20->num_vss_cfgs) {
  struct snd_kcontrol_new VAR_24[] = {
   FUNC_1("VSS Mode", VAR_18->vss_enum,
         VAR_7, VAR_14),
  };


  VAR_18->vss_texts = FUNC_3(VAR_20->num_vss_cfgs,
        sizeof(char *),
        VAR_1);
  if (!VAR_18->vss_texts)
   return;

  for (VAR_22 = 0; VAR_22 < VAR_20->num_vss_cfgs; VAR_22++)
   VAR_18->vss_texts[VAR_22] = VAR_20->vss_cfgs[VAR_22].name;

  VAR_18->vss_enum.items = VAR_20->num_vss_cfgs;
  VAR_18->vss_enum.texts = VAR_18->vss_texts;

  VAR_21 = FUNC_5(VAR_18->hubs.component,
       VAR_24, 1);
  if (VAR_21 != 0)
   FUNC_2(VAR_18->hubs.component->dev,
    "Failed to add VSS mode controls: %d\n", VAR_21);
 }

 if (VAR_20->num_vss_hpf_cfgs) {
  struct snd_kcontrol_new VAR_25[] = {
   FUNC_1("VSS HPF Mode", VAR_18->vss_hpf_enum,
         VAR_8,
         VAR_15),
  };


  VAR_18->vss_hpf_texts = FUNC_3(VAR_20->num_vss_hpf_cfgs,
            sizeof(char *),
            VAR_1);
  if (!VAR_18->vss_hpf_texts)
   return;

  for (VAR_22 = 0; VAR_22 < VAR_20->num_vss_hpf_cfgs; VAR_22++)
   VAR_18->vss_hpf_texts[VAR_22] = VAR_20->vss_hpf_cfgs[VAR_22].name;

  VAR_18->vss_hpf_enum.items = VAR_20->num_vss_hpf_cfgs;
  VAR_18->vss_hpf_enum.texts = VAR_18->vss_hpf_texts;

  VAR_21 = FUNC_5(VAR_18->hubs.component,
       VAR_25, 1);
  if (VAR_21 != 0)
   FUNC_2(VAR_18->hubs.component->dev,
    "Failed to add VSS HPFmode controls: %d\n",
    VAR_21);
 }

 if (VAR_20->num_enh_eq_cfgs) {
  struct snd_kcontrol_new VAR_26[] = {
   FUNC_1("Enhanced EQ Mode", VAR_18->enh_eq_enum,
         VAR_5,
         VAR_12),
  };


  VAR_18->enh_eq_texts = FUNC_3(VAR_20->num_enh_eq_cfgs,
           sizeof(char *),
           VAR_1);
  if (!VAR_18->enh_eq_texts)
   return;

  for (VAR_22 = 0; VAR_22 < VAR_20->num_enh_eq_cfgs; VAR_22++)
   VAR_18->enh_eq_texts[VAR_22] = VAR_20->enh_eq_cfgs[VAR_22].name;

  VAR_18->enh_eq_enum.items = VAR_20->num_enh_eq_cfgs;
  VAR_18->enh_eq_enum.texts = VAR_18->enh_eq_texts;

  VAR_21 = FUNC_5(VAR_18->hubs.component,
       VAR_26, 1);
  if (VAR_21 != 0)
   FUNC_2(VAR_18->hubs.component->dev,
    "Failed to add enhanced EQ controls: %d\n",
    VAR_21);
 }
}
