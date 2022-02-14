
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int number; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int hw; } ;
struct es1938 {struct snd_pcm_substream* playback2_substream; int capture_substream; struct snd_pcm_substream* playback1_substream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int VAR_5 ;
 int FUNC_1 (struct snd_pcm_runtime*,int ,int ,int) ;
 int FUNC_2 (struct snd_pcm_runtime*,int ,int ,int *) ;
 struct es1938* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_6)
{
 struct es1938 *VAR_7 = FUNC_3(VAR_6);
 struct snd_pcm_runtime *VAR_8 = VAR_6->runtime;

 switch (VAR_6->number) {
 case 0:
  VAR_7->playback1_substream = VAR_6;
  break;
 case 1:
  if (VAR_7->capture_substream)
   return -VAR_0;
  VAR_7->playback2_substream = VAR_6;
  break;
 default:
  FUNC_0();
  return -VAR_1;
 }
 VAR_8->hw = VAR_5;
 FUNC_2(VAR_8, 0, VAR_3,
          &VAR_4);
 FUNC_1(VAR_8, VAR_2, 0, 0xff00);
 return 0;
}
