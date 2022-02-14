
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_akm4xxx {scalar_t__ type; int num_dacs; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct snd_akm4xxx*) ;
 int FUNC_1 (struct snd_akm4xxx*) ;
 int FUNC_2 (struct snd_akm4xxx*,int) ;
 int FUNC_3 (struct snd_akm4xxx*) ;

int FUNC_4(struct snd_akm4xxx *VAR_3)
{
 int VAR_4, VAR_5;

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_4 = FUNC_0(VAR_3);
 if (VAR_4 < 0)
  return VAR_4;
 if (VAR_3->type == VAR_0 || VAR_3->type == VAR_1)
  VAR_5 = 1;
 else if (VAR_3->type == VAR_2)
  VAR_5 = 0;
 else
  VAR_5 = VAR_3->num_dacs / 2;
 VAR_4 = FUNC_2(VAR_3, VAR_5);
 if (VAR_4 < 0)
  return VAR_4;
 VAR_4 = FUNC_3(VAR_3);
 if (VAR_4 < 0)
  return VAR_4;

 return 0;
}
