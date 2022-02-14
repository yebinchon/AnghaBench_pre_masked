
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_interval {int empty; scalar_t__ max; int min; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,unsigned int const) ;
 int FUNC_1 (int ,unsigned int const) ;
 int FUNC_2 (struct snd_interval*) ;
 int FUNC_3 (struct snd_interval*,struct snd_interval*) ;
 int FUNC_4 (struct snd_interval*,unsigned int const) ;

int FUNC_5(struct snd_interval *VAR_2, unsigned int VAR_3,
        const unsigned int *VAR_4, unsigned int VAR_5)
{
        unsigned int VAR_6;
 struct snd_interval VAR_7;

 if (!VAR_3) {
  VAR_2->empty = 1;
  return -VAR_0;
 }
 FUNC_2(&VAR_7);
 VAR_7.min = VAR_1;
 VAR_7.max = 0;
        for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  if (VAR_5 && !(VAR_5 & (1 << VAR_6)))
   continue;
  if (!FUNC_4(VAR_2, VAR_4[VAR_6]))
   continue;
  VAR_7.min = FUNC_1(VAR_7.min, VAR_4[VAR_6]);
  VAR_7.max = FUNC_0(VAR_7.max, VAR_4[VAR_6]);
        }
 return FUNC_3(VAR_2, &VAR_7);
}
