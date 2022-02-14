
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t items; char const** texts; } ;
struct wm8996_pdata {int num_retune_mobile_cfgs; TYPE_1__* retune_mobile_cfgs; } ;
struct wm8996_priv {int num_retune_mobile_texts; char const** retune_mobile_texts; TYPE_2__ retune_mobile_enum; struct wm8996_pdata pdata; } ;
struct snd_soc_component {int dev; } ;
struct snd_kcontrol_new {int dummy; } ;
struct TYPE_3__ {char* name; } ;


 int FUNC_0 (struct snd_kcontrol_new*) ;
 int VAR_0 ;
 struct snd_kcontrol_new FUNC_1 (char*,TYPE_2__,int ,int ) ;
 int FUNC_2 (int ,char*,size_t) ;
 int FUNC_3 (int ,char*,int) ;
 char** FUNC_4 (char const**,int,int ) ;
 int FUNC_5 (struct snd_soc_component*,struct snd_kcontrol_new*,int ) ;
 struct wm8996_priv* FUNC_6 (struct snd_soc_component*) ;
 scalar_t__ FUNC_7 (char*,char const*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_8(struct snd_soc_component *VAR_3)
{
 struct wm8996_priv *VAR_4 = FUNC_6(VAR_3);
 struct wm8996_pdata *VAR_5 = &VAR_4->pdata;

 struct snd_kcontrol_new VAR_6[] = {
  FUNC_1("DSP1 EQ Mode",
        VAR_4->retune_mobile_enum,
        VAR_1,
        VAR_2),
  FUNC_1("DSP2 EQ Mode",
        VAR_4->retune_mobile_enum,
        VAR_1,
        VAR_2),
 };
 int VAR_7, VAR_8, VAR_9;
 const char **VAR_10;





 VAR_4->num_retune_mobile_texts = 0;
 VAR_4->retune_mobile_texts = ((void*)0);
 for (VAR_8 = 0; VAR_8 < VAR_5->num_retune_mobile_cfgs; VAR_8++) {
  for (VAR_9 = 0; VAR_9 < VAR_4->num_retune_mobile_texts; VAR_9++) {
   if (FUNC_7(VAR_5->retune_mobile_cfgs[VAR_8].name,
       VAR_4->retune_mobile_texts[VAR_9]) == 0)
    break;
  }

  if (VAR_9 != VAR_4->num_retune_mobile_texts)
   continue;


  VAR_10 = FUNC_4(VAR_4->retune_mobile_texts,
        sizeof(char *) *
        (VAR_4->num_retune_mobile_texts + 1),
        VAR_0);
  if (VAR_10 == ((void*)0))
   continue;


  VAR_10[VAR_4->num_retune_mobile_texts] =
   VAR_5->retune_mobile_cfgs[VAR_8].name;


  VAR_4->num_retune_mobile_texts++;
  VAR_4->retune_mobile_texts = VAR_10;
 }

 FUNC_2(VAR_3->dev, "Allocated %d unique ReTune Mobile names\n",
  VAR_4->num_retune_mobile_texts);

 VAR_4->retune_mobile_enum.items = VAR_4->num_retune_mobile_texts;
 VAR_4->retune_mobile_enum.texts = VAR_4->retune_mobile_texts;

 VAR_7 = FUNC_5(VAR_3, VAR_6, FUNC_0(VAR_6));
 if (VAR_7 != 0)
  FUNC_3(VAR_3->dev,
   "Failed to add ReTune Mobile controls: %d\n", VAR_7);
}
