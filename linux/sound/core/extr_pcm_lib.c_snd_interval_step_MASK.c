
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_interval {unsigned int min; unsigned int max; int empty; scalar_t__ openmax; scalar_t__ openmin; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct snd_interval*) ;

__attribute__((used)) static int FUNC_1(struct snd_interval *VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3;
 int VAR_4 = 0;
 VAR_3 = VAR_1->min % VAR_2;
 if (VAR_3 != 0 || VAR_1->openmin) {
  VAR_1->min += VAR_2 - VAR_3;
  VAR_1->openmin = 0;
  VAR_4 = 1;
 }
 VAR_3 = VAR_1->max % VAR_2;
 if (VAR_3 != 0 || VAR_1->openmax) {
  VAR_1->max -= VAR_3;
  VAR_1->openmax = 0;
  VAR_4 = 1;
 }
 if (FUNC_0(VAR_1)) {
  VAR_1->empty = 1;
  return -VAR_0;
 }
 return VAR_4;
}
