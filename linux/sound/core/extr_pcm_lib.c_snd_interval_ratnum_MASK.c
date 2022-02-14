
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ratnum {unsigned int num; unsigned int den_min; unsigned int den_max; unsigned int den_step; } ;
struct snd_interval {unsigned int min; int empty; int openmin; unsigned int max; int openmax; scalar_t__ integer; } ;


 int VAR_0 ;
 void* FUNC_0 (unsigned int,unsigned int) ;
 void* FUNC_1 (unsigned int,unsigned int) ;
 int FUNC_2 (struct snd_interval*,struct snd_interval*) ;
 scalar_t__ FUNC_3 (struct snd_interval*) ;

int FUNC_4(struct snd_interval *VAR_1,
   unsigned int VAR_2, const struct snd_ratnum *VAR_3,
   unsigned int *VAR_4, unsigned int *VAR_5)
{
 unsigned int VAR_6, VAR_7;
 int VAR_8;
 unsigned int VAR_9;
 struct snd_interval VAR_10;
 int VAR_11;
 unsigned int VAR_12, VAR_13;
 int VAR_14;

 VAR_6 = VAR_7 = VAR_8 = 0;
 for (VAR_9 = 0; VAR_9 < VAR_2; ++VAR_9) {
  unsigned int VAR_15 = VAR_3[VAR_9].num;
  unsigned int VAR_16;
  unsigned int VAR_17 = VAR_1->min;
  int VAR_18;
  if (VAR_17 == 0)
   VAR_17 = 1;
  VAR_16 = FUNC_1(VAR_15, VAR_17);
  if (VAR_16 < VAR_3[VAR_9].den_min)
   continue;
  if (VAR_16 > VAR_3[VAR_9].den_max)
   VAR_16 = VAR_3[VAR_9].den_max;
  else {
   unsigned int VAR_19;
   VAR_19 = (VAR_16 - VAR_3[VAR_9].den_min) % VAR_3[VAR_9].den_step;
   if (VAR_19 != 0)
    VAR_16 -= VAR_19;
  }
  VAR_18 = VAR_15 - VAR_17 * VAR_16;
  if (VAR_18 < 0)
   VAR_18 = -VAR_18;
  if (VAR_6 == 0 ||
      VAR_18 * VAR_7 < VAR_8 * VAR_16) {
   VAR_8 = VAR_18;
   VAR_7 = VAR_16;
   VAR_6 = VAR_15;
  }
 }
 if (VAR_7 == 0) {
  VAR_1->empty = 1;
  return -VAR_0;
 }
 VAR_10.min = FUNC_0(VAR_6, VAR_7);
 VAR_10.openmin = !!(VAR_6 % VAR_7);

 VAR_12 = VAR_6;
 VAR_14 = VAR_8;
 VAR_13 = VAR_7;
 VAR_6 = VAR_7 = VAR_8 = 0;
 for (VAR_9 = 0; VAR_9 < VAR_2; ++VAR_9) {
  unsigned int VAR_20 = VAR_3[VAR_9].num;
  unsigned int VAR_21;
  unsigned int VAR_22 = VAR_1->max;
  int VAR_23;
  if (VAR_22 == 0) {
   VAR_1->empty = 1;
   return -VAR_0;
  }
  VAR_21 = FUNC_0(VAR_20, VAR_22);
  if (VAR_21 > VAR_3[VAR_9].den_max)
   continue;
  if (VAR_21 < VAR_3[VAR_9].den_min)
   VAR_21 = VAR_3[VAR_9].den_min;
  else {
   unsigned int VAR_24;
   VAR_24 = (VAR_21 - VAR_3[VAR_9].den_min) % VAR_3[VAR_9].den_step;
   if (VAR_24 != 0)
    VAR_21 += VAR_3[VAR_9].den_step - VAR_24;
  }
  VAR_23 = VAR_22 * VAR_21 - VAR_20;
  if (VAR_23 < 0)
   VAR_23 = -VAR_23;
  if (VAR_6 == 0 ||
      VAR_23 * VAR_7 < VAR_8 * VAR_21) {
   VAR_8 = VAR_23;
   VAR_7 = VAR_21;
   VAR_6 = VAR_20;
  }
 }
 if (VAR_7 == 0) {
  VAR_1->empty = 1;
  return -VAR_0;
 }
 VAR_10.max = FUNC_1(VAR_6, VAR_7);
 VAR_10.openmax = !!(VAR_6 % VAR_7);
 VAR_10.integer = 0;
 VAR_11 = FUNC_2(VAR_1, &VAR_10);
 if (VAR_11 < 0)
  return VAR_11;

 if (FUNC_3(VAR_1)) {
  if (VAR_8 * VAR_13 < VAR_14 * VAR_7) {
   VAR_12 = VAR_6;
   VAR_13 = VAR_7;
  }
  if (VAR_4)
   *VAR_4 = VAR_12;
  if (VAR_5)
   *VAR_5 = VAR_13;
 }
 return VAR_11;
}
