
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_jack {int private_free; TYPE_1__* private_data; } ;
struct hdmi_spec {TYPE_1__* pcm_rec; } ;
struct hda_codec {int card; } ;
struct TYPE_2__ {struct snd_jack* jack; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char const*,int ,struct snd_jack**,int,int) ;

__attribute__((used)) static int FUNC_1(struct hda_codec *VAR_2,
          struct hdmi_spec *VAR_3,
          int VAR_4,
          const char *VAR_5)
{
 struct snd_jack *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_0(VAR_2->card, VAR_5, VAR_0, &VAR_6,
      1, 0);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_3->pcm_rec[VAR_4].jack = VAR_6;
 VAR_6->private_data = &VAR_3->pcm_rec[VAR_4];
 VAR_6->private_free = VAR_1;
 return 0;
}
