
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ice1712 {unsigned int akm_codecs; struct snd_akm4xxx* akm; } ;
struct snd_akm4xxx {int dummy; } ;


 int FUNC_0 (struct snd_akm4xxx*) ;

int FUNC_1(struct snd_ice1712 *VAR_0)
{
 unsigned int VAR_1;
 int VAR_2;

 for (VAR_1 = 0; VAR_1 < VAR_0->akm_codecs; VAR_1++) {
  struct snd_akm4xxx *VAR_3 = &VAR_0->akm[VAR_1];
  VAR_2 = FUNC_0(VAR_3);
  if (VAR_2 < 0)
   return VAR_2;
 }
 return 0;
}
