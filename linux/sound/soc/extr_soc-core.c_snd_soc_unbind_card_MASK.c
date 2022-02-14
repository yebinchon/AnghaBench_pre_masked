
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_card {int instantiated; int list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_soc_card*) ;
 int FUNC_3 (struct snd_soc_card*) ;
 int FUNC_4 (struct snd_soc_card*) ;
 int FUNC_5 (struct snd_soc_card*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_6(struct snd_soc_card *VAR_1, bool VAR_2)
{
 if (VAR_1->instantiated) {
  VAR_1->instantiated = 0;
  FUNC_2(VAR_1);
  FUNC_3(VAR_1);


  FUNC_5(VAR_1);

  FUNC_4(VAR_1);
  if (!VAR_2)
   FUNC_0(&VAR_1->list, &VAR_0);
 } else {
  if (VAR_2)
   FUNC_1(&VAR_1->list);
 }
}
