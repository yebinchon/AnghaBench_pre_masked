
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xtfpga_i2s {int tx_substream; int tx_ptr; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct xtfpga_i2s* private_data; } ;


 int VAR_0 ;






 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,struct snd_pcm_substream*) ;
 int FUNC_2 (struct xtfpga_i2s*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_1, int VAR_2)
{
 int VAR_3 = 0;
 struct snd_pcm_runtime *VAR_4 = VAR_1->runtime;
 struct xtfpga_i2s *VAR_5 = VAR_4->private_data;

 switch (VAR_2) {
 case 130:
 case 131:
 case 132:
  FUNC_0(VAR_5->tx_ptr, 0);
  FUNC_1(VAR_5->tx_substream, VAR_1);
  FUNC_2(VAR_5);
  break;

 case 129:
 case 128:
 case 133:
  FUNC_1(VAR_5->tx_substream, ((void*)0));
  break;

 default:
  VAR_3 = -VAR_0;
  break;
 }
 return VAR_3;
}
