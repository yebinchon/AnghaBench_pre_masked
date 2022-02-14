
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct snd_soc_dapm_widget_list {int dummy; } ;
struct snd_soc_dapm_widget {int dummy; } ;
struct snd_soc_dai {struct snd_soc_dapm_widget* capture_widget; struct snd_soc_dapm_widget* playback_widget; TYPE_1__* component; } ;
struct snd_soc_card {int dapm_mutex; } ;
struct TYPE_8__ {int next; } ;
struct TYPE_7__ {struct snd_soc_card* card; } ;


 int FUNC_0 (TYPE_2__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct snd_soc_dapm_widget_list**,TYPE_2__*) ;
 int FUNC_2 (struct snd_soc_dapm_widget*,int ) ;
 int FUNC_3 (struct snd_soc_dapm_widget*,TYPE_2__*,int (*) (struct snd_soc_dapm_widget*,int)) ;
 int FUNC_4 (struct snd_soc_dapm_widget*,TYPE_2__*,int (*) (struct snd_soc_dapm_widget*,int)) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int,int) ;
 TYPE_2__ VAR_4 ;

int FUNC_9(struct snd_soc_dai *VAR_5, int VAR_6,
 struct snd_soc_dapm_widget_list **VAR_7,
 bool (*VAR_8)(struct snd_soc_dapm_widget *,
          enum snd_soc_dapm_direction))
{
 struct snd_soc_card *VAR_9 = VAR_5->component->card;
 struct snd_soc_dapm_widget *VAR_10;
 FUNC_0(VAR_4);
 int VAR_11;
 int VAR_12;

 FUNC_6(&VAR_9->dapm_mutex, VAR_1);

 if (VAR_6 == VAR_0) {
  VAR_10 = VAR_5->playback_widget;
  FUNC_2(VAR_10, VAR_3);
  VAR_11 = FUNC_4(VAR_10, &VAR_4,
    VAR_8);
 } else {
  VAR_10 = VAR_5->capture_widget;
  FUNC_2(VAR_10, VAR_2);
  VAR_11 = FUNC_3(VAR_10, &VAR_4,
    VAR_8);
 }


 FUNC_5(VAR_4.next);

 VAR_12 = FUNC_1(VAR_7, &VAR_4);
 if (VAR_12)
  VAR_11 = VAR_12;

 FUNC_8(VAR_11, VAR_6);
 FUNC_7(&VAR_9->dapm_mutex);

 return VAR_11;
}
