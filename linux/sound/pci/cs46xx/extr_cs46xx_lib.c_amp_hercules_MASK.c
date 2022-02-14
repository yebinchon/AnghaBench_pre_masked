
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_cs46xx {int amplifier; TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct snd_cs46xx*,int ) ;
 int FUNC_2 (struct snd_cs46xx*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct snd_cs46xx *VAR_4, int VAR_5)
{
 int VAR_6 = VAR_4->amplifier;
 int VAR_7 = FUNC_1(VAR_4, VAR_0);
 int VAR_8 = FUNC_1(VAR_4, VAR_1);

 VAR_4->amplifier += VAR_5;
 if (VAR_4->amplifier && !VAR_6) {
  FUNC_0(VAR_4->card->dev, "Hercules amplifier ON\n");

  FUNC_2(VAR_4, VAR_0,
       VAR_2 | VAR_7);
  FUNC_2(VAR_4, VAR_1,
       VAR_3 | VAR_8);
 } else if (VAR_6 && !VAR_4->amplifier) {
  FUNC_0(VAR_4->card->dev, "Hercules amplifier OFF\n");
  FUNC_2(VAR_4, VAR_0, VAR_7 & ~VAR_2);
  FUNC_2(VAR_4, VAR_1, VAR_8 & ~VAR_3);
 }
}
