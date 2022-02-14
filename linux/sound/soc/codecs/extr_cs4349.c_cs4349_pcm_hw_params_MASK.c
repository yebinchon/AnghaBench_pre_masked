
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct cs4349_private {int mode; int rate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;



 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int FUNC_2 (struct snd_pcm_hw_params*) ;
 struct cs4349_private* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_7,
       struct snd_pcm_hw_params *VAR_8,
       struct snd_soc_dai *VAR_9)
{
 struct snd_soc_component *VAR_10 = VAR_9->component;
 struct cs4349_private *VAR_11 = FUNC_3(VAR_10);
 int VAR_12, VAR_13;

 VAR_11->rate = FUNC_1(VAR_8);

 switch (VAR_11->mode) {
 case 130:
  VAR_12 = VAR_1;
  break;
 case 129:
  VAR_12 = VAR_2;
  break;
 case 128:
  switch (FUNC_2(VAR_8)) {
  case 16:
   VAR_12 = VAR_4;
   break;
  case 24:
   VAR_12 = VAR_5;
   break;
  default:
   return -VAR_6;
  }
  break;
 default:
  return -VAR_6;
 }

 VAR_13 = FUNC_4(VAR_10, VAR_0, VAR_3,
      FUNC_0(VAR_12));
 if (VAR_13 < 0)
  return VAR_13;

 return 0;
}
