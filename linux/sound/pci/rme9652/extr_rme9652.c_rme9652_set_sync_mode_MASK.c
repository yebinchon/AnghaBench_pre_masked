
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rme9652 {int control_register; int running; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_rme9652*) ;
 int FUNC_1 (struct snd_rme9652*) ;
 int FUNC_2 (struct snd_rme9652*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct snd_rme9652 *VAR_3, int VAR_4)
{
 int VAR_5 = 0;

 switch (VAR_4) {
 case 0:
  VAR_3->control_register &=
      ~(VAR_0 | VAR_2);
  break;
 case 1:
  VAR_3->control_register =
      (VAR_3->control_register & ~VAR_2) | VAR_0;
  break;
 case 2:
  VAR_3->control_register |=
      (VAR_0 | VAR_2);
  break;
 }

 if ((VAR_5 = VAR_3->running)) {
  FUNC_1(VAR_3);
 }

 FUNC_2(VAR_3, VAR_1, VAR_3->control_register);

 if (VAR_5) {
  FUNC_0(VAR_3);
 }

 return 0;
}
