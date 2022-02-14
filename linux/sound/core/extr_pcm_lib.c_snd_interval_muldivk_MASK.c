
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_interval {int openmin; int openmax; scalar_t__ integer; void* max; void* min; scalar_t__ empty; } ;


 void* FUNC_0 (void*,void*,unsigned int,unsigned int*) ;
 int FUNC_1 (struct snd_interval*) ;

void FUNC_2(const struct snd_interval *VAR_0, const struct snd_interval *VAR_1,
        unsigned int VAR_2, struct snd_interval *VAR_3)
{
 unsigned int VAR_4;
 if (VAR_0->empty || VAR_1->empty) {
  FUNC_1(VAR_3);
  return;
 }
 VAR_3->empty = 0;
 VAR_3->min = FUNC_0(VAR_0->min, VAR_1->min, VAR_2, &VAR_4);
 VAR_3->openmin = (VAR_4 || VAR_0->openmin || VAR_1->openmin);
 VAR_3->max = FUNC_0(VAR_0->max, VAR_1->max, VAR_2, &VAR_4);
 if (VAR_4) {
  VAR_3->max++;
  VAR_3->openmax = 1;
 } else
  VAR_3->openmax = (VAR_0->openmax || VAR_1->openmax);
 VAR_3->integer = 0;
}
