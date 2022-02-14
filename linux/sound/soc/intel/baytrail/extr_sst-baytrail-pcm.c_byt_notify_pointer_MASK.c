
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sst_byt_stream {int dummy; } ;
struct sst_byt_priv_data {struct sst_byt* byt; } ;
struct sst_byt_pcm_data {int hw_ptr; int stream; struct snd_pcm_substream* substream; } ;
struct sst_byt {int dummy; } ;
struct snd_soc_pcm_runtime {int dev; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int buffer_size; TYPE_1__* control; } ;
struct TYPE_2__ {int appl_ptr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int FUNC_1 (struct snd_pcm_runtime*,int) ;
 int FUNC_2 (struct snd_pcm_substream*) ;
 int FUNC_3 (struct snd_pcm_substream*) ;
 struct sst_byt_priv_data* FUNC_4 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_5 (struct snd_soc_pcm_runtime*,int ) ;
 int FUNC_6 (struct sst_byt*,int ,int ) ;

__attribute__((used)) static u32 FUNC_7(struct sst_byt_stream *VAR_1, void *VAR_2)
{
 struct sst_byt_pcm_data *VAR_3 = VAR_2;
 struct snd_pcm_substream *VAR_4 = VAR_3->substream;
 struct snd_pcm_runtime *VAR_5 = VAR_4->runtime;
 struct snd_soc_pcm_runtime *VAR_6 = VAR_4->private_data;
 struct snd_soc_component *VAR_7 = FUNC_5(VAR_6, VAR_0);
 struct sst_byt_priv_data *VAR_8 = FUNC_4(VAR_7);
 struct sst_byt *VAR_9 = VAR_8->byt;
 u32 VAR_10, VAR_11;

 VAR_11 = FUNC_6(VAR_9, VAR_3->stream,
       FUNC_2(VAR_4));
 VAR_3->hw_ptr = VAR_11;
 VAR_10 = FUNC_1(VAR_5,
         (VAR_5->control->appl_ptr %
          VAR_5->buffer_size));

 FUNC_0(VAR_6->dev, "PCM: App/DMA pointer %u/%u bytes\n", VAR_10, VAR_11);

 FUNC_3(VAR_4);
 return VAR_10;
}
