
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {scalar_t__ ignore_suspend; } ;
struct snd_soc_dai {struct snd_soc_dapm_widget* capture_widget; struct snd_soc_dapm_widget* playback_widget; int dev; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct skl_dev {int supend_active; } ;
struct hdac_bus {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct skl_dev* FUNC_0 (struct hdac_bus*) ;
 struct hdac_bus* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct snd_pcm_substream *VAR_1,
      struct snd_soc_dai *VAR_2, bool VAR_3)
{
 struct hdac_bus *VAR_4 = FUNC_1(VAR_2->dev);
 struct snd_soc_dapm_widget *VAR_5;
 struct skl_dev *VAR_6 = FUNC_0(VAR_4);

 if (VAR_1->stream == VAR_0)
  VAR_5 = VAR_2->playback_widget;
 else
  VAR_5 = VAR_2->capture_widget;

 if (VAR_5->ignore_suspend && VAR_3)
  VAR_6->supend_active++;
 else if (VAR_5->ignore_suspend && !VAR_3)
  VAR_6->supend_active--;
}
