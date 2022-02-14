
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_cs46xx {int amplifier; TYPE_1__* eapd_switch; int card; } ;
struct TYPE_2__ {int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_cs46xx*,int ,int ) ;
 int FUNC_1 (struct snd_cs46xx*,int ,int,int ) ;
 int FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (struct snd_cs46xx*) ;

__attribute__((used)) static void FUNC_4(struct snd_cs46xx *VAR_3, int VAR_4)
{






 int VAR_5, VAR_6;

 VAR_3->amplifier += VAR_4;
 VAR_5 = FUNC_0(VAR_3, VAR_0,
         VAR_1);
 VAR_6 = VAR_5;
 if (VAR_3->amplifier) {

  VAR_6 |= 0x8000;
 } else {

  VAR_6 &= ~0x8000;
 }
 if (VAR_6 != VAR_5) {
  FUNC_1(VAR_3, VAR_0, VAR_6,
           VAR_1);
  if (VAR_3->eapd_switch)
   FUNC_2(VAR_3->card, VAR_2,
           &VAR_3->eapd_switch->id);
 }






}
