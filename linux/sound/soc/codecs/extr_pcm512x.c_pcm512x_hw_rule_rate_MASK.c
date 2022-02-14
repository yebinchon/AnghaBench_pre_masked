
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hw_rule {int var; struct pcm512x_priv* private; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_interval {int min; int max; } ;
struct pcm512x_priv {int dummy; } ;
typedef int ranges ;


 int FUNC_0 (struct snd_interval*) ;
 int FUNC_1 (int,int) ;
 int VAR_0 ;
 int FUNC_2 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_3 (struct snd_interval*,int ,int) ;
 int FUNC_4 (struct pcm512x_priv*) ;
 int FUNC_5 (int ,int ,struct snd_interval*,int ) ;
 int FUNC_6 (struct snd_pcm_hw_params*) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_hw_params *VAR_1,
    struct snd_pcm_hw_rule *VAR_2)
{
 struct pcm512x_priv *VAR_3 = VAR_2->private;
 struct snd_interval VAR_4[2];
 int VAR_5;

 VAR_5 = FUNC_6(VAR_1);
 if (VAR_5 < 0)
  return VAR_5;

 switch (VAR_5) {
 case 32:

  return 0;
 case 48:
 case 64:



  FUNC_3(VAR_4, 0, sizeof(VAR_4));
  VAR_4[0].min = 8000;
  VAR_4[0].max = FUNC_4(VAR_3) / VAR_5 / 2;
  VAR_4[1].min = FUNC_1(16000000, VAR_5);
  VAR_4[1].max = 384000;
  break;
 default:
  return -VAR_0;
 }

 return FUNC_5(FUNC_2(VAR_1, VAR_2->var),
       FUNC_0(VAR_4), VAR_4, 0);
}
