
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct TYPE_2__ {scalar_t__ rate_max; scalar_t__ rate_min; scalar_t__ channels_max; } ;
struct snd_pcm_runtime {TYPE_1__ hw; } ;
struct lola_stream {int opened; scalar_t__ index; int * master; struct snd_pcm_substream* substream; } ;
struct lola_pcm {scalar_t__ num_streams; } ;
struct lola {int open_mutex; int granularity; int ref_count_rate; scalar_t__ sample_rate_max; scalar_t__ sample_rate_min; scalar_t__ sample_rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct lola_pcm* FUNC_0 (struct snd_pcm_substream*) ;
 struct lola_stream* FUNC_1 (struct snd_pcm_substream*) ;
 TYPE_1__ VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct snd_pcm_runtime*,int ) ;
 int FUNC_5 (struct snd_pcm_runtime*,int ,int ,int ) ;
 struct lola* FUNC_6 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_5)
{
 struct lola *VAR_6 = FUNC_6(VAR_5);
 struct lola_pcm *VAR_7 = FUNC_0(VAR_5);
 struct lola_stream *VAR_8 = FUNC_1(VAR_5);
 struct snd_pcm_runtime *VAR_9 = VAR_5->runtime;

 FUNC_2(&VAR_6->open_mutex);
 if (VAR_8->opened) {
  FUNC_3(&VAR_6->open_mutex);
  return -VAR_0;
 }
 VAR_8->substream = VAR_5;
 VAR_8->master = ((void*)0);
 VAR_8->opened = 1;
 VAR_9->hw = VAR_4;
 VAR_9->hw.channels_max = VAR_7->num_streams - VAR_8->index;
 if (VAR_6->sample_rate) {

  VAR_9->hw.rate_min = VAR_6->sample_rate;
  VAR_9->hw.rate_max = VAR_6->sample_rate;
 } else {
  VAR_9->hw.rate_min = VAR_6->sample_rate_min;
  VAR_9->hw.rate_max = VAR_6->sample_rate_max;
 }
 VAR_6->ref_count_rate++;
 FUNC_4(VAR_9, VAR_2);

 FUNC_5(VAR_9, 0, VAR_1,
       VAR_6->granularity);
 FUNC_5(VAR_9, 0, VAR_3,
       VAR_6->granularity);
 FUNC_3(&VAR_6->open_mutex);
 return 0;
}
