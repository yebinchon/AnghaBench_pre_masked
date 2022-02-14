
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xtfpga_i2s {int tx_fn; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct xtfpga_i2s* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (struct snd_pcm_hw_params*) ;
 unsigned int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_substream*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_5,
    struct snd_pcm_hw_params *VAR_6)
{
 int VAR_7;
 struct snd_pcm_runtime *VAR_8 = VAR_5->runtime;
 struct xtfpga_i2s *VAR_9 = VAR_8->private_data;
 unsigned VAR_10 = FUNC_1(VAR_6);

 switch (VAR_10) {
 case 1:
 case 2:
  break;

 default:
  return -VAR_0;

 }

 switch (FUNC_2(VAR_6)) {
 case 129:
  VAR_9->tx_fn = (VAR_10 == 1) ?
   VAR_1 :
   VAR_3;
  break;

 case 128:
  VAR_9->tx_fn = (VAR_10 == 1) ?
   VAR_2 :
   VAR_4;
  break;

 default:
  return -VAR_0;
 }

 VAR_7 = FUNC_3(VAR_5,
           FUNC_0(VAR_6));
 return VAR_7;
}
