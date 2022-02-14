
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct hda_pcm_stream {int dummy; } ;
struct azx_pcm {int codec; } ;
struct azx_dev {int dummy; } ;
struct TYPE_3__ {scalar_t__ prepared; } ;


 TYPE_1__* FUNC_0 (struct azx_dev*) ;
 int FUNC_1 (struct azx_dev*) ;
 int FUNC_2 (struct azx_dev*) ;
 int FUNC_3 (struct azx_dev*) ;
 struct azx_dev* FUNC_4 (struct snd_pcm_substream*) ;
 int FUNC_5 (int ,struct hda_pcm_stream*,struct snd_pcm_substream*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (struct snd_pcm_substream*) ;
 struct azx_pcm* FUNC_8 (struct snd_pcm_substream*) ;
 struct hda_pcm_stream* FUNC_9 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_10(struct snd_pcm_substream *VAR_0)
{
 struct azx_pcm *VAR_1 = FUNC_8(VAR_0);
 struct azx_dev *VAR_2 = FUNC_4(VAR_0);
 struct hda_pcm_stream *VAR_3 = FUNC_9(VAR_0);
 int VAR_4;


 FUNC_2(VAR_2);
 if (!FUNC_1(VAR_2))
  FUNC_6(FUNC_0(VAR_2));

 FUNC_5(VAR_1->codec, VAR_3, VAR_0);

 VAR_4 = FUNC_7(VAR_0);
 FUNC_0(VAR_2)->prepared = 0;
 FUNC_3(VAR_2);
 return VAR_4;
}
