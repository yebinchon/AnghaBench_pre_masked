
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_efw {int dummy; } ;


 unsigned int VAR_0 ;
 struct snd_efw** VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct snd_efw *VAR_3)
{
 unsigned int VAR_4;

 FUNC_0(&VAR_2);

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_1[VAR_4] != ((void*)0))
   continue;
  VAR_1[VAR_4] = VAR_3;
  break;
 }

 FUNC_1(&VAR_2);
}
