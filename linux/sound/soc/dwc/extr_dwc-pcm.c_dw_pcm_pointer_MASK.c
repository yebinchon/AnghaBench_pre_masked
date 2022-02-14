
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {scalar_t__ stream; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {scalar_t__ buffer_size; struct dw_i2s_dev* private_data; } ;
struct dw_i2s_dev {int rx_ptr; int tx_ptr; } ;
typedef scalar_t__ snd_pcm_uframes_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_1(struct snd_pcm_substream *VAR_1)
{
 struct snd_pcm_runtime *VAR_2 = VAR_1->runtime;
 struct dw_i2s_dev *VAR_3 = VAR_2->private_data;
 snd_pcm_uframes_t VAR_4;

 if (VAR_1->stream == VAR_0)
  VAR_4 = FUNC_0(VAR_3->tx_ptr);
 else
  VAR_4 = FUNC_0(VAR_3->rx_ptr);

 return VAR_4 < VAR_2->buffer_size ? VAR_4 : 0;
}
