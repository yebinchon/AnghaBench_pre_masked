
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct xlnx_pcm_stream_param {scalar_t__ buffer_size; scalar_t__ mmio; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct xlnx_pcm_stream_param* private_data; } ;
typedef int snd_pcm_uframes_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct snd_pcm_runtime*,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static snd_pcm_uframes_t
FUNC_2(struct snd_pcm_substream *VAR_1)
{
 u32 VAR_2;
 struct snd_pcm_runtime *VAR_3 = VAR_1->runtime;
 struct xlnx_pcm_stream_param *VAR_4 = VAR_3->private_data;

 VAR_2 = FUNC_1(VAR_4->mmio + VAR_0);

 if (VAR_2 >= VAR_4->buffer_size)
  VAR_2 = 0;

 return FUNC_0(VAR_3, VAR_2);
}
