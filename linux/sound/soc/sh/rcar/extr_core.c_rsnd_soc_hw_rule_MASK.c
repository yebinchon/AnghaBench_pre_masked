
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_interval {void* max; void* min; } ;
struct rsnd_dai {int dummy; } ;


 void* VAR_0 ;
 void* FUNC_0 (void*,unsigned int) ;
 void* FUNC_1 (void*,unsigned int) ;
 unsigned int FUNC_2 (struct rsnd_dai*,void*,unsigned int,int *) ;
 int FUNC_3 (struct snd_interval*) ;
 int FUNC_4 (struct snd_interval*,struct snd_interval*) ;
 int FUNC_5 (struct snd_interval*,unsigned int) ;

__attribute__((used)) static int FUNC_6(struct rsnd_dai *VAR_1,
       unsigned int *VAR_2, int VAR_3,
       struct snd_interval *VAR_4, struct snd_interval *VAR_5)
{
 struct snd_interval VAR_6;
 unsigned int VAR_7;
 int VAR_8;

 FUNC_3(&VAR_6);
 VAR_6.min = VAR_0;
 VAR_6.max = 0;

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {

  if (!FUNC_5(VAR_5, VAR_2[VAR_8]))
   continue;

  VAR_7 = FUNC_2(VAR_1,
       VAR_4->min, VAR_2[VAR_8], ((void*)0));
  if (VAR_7 > 0) {
   VAR_6.min = FUNC_1(VAR_6.min, VAR_2[VAR_8]);
   VAR_6.max = FUNC_0(VAR_6.max, VAR_2[VAR_8]);
  }

  VAR_7 = FUNC_2(VAR_1,
       VAR_4->max, VAR_2[VAR_8], ((void*)0));
  if (VAR_7 > 0) {
   VAR_6.min = FUNC_1(VAR_6.min, VAR_2[VAR_8]);
   VAR_6.max = FUNC_0(VAR_6.max, VAR_2[VAR_8]);
  }
 }

 return FUNC_4(VAR_5, &VAR_6);
}
