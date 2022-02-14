
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_card {char* id; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (struct snd_card*,char const*,char const*) ;

void FUNC_3(struct snd_card *VAR_1, const char *VAR_2)
{

 if (VAR_1->id[0] != '\0')
  return;
 FUNC_0(&VAR_0);
 FUNC_2(VAR_1, VAR_2, VAR_2);
 FUNC_1(&VAR_0);
}
