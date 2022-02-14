
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int items; int * texts; } ;
struct wm8904_priv {int * drc_texts; TYPE_2__ drc_enum; struct wm8904_pdata* pdata; } ;
struct wm8904_pdata {int num_drc_cfgs; int num_retune_mobile_cfgs; TYPE_1__* drc_cfgs; } ;
struct snd_soc_component {int dev; } ;
struct snd_kcontrol_new {int dummy; } ;
struct TYPE_3__ {int name; } ;


 int FUNC_0 (struct snd_kcontrol_new*) ;
 int VAR_0 ;
 struct snd_kcontrol_new FUNC_1 (char*,TYPE_2__,int ,int ) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int ,char*,int) ;
 int * FUNC_4 (int,int,int ) ;
 int FUNC_5 (struct snd_soc_component*,struct snd_kcontrol_new*,int) ;
 struct wm8904_priv* FUNC_6 (struct snd_soc_component*) ;
 struct snd_kcontrol_new* VAR_1 ;
 int VAR_2 ;
 int FUNC_7 (struct snd_soc_component*) ;
 int VAR_3 ;
 int FUNC_8 (struct snd_soc_component*) ;

__attribute__((used)) static void FUNC_9(struct snd_soc_component *VAR_4)
{
 struct wm8904_priv *VAR_5 = FUNC_6(VAR_4);
 struct wm8904_pdata *VAR_6 = VAR_5->pdata;
 int VAR_7, VAR_8;

 if (!VAR_6) {
  FUNC_5(VAR_4, VAR_1,
         FUNC_0(VAR_1));
  return;
 }

 FUNC_2(VAR_4->dev, "%d DRC configurations\n", VAR_6->num_drc_cfgs);

 if (VAR_6->num_drc_cfgs) {
  struct snd_kcontrol_new VAR_9 =
   FUNC_1("DRC Mode", VAR_5->drc_enum,
         VAR_2, VAR_3);


  VAR_5->drc_texts = FUNC_4(VAR_6->num_drc_cfgs,
        sizeof(char *),
        VAR_0);
  if (!VAR_5->drc_texts)
   return;

  for (VAR_8 = 0; VAR_8 < VAR_6->num_drc_cfgs; VAR_8++)
   VAR_5->drc_texts[VAR_8] = VAR_6->drc_cfgs[VAR_8].name;

  VAR_5->drc_enum.items = VAR_6->num_drc_cfgs;
  VAR_5->drc_enum.texts = VAR_5->drc_texts;

  VAR_7 = FUNC_5(VAR_4, &VAR_9, 1);
  if (VAR_7 != 0)
   FUNC_3(VAR_4->dev,
    "Failed to add DRC mode control: %d\n", VAR_7);

  FUNC_8(VAR_4);
 }

 FUNC_2(VAR_4->dev, "%d ReTune Mobile configurations\n",
  VAR_6->num_retune_mobile_cfgs);

 if (VAR_6->num_retune_mobile_cfgs)
  FUNC_7(VAR_4);
 else
  FUNC_5(VAR_4, VAR_1,
         FUNC_0(VAR_1));
}
