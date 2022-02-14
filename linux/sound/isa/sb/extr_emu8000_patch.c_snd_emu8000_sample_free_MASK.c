
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_util_memhdr {int dummy; } ;
struct snd_sf_sample {int * block; } ;
struct snd_emux {int dummy; } ;


 int FUNC_0 (struct snd_util_memhdr*,int *) ;

int
FUNC_1(struct snd_emux *VAR_0, struct snd_sf_sample *VAR_1,
   struct snd_util_memhdr *VAR_2)
{
 if (VAR_1->block) {
  FUNC_0(VAR_2, VAR_1->block);
  VAR_1->block = ((void*)0);
 }
 return 0;
}
