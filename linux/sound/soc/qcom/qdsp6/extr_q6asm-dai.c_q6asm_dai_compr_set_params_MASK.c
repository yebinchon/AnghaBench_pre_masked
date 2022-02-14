
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_2__* dai_link; } ;
struct snd_soc_component {struct device* dev; } ;
struct snd_compr_stream {int direction; struct snd_soc_pcm_runtime* private_data; struct snd_compr_runtime* runtime; } ;
struct snd_compr_runtime {int fragments; int fragment_size; struct q6asm_dai_rtd* private_data; } ;
struct TYPE_3__ {int id; } ;
struct snd_compr_params {TYPE_1__ codec; } ;
struct q6asm_dai_rtd {int periods; int pcm_count; int pcm_size; int bits_per_sample; int state; int phys; int * audio_client; int session_id; int codec_param; } ;
struct q6asm_dai_data {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_4__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (int *,struct snd_compr_params*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,int *,int ,int,int) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int ,int ,int ,int) ;
 struct q6asm_dai_data* FUNC_7 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_8 (struct snd_soc_pcm_runtime*,int ) ;

__attribute__((used)) static int FUNC_9(struct snd_compr_stream *VAR_6,
          struct snd_compr_params *VAR_7)
{
 struct snd_compr_runtime *VAR_8 = VAR_6->runtime;
 struct q6asm_dai_rtd *VAR_9 = VAR_8->private_data;
 struct snd_soc_pcm_runtime *VAR_10 = VAR_6->private_data;
 struct snd_soc_component *VAR_11 = FUNC_8(VAR_10, VAR_0);
 int VAR_12 = VAR_6->direction;
 struct q6asm_dai_data *VAR_13;
 struct device *VAR_14 = VAR_11->dev;
 int VAR_15;

 FUNC_1(&VAR_9->codec_param, VAR_7, sizeof(*VAR_7));

 VAR_13 = FUNC_7(VAR_11);
 if (!VAR_13)
  return -VAR_1;

 if (!VAR_9 || !VAR_9->audio_client) {
  FUNC_0(VAR_14, "private data null or audio client freed\n");
  return -VAR_1;
 }

 VAR_9->periods = VAR_8->fragments;
 VAR_9->pcm_count = VAR_8->fragment_size;
 VAR_9->pcm_size = VAR_8->fragments * VAR_8->fragment_size;
 VAR_9->bits_per_sample = 16;
 if (VAR_12 == VAR_5) {
  VAR_15 = FUNC_5(VAR_9->audio_client, VAR_7->codec.id,
     VAR_9->bits_per_sample);

  if (VAR_15 < 0) {
   FUNC_0(VAR_14, "q6asm_open_write failed\n");
   FUNC_2(VAR_9->audio_client);
   VAR_9->audio_client = ((void*)0);
   return VAR_15;
  }
 }

 VAR_9->session_id = FUNC_3(VAR_9->audio_client);
 VAR_15 = FUNC_6(VAR_10->dai_link->id, VAR_3,
         VAR_9->session_id, VAR_12);
 if (VAR_15) {
  FUNC_0(VAR_14, "Stream reg failed ret:%d\n", VAR_15);
  return VAR_15;
 }

 VAR_15 = FUNC_4(VAR_12, VAR_9->audio_client, VAR_9->phys,
           (VAR_9->pcm_size / VAR_9->periods),
           VAR_9->periods);

 if (VAR_15 < 0) {
  FUNC_0(VAR_14, "Buffer Mapping failed ret:%d\n", VAR_15);
  return -VAR_2;
 }

 VAR_9->state = VAR_4;

 return 0;
}
