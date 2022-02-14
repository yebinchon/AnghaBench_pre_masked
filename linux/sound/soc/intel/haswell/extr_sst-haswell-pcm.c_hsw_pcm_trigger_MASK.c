
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sst_hsw_stream {int dummy; } ;
struct sst_hsw {int dummy; } ;
struct snd_soc_pcm_runtime {TYPE_1__* cpu_dai; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {size_t stream; struct snd_pcm_runtime* runtime; struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_runtime {int buffer_size; TYPE_2__* control; } ;
struct hsw_priv_data {struct hsw_pcm_data** pcm; struct sst_hsw* hsw; } ;
struct hsw_pcm_data {struct sst_hsw_stream* stream; } ;
typedef int snd_pcm_uframes_t ;
struct TYPE_6__ {int dai_id; } ;
struct TYPE_5__ {int appl_ptr; } ;
struct TYPE_4__ {size_t id; } ;


 int VAR_0 ;







 TYPE_3__* VAR_1 ;
 struct hsw_priv_data* FUNC_0 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_1 (struct snd_soc_pcm_runtime*,int ) ;
 int FUNC_2 (struct sst_hsw*,struct sst_hsw_stream*,int ) ;
 int FUNC_3 (struct sst_hsw*,struct sst_hsw_stream*,int ) ;
 int FUNC_4 (struct sst_hsw*,struct sst_hsw_stream*,int) ;
 int FUNC_5 (struct sst_hsw*,struct sst_hsw_stream*,int) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_2, int VAR_3)
{
 struct snd_soc_pcm_runtime *VAR_4 = VAR_2->private_data;
 struct snd_soc_component *VAR_5 = FUNC_1(VAR_4, VAR_0);
 struct hsw_priv_data *VAR_6 = FUNC_0(VAR_5);
 struct hsw_pcm_data *VAR_7;
 struct sst_hsw_stream *VAR_8;
 struct sst_hsw *VAR_9 = VAR_6->hsw;
 struct snd_pcm_runtime *VAR_10 = VAR_2->runtime;
 snd_pcm_uframes_t VAR_11;
 int VAR_12;

 VAR_12 = VAR_1[VAR_4->cpu_dai->id].dai_id;
 VAR_7 = &VAR_6->pcm[VAR_12][VAR_2->stream];
 VAR_8 = VAR_7->stream;

 switch (VAR_3) {
 case 130:
 case 131:
 case 132:
  FUNC_5(VAR_9, VAR_8, 0);
  FUNC_3(VAR_9, VAR_7->stream, 0);
  break;
 case 129:
 case 128:
 case 133:
  FUNC_5(VAR_9, VAR_8, 0);
  FUNC_2(VAR_9, VAR_7->stream, 0);
  break;
 case 134:
  VAR_11 = VAR_10->control->appl_ptr % VAR_10->buffer_size;
  FUNC_4(VAR_9, VAR_7->stream, VAR_11);
  FUNC_5(VAR_9, VAR_8, 1);
  break;
 default:
  break;
 }

 return 0;
}
