
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct TYPE_2__ {int (* close ) (struct hda_pcm_stream*,int ,struct snd_pcm_substream*) ;} ;
struct hda_pcm_stream {TYPE_1__ ops; } ;
struct azx_pcm {int info; int codec; struct azx* chip; } ;
struct azx_dev {int dummy; } ;
struct azx {int open_mutex; } ;


 int FUNC_0 (struct azx_dev*) ;
 struct azx_dev* FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct azx_pcm* FUNC_6 (struct snd_pcm_substream*) ;
 int FUNC_7 (struct hda_pcm_stream*,int ,struct snd_pcm_substream*) ;
 struct hda_pcm_stream* FUNC_8 (struct snd_pcm_substream*) ;
 int FUNC_9 (struct azx*,struct azx_dev*) ;

__attribute__((used)) static int FUNC_10(struct snd_pcm_substream *VAR_0)
{
 struct azx_pcm *VAR_1 = FUNC_6(VAR_0);
 struct hda_pcm_stream *VAR_2 = FUNC_8(VAR_0);
 struct azx *VAR_3 = VAR_1->chip;
 struct azx_dev *VAR_4 = FUNC_1(VAR_0);

 FUNC_9(VAR_3, VAR_4);
 FUNC_2(&VAR_3->open_mutex);
 FUNC_0(VAR_4);
 if (VAR_2->ops.close)
  VAR_2->ops.close(VAR_2, VAR_1->codec, VAR_0);
 FUNC_5(VAR_1->codec);
 FUNC_3(&VAR_3->open_mutex);
 FUNC_4(VAR_1->info);
 return 0;
}
