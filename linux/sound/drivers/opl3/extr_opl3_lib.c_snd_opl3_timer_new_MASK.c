
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_opl3 {int * timer1; int card; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct snd_opl3*,int) ;
 int FUNC_2 (struct snd_opl3*,int) ;

int FUNC_3(struct snd_opl3 * VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3;

 if (VAR_1 >= 0)
  if ((VAR_3 = FUNC_1(VAR_0, VAR_1)) < 0)
   return VAR_3;
 if (VAR_2 >= 0) {
  if ((VAR_3 = FUNC_2(VAR_0, VAR_2)) < 0) {
   FUNC_0(VAR_0->card, VAR_0->timer1);
   VAR_0->timer1 = ((void*)0);
   return VAR_3;
  }
 }
 return 0;
}
