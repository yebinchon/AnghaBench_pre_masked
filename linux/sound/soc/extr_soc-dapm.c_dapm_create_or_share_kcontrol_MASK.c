
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_soc_dapm_widget {int id; char* name; struct snd_kcontrol** kcontrols; TYPE_2__* kcontrol_news; struct snd_soc_dapm_context* dapm; } ;
struct snd_soc_dapm_context {int dev; TYPE_1__* card; } ;
struct snd_kcontrol {int private_free; } ;
struct snd_card {int dummy; } ;
struct TYPE_5__ {char* name; } ;
struct TYPE_4__ {struct snd_card* snd_card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_soc_dapm_context*,struct snd_soc_dapm_widget*,TYPE_2__*,struct snd_kcontrol**) ;
 int FUNC_1 (struct snd_kcontrol*,struct snd_soc_dapm_widget*) ;
 int FUNC_2 (struct snd_soc_dapm_widget*,struct snd_kcontrol*,char const*) ;
 int VAR_3 ;
 int FUNC_3 (int ,char*,char*,char const*,int) ;
 char* FUNC_4 (int ,char*,char*,char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct snd_card*,struct snd_kcontrol*) ;
 int FUNC_7 (struct snd_kcontrol*) ;
 struct snd_kcontrol* FUNC_8 (TYPE_2__*,int *,char const*,char const*) ;
 char* FUNC_9 (struct snd_soc_dapm_context*) ;
 int FUNC_10 (char const*) ;

__attribute__((used)) static int FUNC_11(struct snd_soc_dapm_widget *VAR_4,
 int VAR_5)
{
 struct snd_soc_dapm_context *VAR_6 = VAR_4->dapm;
 struct snd_card *VAR_7 = VAR_6->card->snd_card;
 const char *VAR_8;
 size_t VAR_9;
 int VAR_10;
 struct snd_kcontrol *VAR_11;
 bool VAR_12, VAR_13;
 char *VAR_14 = ((void*)0);
 const char *VAR_15;
 int VAR_16 = 0;

 VAR_8 = FUNC_9(VAR_6);
 if (VAR_8)
  VAR_9 = FUNC_10(VAR_8) + 1;
 else
  VAR_9 = 0;

 VAR_10 = FUNC_0(VAR_6, VAR_4, &VAR_4->kcontrol_news[VAR_5],
      &VAR_11);

 if (!VAR_11) {
  if (VAR_10) {
   VAR_12 = 0;
   VAR_13 = 1;
  } else {
   switch (VAR_4->id) {
   case 128:
   case 133:
   case 129:
   case 134:
   case 130:
    VAR_12 = 1;
    VAR_13 = 1;
    break;
   case 132:
    VAR_12 = 0;
    VAR_13 = 1;
    break;
   case 135:
   case 131:
    VAR_12 = 1;
    VAR_13 = 0;
    break;
   default:
    return -VAR_0;
   }
  }

  if (VAR_12 && VAR_13) {






   VAR_14 = FUNC_4(VAR_2, "%s %s",
     VAR_4->name + VAR_9,
     VAR_4->kcontrol_news[VAR_5].name);
   if (VAR_14 == ((void*)0))
    return -VAR_1;

   VAR_15 = VAR_14;
  } else if (VAR_12) {
   VAR_14 = ((void*)0);
   VAR_15 = VAR_4->name + VAR_9;
  } else {
   VAR_14 = ((void*)0);
   VAR_15 = VAR_4->kcontrol_news[VAR_5].name;
  }

  VAR_11 = FUNC_8(&VAR_4->kcontrol_news[VAR_5], ((void*)0), VAR_15,
     VAR_8);
  if (!VAR_11) {
   VAR_16 = -VAR_1;
   goto exit_free;
  }

  VAR_11->private_free = VAR_3;

  VAR_16 = FUNC_2(VAR_4, VAR_11, VAR_15);
  if (VAR_16) {
   FUNC_7(VAR_11);
   goto exit_free;
  }

  VAR_16 = FUNC_6(VAR_7, VAR_11);
  if (VAR_16 < 0) {
   FUNC_3(VAR_6->dev,
    "ASoC: failed to add widget %s dapm kcontrol %s: %d\n",
    VAR_4->name, VAR_15, VAR_16);
   goto exit_free;
  }
 }

 VAR_16 = FUNC_1(VAR_11, VAR_4);
 if (VAR_16 == 0)
  VAR_4->kcontrols[VAR_5] = VAR_11;

exit_free:
 FUNC_5(VAR_14);

 return VAR_16;
}
