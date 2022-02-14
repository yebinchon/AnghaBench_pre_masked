
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int stream; } ;
struct rk_i2s_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;






 int FUNC_0 (struct rk_i2s_dev*,int) ;
 int FUNC_1 (struct rk_i2s_dev*,int) ;
 struct rk_i2s_dev* FUNC_2 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_2,
    int VAR_3, struct snd_soc_dai *VAR_4)
{
 struct rk_i2s_dev *VAR_5 = FUNC_2(VAR_4);
 int VAR_6 = 0;

 switch (VAR_3) {
 case 130:
 case 131:
 case 132:
  if (VAR_2->stream == VAR_1)
   FUNC_0(VAR_5, 1);
  else
   FUNC_1(VAR_5, 1);
  break;
 case 128:
 case 129:
 case 133:
  if (VAR_2->stream == VAR_1)
   FUNC_0(VAR_5, 0);
  else
   FUNC_1(VAR_5, 0);
  break;
 default:
  VAR_6 = -VAR_0;
  break;
 }

 return VAR_6;
}
