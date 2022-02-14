
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {int dev; TYPE_1__* component; } ;
struct snd_pcm_substream {int runtime; } ;
struct axg_tdm_stream {int mask; } ;
struct axg_tdm_iface {int rate; } ;
struct TYPE_2__ {scalar_t__ active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,int ) ;
 struct axg_tdm_stream* FUNC_3 (struct snd_soc_dai*,struct snd_pcm_substream*) ;
 struct axg_tdm_iface* FUNC_4 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_2,
     struct snd_soc_dai *VAR_3)
{
 struct axg_tdm_iface *VAR_4 = FUNC_4(VAR_3);
 struct axg_tdm_stream *VAR_5 =
  FUNC_3(VAR_3, VAR_2);
 int VAR_6;

 if (!FUNC_0(VAR_5->mask)) {
  FUNC_1(VAR_3->dev, "interface has not slots\n");
  return -VAR_0;
 }


 if (VAR_3->component->active) {
  VAR_6 = FUNC_2(VAR_2->runtime,
         VAR_1,
         VAR_4->rate);
  if (VAR_6 < 0) {
   FUNC_1(VAR_3->dev,
    "can't set iface rate constraint\n");
   return VAR_6;
  }
 }

 return 0;
}
