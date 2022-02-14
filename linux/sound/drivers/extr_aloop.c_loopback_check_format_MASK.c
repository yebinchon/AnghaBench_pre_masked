
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcm_runtime {scalar_t__ format; scalar_t__ rate; scalar_t__ channels; } ;
struct snd_card {int dummy; } ;
struct loopback_setup {scalar_t__ format; scalar_t__ rate; scalar_t__ channels; int channels_id; int rate_id; int format_id; } ;
struct loopback_cable {scalar_t__ valid; TYPE_3__** streams; } ;
struct TYPE_6__ {TYPE_1__* loopback; TYPE_2__* substream; } ;
struct TYPE_5__ {struct snd_pcm_runtime* runtime; } ;
struct TYPE_4__ {struct snd_card* card; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 struct loopback_setup* FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct snd_card*,int ,int *) ;
 int FUNC_2 (TYPE_2__*,int ) ;

__attribute__((used)) static int FUNC_3(struct loopback_cable *VAR_6, int VAR_7)
{
 struct snd_pcm_runtime *VAR_8, *VAR_9;
 struct loopback_setup *VAR_10;
 struct snd_card *VAR_11;
 int VAR_12;

 if (VAR_6->valid != VAR_0) {
  if (VAR_7 == VAR_5)
   goto __notify;
  return 0;
 }
 VAR_8 = VAR_6->streams[VAR_5]->
       substream->runtime;
 VAR_9 = VAR_6->streams[VAR_4]->
       substream->runtime;
 VAR_12 = VAR_8->format != VAR_9->format ||
  VAR_8->rate != VAR_9->rate ||
  VAR_8->channels != VAR_9->channels;
 if (!VAR_12)
  return 0;
 if (VAR_7 == VAR_4) {
  return -VAR_1;
 } else {
  FUNC_2(VAR_6->streams[VAR_4]->
     substream, VAR_3);
       __notify:
  VAR_8 = VAR_6->streams[VAR_5]->
       substream->runtime;
  VAR_10 = FUNC_0(VAR_6->streams[VAR_5]);
  VAR_11 = VAR_6->streams[VAR_5]->loopback->card;
  if (VAR_10->format != VAR_8->format) {
   FUNC_1(VAR_11, VAR_2,
       &VAR_10->format_id);
   VAR_10->format = VAR_8->format;
  }
  if (VAR_10->rate != VAR_8->rate) {
   FUNC_1(VAR_11, VAR_2,
       &VAR_10->rate_id);
   VAR_10->rate = VAR_8->rate;
  }
  if (VAR_10->channels != VAR_8->channels) {
   FUNC_1(VAR_11, VAR_2,
       &VAR_10->channels_id);
   VAR_10->channels = VAR_8->channels;
  }
 }
 return 0;
}
