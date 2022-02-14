
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int template ;
struct snd_soc_dapm_widget {struct snd_soc_dai* priv; scalar_t__ name; scalar_t__ sname; int id; int reg; } ;
struct snd_soc_dapm_context {scalar_t__ dev; } ;
struct snd_soc_dai {scalar_t__ dev; struct snd_soc_dapm_widget* capture_widget; TYPE_3__* driver; struct snd_soc_dapm_widget* playback_widget; } ;
struct TYPE_5__ {scalar_t__ stream_name; } ;
struct TYPE_4__ {scalar_t__ stream_name; } ;
struct TYPE_6__ {TYPE_2__ capture; TYPE_1__ playback; } ;


 scalar_t__ FUNC_0 (struct snd_soc_dapm_widget*) ;
 int FUNC_1 (struct snd_soc_dapm_widget*) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__,char*,scalar_t__) ;
 int FUNC_4 (struct snd_soc_dapm_widget*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 struct snd_soc_dapm_widget* FUNC_5 (struct snd_soc_dapm_context*,struct snd_soc_dapm_widget*) ;

int FUNC_6(struct snd_soc_dapm_context *VAR_3,
     struct snd_soc_dai *VAR_4)
{
 struct snd_soc_dapm_widget VAR_5;
 struct snd_soc_dapm_widget *VAR_6;

 FUNC_2(VAR_3->dev != VAR_4->dev);

 FUNC_4(&VAR_5, 0, sizeof(VAR_5));
 VAR_5.reg = VAR_0;

 if (VAR_4->driver->playback.stream_name) {
  VAR_5.id = VAR_1;
  VAR_5.name = VAR_4->driver->playback.stream_name;
  VAR_5.sname = VAR_4->driver->playback.stream_name;

  FUNC_3(VAR_4->dev, "ASoC: adding %s widget\n",
   VAR_5.name);

  VAR_6 = FUNC_5(VAR_3, &VAR_5);
  if (FUNC_0(VAR_6))
   return FUNC_1(VAR_6);

  VAR_6->priv = VAR_4;
  VAR_4->playback_widget = VAR_6;
 }

 if (VAR_4->driver->capture.stream_name) {
  VAR_5.id = VAR_2;
  VAR_5.name = VAR_4->driver->capture.stream_name;
  VAR_5.sname = VAR_4->driver->capture.stream_name;

  FUNC_3(VAR_4->dev, "ASoC: adding %s widget\n",
   VAR_5.name);

  VAR_6 = FUNC_5(VAR_3, &VAR_5);
  if (FUNC_0(VAR_6))
   return FUNC_1(VAR_6);

  VAR_6->priv = VAR_4;
  VAR_4->capture_widget = VAR_6;
 }

 return 0;
}
