
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_interval {scalar_t__ min; scalar_t__ max; int openmin; int openmax; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct snd_interval*) ;
 int FUNC_1 (struct snd_interval*,struct snd_interval const*) ;
 scalar_t__ FUNC_2 (struct snd_interval*) ;
 int FUNC_3 (struct snd_interval*) ;
 int FUNC_4 (struct snd_interval*,struct snd_interval*) ;

int FUNC_5(struct snd_interval *VAR_2, unsigned int VAR_3,
   const struct snd_interval *VAR_4, unsigned int VAR_5)
{
 unsigned int VAR_6;
 struct snd_interval VAR_7;
 struct snd_interval VAR_8;

 if (!VAR_3) {
  FUNC_3(VAR_2);
  return -VAR_0;
 }
 FUNC_0(&VAR_7);
 VAR_7.min = VAR_1;
 VAR_7.max = 0;
 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  if (VAR_5 && !(VAR_5 & (1 << VAR_6)))
   continue;
  FUNC_1(&VAR_8, &VAR_4[VAR_6]);
  if (FUNC_4(&VAR_8, VAR_2) < 0)
   continue;
  if (FUNC_2(&VAR_8))
   continue;

  if (VAR_8.min < VAR_7.min) {
   VAR_7.min = VAR_8.min;
   VAR_7.openmin = 1;
  }
  if (VAR_8.min == VAR_7.min && !VAR_8.openmin)
   VAR_7.openmin = 0;
  if (VAR_8.max > VAR_7.max) {
   VAR_7.max = VAR_8.max;
   VAR_7.openmax = 1;
  }
  if (VAR_8.max == VAR_7.max && !VAR_8.openmax)
   VAR_7.openmax = 0;
 }
 return FUNC_4(VAR_2, &VAR_7);
}
