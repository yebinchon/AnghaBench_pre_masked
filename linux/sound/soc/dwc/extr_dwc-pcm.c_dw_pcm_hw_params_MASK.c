
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct dw_i2s_dev* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct dw_i2s_dev {int dev; int rx_fn; int tx_fn; } ;


 int VAR_0 ;



 int FUNC_0 (int ,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_substream*,int ) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_5,
  struct snd_pcm_hw_params *VAR_6)
{
 struct snd_pcm_runtime *VAR_7 = VAR_5->runtime;
 struct dw_i2s_dev *VAR_8 = VAR_7->private_data;
 int VAR_9;

 switch (FUNC_2(VAR_6)) {
 case 2:
  break;
 default:
  FUNC_0(VAR_8->dev, "invalid channels number\n");
  return -VAR_0;
 }

 switch (FUNC_3(VAR_6)) {
 case 130:
  VAR_8->tx_fn = VAR_3;
  VAR_8->rx_fn = VAR_1;
  break;
 case 129:
 case 128:
  VAR_8->tx_fn = VAR_4;
  VAR_8->rx_fn = VAR_2;
  break;
 default:
  FUNC_0(VAR_8->dev, "invalid format\n");
  return -VAR_0;
 }

 VAR_9 = FUNC_4(VAR_5,
   FUNC_1(VAR_6));
 if (VAR_9 < 0)
  return VAR_9;
 else
  return 0;
}
