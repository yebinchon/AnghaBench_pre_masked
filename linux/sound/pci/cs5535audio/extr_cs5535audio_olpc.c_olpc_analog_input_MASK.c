
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_ac97 {TYPE_2__* bus; } ;
struct TYPE_4__ {TYPE_1__* card; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 () ;
 int FUNC_3 (struct snd_ac97*,int ,int,int) ;

void FUNC_4(struct snd_ac97 *VAR_3, int VAR_4)
{
 int VAR_5;

 if (!FUNC_2())
  return;


 VAR_5 = FUNC_3(VAR_3, VAR_1,
   1 << VAR_0, VAR_4 << VAR_0);
 if (VAR_5 < 0) {
  FUNC_0(VAR_3->bus->card->dev,
   "setting High Pass Filter - %d\n", VAR_5);
  return;
 }


 FUNC_1(VAR_2, VAR_4);
}
