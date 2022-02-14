
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dma_buffer; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct imx_pcm_runtime_data* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct imx_pcm_runtime_data {int poll_time_ns; scalar_t__ offset; int period; int periods; } ;


 int FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_substream*,int *) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_0,
    struct snd_pcm_hw_params *VAR_1)
{
 struct snd_pcm_runtime *VAR_2 = VAR_0->runtime;
 struct imx_pcm_runtime_data *VAR_3 = VAR_2->private_data;

 VAR_3->periods = FUNC_2(VAR_1);
 VAR_3->period = FUNC_0(VAR_1);
 VAR_3->offset = 0;
 VAR_3->poll_time_ns = 1000000000 / FUNC_3(VAR_1) *
    FUNC_1(VAR_1);
 FUNC_4(VAR_0, &VAR_0->dma_buffer);

 return 0;
}
