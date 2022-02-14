
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcm_substream {size_t number; struct snd_pcm* pcm; struct snd_pcm_runtime* runtime; } ;
struct TYPE_5__ {scalar_t__ rate_max; scalar_t__ rate_min; } ;
struct snd_pcm_runtime {TYPE_2__ hw; struct mixart_stream* private_data; } ;
struct snd_pcm {int dummy; } ;
struct snd_mixart {struct mixart_mgr* mgr; TYPE_1__* card; int chip_idx; struct mixart_stream** playback_stream; struct snd_pcm* pcm_dig; struct snd_pcm* pcm; } ;
struct mixart_stream {scalar_t__ status; int pcm_number; scalar_t__ channels; struct snd_pcm_substream* substream; struct mixart_pipe* pipe; } ;
struct mixart_pipe {int dummy; } ;
struct mixart_mgr {int setup_mutex; scalar_t__ sample_rate; int ref_count_rate; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*,int ,int,size_t) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct mixart_mgr*,struct mixart_pipe*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int) ;
 struct mixart_pipe* FUNC_6 (struct snd_mixart*,int,int ,int ) ;
 TYPE_2__ VAR_8 ;
 TYPE_2__ VAR_9 ;
 int FUNC_7 (struct mixart_mgr*,struct mixart_pipe*,int ) ;
 int FUNC_8 (struct snd_pcm_runtime*,int ,int ,int) ;
 struct snd_mixart* FUNC_9 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_10(struct snd_pcm_substream *VAR_10)
{
 struct snd_mixart *VAR_11 = FUNC_9(VAR_10);
 struct mixart_mgr *VAR_12 = VAR_11->mgr;
 struct snd_pcm_runtime *VAR_13 = VAR_10->runtime;
 struct snd_pcm *VAR_14 = VAR_10->pcm;
 struct mixart_stream *VAR_15;
 struct mixart_pipe *VAR_16;
 int VAR_17 = 0;
 int VAR_18;

 FUNC_3(&VAR_12->setup_mutex);

 if ( VAR_14 == VAR_11->pcm ) {
  VAR_18 = VAR_2;
  VAR_13->hw = VAR_8;
 } else {
  FUNC_5(VAR_14 != VAR_11->pcm_dig);
  VAR_18 = VAR_3;
  VAR_13->hw = VAR_9;
 }
 FUNC_0(VAR_11->card->dev,
  "snd_mixart_playback_open C%d/P%d/Sub%d\n",
  VAR_11->chip_idx, VAR_18, VAR_10->number);


 VAR_15 = &(VAR_11->playback_stream[VAR_18][VAR_10->number]);

 if (VAR_15->status != VAR_4){

  FUNC_1(VAR_11->card->dev,
   "snd_mixart_playback_open C%d/P%d/Sub%d in use\n",
   VAR_11->chip_idx, VAR_18, VAR_10->number);
  VAR_17 = -VAR_0;
  goto _exit_open;
 }


 VAR_16 = FUNC_6(VAR_11, VAR_18, 0, 0);

 if (VAR_16 == ((void*)0)) {
  VAR_17 = -VAR_1;
  goto _exit_open;
 }


 VAR_17 = FUNC_2(VAR_11->mgr, VAR_16, 1);
 if( VAR_17 < 0 ) {
  FUNC_1(VAR_11->card->dev, "error starting pipe!\n");
  FUNC_7(VAR_11->mgr, VAR_16, 0);
  VAR_17 = -VAR_1;
  goto _exit_open;
 }

 VAR_15->pipe = VAR_16;
 VAR_15->pcm_number = VAR_18;
 VAR_15->status = VAR_5;
 VAR_15->substream = VAR_10;
 VAR_15->channels = 0;

 VAR_13->private_data = VAR_15;

 FUNC_8(VAR_13, 0, VAR_7, 32);
 FUNC_8(VAR_13, 0, VAR_6, 64);


 if(VAR_12->ref_count_rate++) {
  if(VAR_12->sample_rate) {
   VAR_13->hw.rate_min = VAR_13->hw.rate_max = VAR_12->sample_rate;
  }
 }

 _exit_open:
 FUNC_4(&VAR_12->setup_mutex);

 return VAR_17;
}
