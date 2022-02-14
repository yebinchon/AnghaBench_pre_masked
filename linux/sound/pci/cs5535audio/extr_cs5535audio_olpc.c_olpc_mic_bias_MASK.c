
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
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct snd_ac97*,int ,int,int) ;

void FUNC_3(struct snd_ac97 *VAR_2, int VAR_3)
{
 int VAR_4;

 if (!FUNC_1())
  return;

 VAR_3 = VAR_3 ? 0 : 1;
 VAR_4 = FUNC_2(VAR_2, VAR_0,
   1 << VAR_1, VAR_3 << VAR_1);
 if (VAR_4 < 0)
  FUNC_0(VAR_2->bus->card->dev, "setting MIC Bias - %d\n", VAR_4);
}
