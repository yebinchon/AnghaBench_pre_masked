
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_dice {int global_enabled; int domain; } ;
struct reg_params {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct snd_dice*,struct reg_params*,struct reg_params*) ;
 int FUNC_2 (struct snd_dice*,int ,struct reg_params*) ;

void FUNC_3(struct snd_dice *VAR_2)
{
 struct reg_params VAR_3, VAR_4;
 VAR_2->global_enabled = 0;

 if (FUNC_1(VAR_2, &VAR_3, &VAR_4) == 0) {
  FUNC_0(&VAR_2->domain);

  FUNC_2(VAR_2, VAR_0, &VAR_3);
  FUNC_2(VAR_2, VAR_1, &VAR_4);
 }
}
