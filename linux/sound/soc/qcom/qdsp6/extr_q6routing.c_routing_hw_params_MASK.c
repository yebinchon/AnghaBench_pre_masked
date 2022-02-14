
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {TYPE_1__* cpu_dai; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct session_data {int path_type; int bits_per_sample; int channels; int sample_rate; } ;
struct msm_routing_data {int lock; struct session_data* port_data; } ;
struct TYPE_2__ {unsigned int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 scalar_t__ VAR_5 ;
 struct msm_routing_data* FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 int FUNC_5 (struct snd_pcm_hw_params*) ;
 struct snd_soc_component* FUNC_6 (struct snd_soc_pcm_runtime*,int ) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_6,
         struct snd_pcm_hw_params *VAR_7)
{
 struct snd_soc_pcm_runtime *VAR_8 = VAR_6->private_data;
 struct snd_soc_component *VAR_9 = FUNC_6(VAR_8, VAR_3);
 struct msm_routing_data *VAR_10 = FUNC_0(VAR_9->dev);
 unsigned int VAR_11 = VAR_8->cpu_dai->id;
 struct session_data *VAR_12;
 int VAR_13;

 if (VAR_6->stream == VAR_5)
  VAR_13 = VAR_1;
 else
  VAR_13 = VAR_0;

 if (VAR_11 >= VAR_2)
  return -VAR_4;

 VAR_12 = &VAR_10->port_data[VAR_11];

 FUNC_1(&VAR_10->lock);

 VAR_12->path_type = VAR_13;
 VAR_12->sample_rate = FUNC_5(VAR_7);
 VAR_12->channels = FUNC_3(VAR_7);

 switch (FUNC_4(VAR_7)) {
 case 129:
   VAR_12->bits_per_sample = 16;
  break;
 case 128:
   VAR_12->bits_per_sample = 24;
  break;
 default:
  break;
 }

 FUNC_2(&VAR_10->lock);
 return 0;
}
