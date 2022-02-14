
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_interval {unsigned int min; int openmin; scalar_t__ integer; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct snd_interval*) ;
 int FUNC_1 (struct snd_interval*) ;

__attribute__((used)) static int FUNC_2(struct snd_interval *VAR_1, unsigned int VAR_2, int VAR_3)
{
 int VAR_4 = 0;
 if (VAR_1->min < VAR_2) {
  VAR_1->min = VAR_2;
  VAR_1->openmin = VAR_3;
  VAR_4 = 1;
 } else if (VAR_1->min == VAR_2 && !VAR_1->openmin && VAR_3) {
  VAR_1->openmin = 1;
  VAR_4 = 1;
 }
 if (VAR_1->integer) {
  if (VAR_1->openmin) {
   VAR_1->min++;
   VAR_1->openmin = 0;
  }
 }
 if (FUNC_0(VAR_1)) {
  FUNC_1(VAR_1);
  return -VAR_0;
 }
 return VAR_4;
}
