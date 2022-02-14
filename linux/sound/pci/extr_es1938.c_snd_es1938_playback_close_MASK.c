
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int number; } ;
struct es1938 {int * playback2_substream; int * playback1_substream; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 struct es1938* FUNC_1 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_1)
{
 struct es1938 *VAR_2 = FUNC_1(VAR_1);

 switch (VAR_1->number) {
 case 0:
  VAR_2->playback1_substream = ((void*)0);
  break;
 case 1:
  VAR_2->playback2_substream = ((void*)0);
  break;
 default:
  FUNC_0();
  return -VAR_0;
 }
 return 0;
}
