
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int stream; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct dw_i2s_dev* private_data; } ;
struct dw_i2s_dev {int rx_substream; int tx_substream; int rx_ptr; int tx_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;






 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_2, int VAR_3)
{
 struct snd_pcm_runtime *VAR_4 = VAR_2->runtime;
 struct dw_i2s_dev *VAR_5 = VAR_4->private_data;
 int VAR_6 = 0;

 switch (VAR_3) {
 case 130:
 case 131:
 case 132:
  if (VAR_2->stream == VAR_1) {
   FUNC_0(VAR_5->tx_ptr, 0);
   FUNC_1(VAR_5->tx_substream, VAR_2);
  } else {
   FUNC_0(VAR_5->rx_ptr, 0);
   FUNC_1(VAR_5->rx_substream, VAR_2);
  }
  break;
 case 129:
 case 128:
 case 133:
  if (VAR_2->stream == VAR_1)
   FUNC_1(VAR_5->tx_substream, ((void*)0));
  else
   FUNC_1(VAR_5->rx_substream, ((void*)0));
  break;
 default:
  VAR_6 = -VAR_0;
  break;
 }

 return VAR_6;
}
