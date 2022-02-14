
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_ice1712 {TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_ice1712*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct snd_ice1712 *VAR_2)
{
 int VAR_3 = 0x10000;
 while ((FUNC_2(FUNC_0(VAR_2, VAR_0)) & VAR_1) && VAR_3--)
  ;
 if (VAR_3 == -1)
  FUNC_1(VAR_2->card->dev, "i2c busy timeout\n");
}
