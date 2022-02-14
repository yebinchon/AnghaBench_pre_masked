
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_dai {size_t id; struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {size_t stream; } ;
struct hdac_device {int dev; } ;
struct TYPE_4__ {struct hdac_device core; } ;
struct hdac_hda_priv {TYPE_2__ codec; TYPE_1__* pcm; } ;
struct hda_pcm_stream {int dummy; } ;
struct hda_pcm {struct hda_pcm_stream* stream; } ;
struct TYPE_3__ {unsigned int* stream_tag; unsigned int* format_val; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (TYPE_2__*,struct hda_pcm_stream*,unsigned int,unsigned int,struct snd_pcm_substream*) ;
 struct hdac_hda_priv* FUNC_2 (struct snd_soc_component*) ;
 struct hda_pcm* FUNC_3 (struct hdac_hda_priv*,struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_1,
    struct snd_soc_dai *VAR_2)
{
 struct snd_soc_component *VAR_3 = VAR_2->component;
 struct hda_pcm_stream *VAR_4;
 struct hdac_hda_priv *VAR_5;
 struct hdac_device *VAR_6;
 unsigned int VAR_7;
 struct hda_pcm *VAR_8;
 unsigned int VAR_9;
 int VAR_10 = 0;

 VAR_5 = FUNC_2(VAR_3);
 VAR_6 = &VAR_5->codec.core;
 VAR_8 = FUNC_3(VAR_5, VAR_2);
 if (!VAR_8)
  return -VAR_0;

 VAR_4 = &VAR_8->stream[VAR_1->stream];

 VAR_9 = VAR_5->pcm[VAR_2->id].stream_tag[VAR_1->stream];
 VAR_7 = VAR_5->pcm[VAR_2->id].format_val[VAR_1->stream];

 VAR_10 = FUNC_1(&VAR_5->codec, VAR_4,
        VAR_9, VAR_7, VAR_1);
 if (VAR_10 < 0)
  FUNC_0(&VAR_6->dev, "codec prepare failed %d\n", VAR_10);

 return VAR_10;
}
