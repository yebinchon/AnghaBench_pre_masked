
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int stream; } ;
struct au1xpsc_audio_data {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct au1xpsc_audio_data*) ;
 int FUNC_5 (struct au1xpsc_audio_data*) ;
 int VAR_0 ;




 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 struct au1xpsc_audio_data* FUNC_8 (struct snd_soc_dai*) ;
 int FUNC_9 () ;

__attribute__((used)) static int FUNC_10(struct snd_pcm_substream *VAR_1,
    int VAR_2, struct snd_soc_dai *VAR_3)
{
 struct au1xpsc_audio_data *VAR_4 = FUNC_8(VAR_3);
 int VAR_5, VAR_6 = VAR_1->stream;

 VAR_5 = 0;

 switch (VAR_2) {
 case 130:
 case 131:
  FUNC_7(FUNC_0(VAR_6), FUNC_4(VAR_4));
  FUNC_9();
  FUNC_7(FUNC_1(VAR_6), FUNC_4(VAR_4));
  FUNC_9();
  break;
 case 129:
 case 128:
  FUNC_7(FUNC_2(VAR_6), FUNC_4(VAR_4));
  FUNC_9();

  while (FUNC_6(FUNC_5(VAR_4)) & FUNC_3(VAR_6))
   asm volatile ("nop");

  FUNC_7(FUNC_0(VAR_6), FUNC_4(VAR_4));
  FUNC_9();

  break;
 default:
  VAR_5 = -VAR_0;
 }
 return VAR_5;
}
