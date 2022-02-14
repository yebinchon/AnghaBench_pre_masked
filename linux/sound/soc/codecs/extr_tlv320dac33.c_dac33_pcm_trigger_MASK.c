
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tlv320dac33_priv {int work; int state; int fifo_mode; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 int FUNC_0 (int *) ;
 struct tlv320dac33_priv* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_3, int VAR_4,
        struct snd_soc_dai *VAR_5)
{
 struct snd_soc_component *VAR_6 = VAR_5->component;
 struct tlv320dac33_priv *VAR_7 = FUNC_1(VAR_6);
 int VAR_8 = 0;

 switch (VAR_4) {
 case 130:
 case 131:
 case 132:
  if (VAR_7->fifo_mode) {
   VAR_7->state = VAR_1;
   FUNC_0(&VAR_7->work);
  }
  break;
 case 129:
 case 128:
 case 133:
  if (VAR_7->fifo_mode) {
   VAR_7->state = VAR_0;
   FUNC_0(&VAR_7->work);
  }
  break;
 default:
  VAR_8 = -VAR_2;
 }

 return VAR_8;
}
