
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_dice {scalar_t__ substreams_counter; int domain; } ;
struct reg_params {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct snd_dice*,unsigned int) ;
 int FUNC_2 (struct snd_dice*,struct reg_params*,struct reg_params*) ;
 int FUNC_3 (struct snd_dice*,struct reg_params*,struct reg_params*) ;
 int FUNC_4 (struct snd_dice*,unsigned int,int ,struct reg_params*) ;
 int FUNC_5 (struct snd_dice*) ;
 int FUNC_6 (struct snd_dice*,unsigned int*) ;

int FUNC_7(struct snd_dice *VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4;
 int VAR_5;


 VAR_5 = FUNC_6(VAR_2, &VAR_4);
 if (VAR_5 < 0)
  return VAR_5;
 if (VAR_3 == 0)
  VAR_3 = VAR_4;

 if (VAR_2->substreams_counter == 0 || VAR_4 != VAR_3) {
  struct reg_params VAR_6, VAR_7;

  FUNC_0(&VAR_2->domain);

  VAR_5 = FUNC_3(VAR_2, &VAR_6, &VAR_7);
  if (VAR_5 < 0)
   return VAR_5;
  FUNC_2(VAR_2, &VAR_6, &VAR_7);

  FUNC_5(VAR_2);




  VAR_5 = FUNC_1(VAR_2, VAR_3);
  if (VAR_5 < 0)
   return VAR_5;



  VAR_5 = FUNC_3(VAR_2, &VAR_6, &VAR_7);
  if (VAR_5 < 0)
   return VAR_5;

  VAR_5 = FUNC_4(VAR_2, VAR_3, VAR_0,
       &VAR_6);
  if (VAR_5 < 0)
   goto error;

  VAR_5 = FUNC_4(VAR_2, VAR_3, VAR_1,
       &VAR_7);
  if (VAR_5 < 0)
   goto error;
 }

 return 0;
error:
 FUNC_5(VAR_2);
 return VAR_5;
}
