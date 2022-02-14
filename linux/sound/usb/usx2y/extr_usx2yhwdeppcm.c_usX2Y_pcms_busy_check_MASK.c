
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usX2Ydev {int pcm_devs; struct snd_usX2Y_substream** subs; } ;
struct snd_usX2Y_substream {scalar_t__ pcm_substream; } ;
struct snd_card {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 struct usX2Ydev* FUNC_1 (struct snd_card*) ;

__attribute__((used)) static int FUNC_2(struct snd_card *VAR_1)
{
 struct usX2Ydev *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->pcm_devs * 2; VAR_3++) {
  struct snd_usX2Y_substream *VAR_4 = VAR_2->subs[VAR_3];
  if (VAR_4 && VAR_4->pcm_substream &&
      FUNC_0(VAR_4->pcm_substream))
   return -VAR_0;
 }
 return 0;
}
