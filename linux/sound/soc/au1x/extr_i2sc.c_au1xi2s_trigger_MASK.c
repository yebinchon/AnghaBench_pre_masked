
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct au1xpsc_audio_data {int cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;




 int FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct au1xpsc_audio_data*,int ,int) ;
 struct au1xpsc_audio_data* FUNC_2 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_8,
      int VAR_9, struct snd_soc_dai *VAR_10)
{
 struct au1xpsc_audio_data *VAR_11 = FUNC_2(VAR_10);
 int VAR_12 = FUNC_0(VAR_8);

 switch (VAR_9) {
 case 130:
 case 131:

  FUNC_1(VAR_11, VAR_6, VAR_4 | VAR_3);
  FUNC_1(VAR_11, VAR_6, VAR_3);
  VAR_11->cfg |= (VAR_12 == VAR_7) ? VAR_1 : VAR_0;
  FUNC_1(VAR_11, VAR_5, VAR_11->cfg);
  break;
 case 129:
 case 128:
  VAR_11->cfg &= ~((VAR_12 == VAR_7) ? VAR_1 : VAR_0);
  FUNC_1(VAR_11, VAR_5, VAR_11->cfg);
  FUNC_1(VAR_11, VAR_6, VAR_4);
  break;
 default:
  return -VAR_2;
 }

 return 0;
}
