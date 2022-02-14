
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_dice {scalar_t__ substreams_counter; int domain; } ;
struct reg_params {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct snd_dice*,struct reg_params*,struct reg_params*) ;
 scalar_t__ FUNC_2 (struct snd_dice*,struct reg_params*,struct reg_params*) ;
 int FUNC_3 (struct snd_dice*) ;

void FUNC_4(struct snd_dice *VAR_0)
{
 struct reg_params VAR_1, VAR_2;

 if (VAR_0->substreams_counter == 0) {
  if (FUNC_2(VAR_0, &VAR_1, &VAR_2) >= 0) {
   FUNC_0(&VAR_0->domain);
   FUNC_1(VAR_0, &VAR_1, &VAR_2);
  }

  FUNC_3(VAR_0);
 }
}
