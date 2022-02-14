
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {struct snd_soc_component* component; } ;
struct TYPE_6__ {size_t items; char const** texts; } ;
struct wm8994_priv {int num_retune_mobile_texts; char const** retune_mobile_texts; TYPE_2__ hubs; TYPE_3__ retune_mobile_enum; struct wm8994* wm8994; } ;
struct wm8994_pdata {int num_retune_mobile_cfgs; TYPE_1__* retune_mobile_cfgs; } ;
struct wm8994 {struct wm8994_pdata pdata; } ;
struct snd_soc_component {int dev; } ;
struct snd_kcontrol_new {int dummy; } ;
struct TYPE_4__ {char* name; } ;


 int FUNC_0 (struct snd_kcontrol_new*) ;
 int VAR_0 ;
 struct snd_kcontrol_new FUNC_1 (char*,TYPE_3__,int ,int ) ;
 int FUNC_2 (int ,char*,size_t) ;
 int FUNC_3 (int ,char*,int) ;
 char** FUNC_4 (char const**,int,int ) ;
 int FUNC_5 (struct snd_soc_component*,struct snd_kcontrol_new*,int ) ;
 scalar_t__ FUNC_6 (char*,char const*) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_7(struct wm8994_priv *VAR_3)
{
 struct snd_soc_component *VAR_4 = VAR_3->hubs.component;
 struct wm8994 *VAR_5 = VAR_3->wm8994;
 struct wm8994_pdata *VAR_6 = &VAR_5->pdata;
 struct snd_kcontrol_new VAR_7[] = {
  FUNC_1("AIF1.1 EQ Mode",
        VAR_3->retune_mobile_enum,
        VAR_1,
        VAR_2),
  FUNC_1("AIF1.2 EQ Mode",
        VAR_3->retune_mobile_enum,
        VAR_1,
        VAR_2),
  FUNC_1("AIF2 EQ Mode",
        VAR_3->retune_mobile_enum,
        VAR_1,
        VAR_2),
 };
 int VAR_8, VAR_9, VAR_10;
 const char **VAR_11;





 VAR_3->num_retune_mobile_texts = 0;
 VAR_3->retune_mobile_texts = ((void*)0);
 for (VAR_9 = 0; VAR_9 < VAR_6->num_retune_mobile_cfgs; VAR_9++) {
  for (VAR_10 = 0; VAR_10 < VAR_3->num_retune_mobile_texts; VAR_10++) {
   if (FUNC_6(VAR_6->retune_mobile_cfgs[VAR_9].name,
       VAR_3->retune_mobile_texts[VAR_10]) == 0)
    break;
  }

  if (VAR_10 != VAR_3->num_retune_mobile_texts)
   continue;


  VAR_11 = FUNC_4(VAR_3->retune_mobile_texts,
        sizeof(char *) *
        (VAR_3->num_retune_mobile_texts + 1),
        VAR_0);
  if (VAR_11 == ((void*)0))
   continue;


  VAR_11[VAR_3->num_retune_mobile_texts] =
   VAR_6->retune_mobile_cfgs[VAR_9].name;


  VAR_3->num_retune_mobile_texts++;
  VAR_3->retune_mobile_texts = VAR_11;
 }

 FUNC_2(VAR_4->dev, "Allocated %d unique ReTune Mobile names\n",
  VAR_3->num_retune_mobile_texts);

 VAR_3->retune_mobile_enum.items = VAR_3->num_retune_mobile_texts;
 VAR_3->retune_mobile_enum.texts = VAR_3->retune_mobile_texts;

 VAR_8 = FUNC_5(VAR_3->hubs.component, VAR_7,
       FUNC_0(VAR_7));
 if (VAR_8 != 0)
  FUNC_3(VAR_3->hubs.component->dev,
   "Failed to add ReTune Mobile controls: %d\n", VAR_8);
}
