
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_cs46xx {struct snd_ac97** ac97; int * eapd_switch; } ;
struct snd_ac97 {struct snd_cs46xx* private_data; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(struct snd_ac97 *VAR_2)
{
 struct snd_cs46xx *VAR_3 = VAR_2->private_data;

 if (FUNC_0(VAR_2 != VAR_3->ac97[VAR_0] &&
         VAR_2 != VAR_3->ac97[VAR_1]))
  return;

 if (VAR_2 == VAR_3->ac97[VAR_0]) {
  VAR_3->ac97[VAR_0] = ((void*)0);
  VAR_3->eapd_switch = ((void*)0);
 }
 else
  VAR_3->ac97[VAR_1] = ((void*)0);
}
