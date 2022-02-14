
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct snd_ice1712 {int open_mutex; struct snd_pcm_substream** pcm_reserved; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_pcm_substream*) ;
 struct snd_ice1712* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_0)
{
 struct snd_ice1712 *VAR_1 = FUNC_3(VAR_0);
 int VAR_2;

 FUNC_0(&VAR_1->open_mutex);

 for (VAR_2 = 0; VAR_2 < 3; VAR_2++)
  if (VAR_1->pcm_reserved[VAR_2] == VAR_0)
   VAR_1->pcm_reserved[VAR_2] = ((void*)0);
 FUNC_1(&VAR_1->open_mutex);
 return FUNC_2(VAR_0);
}
