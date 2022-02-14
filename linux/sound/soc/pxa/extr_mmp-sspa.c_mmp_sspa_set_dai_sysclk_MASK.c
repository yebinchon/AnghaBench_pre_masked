
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sspa_priv {int audio_clk; } ;
struct snd_soc_dai {int dummy; } ;


 int VAR_0 ;



 int FUNC_0 (int ,unsigned int) ;
 struct sspa_priv* FUNC_1 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_1,
        int VAR_2, unsigned int VAR_3, int VAR_4)
{
 struct sspa_priv *VAR_5 = FUNC_1(VAR_1);
 int VAR_6 = 0;

 switch (VAR_2) {
 case 130:
  VAR_6 = FUNC_0(VAR_5->audio_clk, VAR_3);
  if (VAR_6)
   return VAR_6;
  break;
 case 129:
 case 128:

  return -VAR_0;
 default:
  return -VAR_0;
 }

 return 0;
}
