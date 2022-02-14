
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_rme9652 {int running; int control_register; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_rme9652*) ;
 int FUNC_1 (struct snd_rme9652*) ;
 int FUNC_2 (struct snd_rme9652*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_rme9652 *VAR_2, int VAR_3)
{
 int VAR_4 = 0;

 if (VAR_3) {
  VAR_2->control_register |= VAR_1;
 } else {
  VAR_2->control_register &= ~VAR_1;
 }

 if ((VAR_4 = VAR_2->running)) {
  FUNC_1(VAR_2);
 }

 FUNC_2(VAR_2, VAR_0, VAR_2->control_register);

 if (VAR_4) {
  FUNC_0(VAR_2);
 }

 return 0;
}
