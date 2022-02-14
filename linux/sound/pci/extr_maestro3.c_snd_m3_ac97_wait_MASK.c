
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_m3 {TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct snd_m3*,int) ;

__attribute__((used)) static int FUNC_3(struct snd_m3 *VAR_0)
{
 int VAR_1 = 10000;

 do {
  if (! (FUNC_2(VAR_0, 0x30) & 1))
   return 0;
  FUNC_0();
 } while (VAR_1-- > 0);

 FUNC_1(VAR_0->card->dev, "ac97 serial bus busy\n");
 return 1;
}
