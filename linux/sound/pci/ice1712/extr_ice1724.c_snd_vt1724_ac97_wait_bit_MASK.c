
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_ice1712 {TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct snd_ice1712*,int ) ;
 int FUNC_1 (int ,char*) ;
 unsigned char FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_ice1712 *VAR_2, unsigned char VAR_3)
{
 int VAR_4;
 for (VAR_4 = 0; VAR_4 < 0x10000; VAR_4++)
  if ((FUNC_2(FUNC_0(VAR_2, VAR_0)) & VAR_3) == 0)
   return 0;
 FUNC_1(VAR_2->card->dev, "snd_vt1724_ac97_wait_bit: timeout\n");
 return -VAR_1;
}
