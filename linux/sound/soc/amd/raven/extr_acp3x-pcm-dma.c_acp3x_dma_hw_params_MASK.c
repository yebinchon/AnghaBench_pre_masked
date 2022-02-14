
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int addr; scalar_t__ area; } ;
struct snd_pcm_substream {int stream; TYPE_1__ dma_buffer; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int dma_area; struct i2s_stream_instance* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct i2s_stream_instance {int num_pages; int dma_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (struct i2s_stream_instance*,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_substream*,int ) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_3,
          struct snd_pcm_hw_params *VAR_4)
{
 int VAR_5;
 u64 VAR_6;
 struct snd_pcm_runtime *VAR_7 = VAR_3->runtime;
 struct i2s_stream_instance *VAR_8 = VAR_7->private_data;

 if (!VAR_8)
  return -VAR_0;

 VAR_6 = FUNC_3(VAR_4);
 VAR_5 = FUNC_4(VAR_3, VAR_6);
 if (VAR_5 < 0)
  return VAR_5;

 FUNC_2(VAR_3->runtime->dma_area, 0, FUNC_3(VAR_4));
 if (VAR_3->dma_buffer.area) {
  VAR_8->dma_addr = VAR_3->dma_buffer.addr;
  VAR_8->num_pages = (FUNC_0(VAR_6) >> VAR_2);
  FUNC_1(VAR_8, VAR_3->stream);
  VAR_5 = 0;
 } else {
  VAR_5 = -VAR_1;
 }
 return VAR_5;
}
