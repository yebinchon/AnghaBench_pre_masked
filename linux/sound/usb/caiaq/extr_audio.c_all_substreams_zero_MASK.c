
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(struct snd_pcm_substream **VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  if (VAR_1[VAR_2] != ((void*)0))
   return 0;
 return 1;
}
