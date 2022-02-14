
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_sof_pcm {TYPE_2__* stream; } ;
struct snd_sof_dev {int dummy; } ;
struct snd_soc_pcm_runtime {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int stream; struct snd_soc_pcm_runtime* private_data; } ;
struct snd_dma_buffer {int dummy; } ;
struct TYPE_3__ {int area; } ;
struct TYPE_4__ {TYPE_1__ page_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct snd_dma_buffer* FUNC_0 (struct snd_pcm_substream*) ;
 struct snd_sof_dev* FUNC_1 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_2 (struct snd_soc_pcm_runtime*,int ) ;
 int FUNC_3 (struct snd_sof_dev*,struct snd_dma_buffer*,int ,size_t) ;
 struct snd_sof_pcm* FUNC_4 (struct snd_sof_dev*,struct snd_soc_pcm_runtime*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_2,
        unsigned char *VAR_3, size_t VAR_4)
{
 struct snd_soc_pcm_runtime *VAR_5 = VAR_2->private_data;
 struct snd_soc_component *VAR_6 =
  FUNC_2(VAR_5, VAR_0);
 struct snd_sof_dev *VAR_7 = FUNC_1(VAR_6);
 struct snd_sof_pcm *VAR_8;
 struct snd_dma_buffer *VAR_9 = FUNC_0(VAR_2);
 int VAR_10 = VAR_2->stream;

 VAR_8 = FUNC_4(VAR_7, VAR_5);
 if (!VAR_8)
  return -VAR_1;

 return FUNC_3(VAR_7, VAR_9,
  VAR_8->stream[VAR_10].page_table.area, VAR_4);
}
