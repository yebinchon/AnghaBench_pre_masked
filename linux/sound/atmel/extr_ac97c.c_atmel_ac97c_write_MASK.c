
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_ac97 {int dummy; } ;
struct atmel_ac97c {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct atmel_ac97c*,int ) ;
 int FUNC_1 (struct atmel_ac97c*,int ,unsigned long) ;
 int FUNC_2 (int *,char*) ;
 struct atmel_ac97c* FUNC_3 (struct snd_ac97*) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct snd_ac97 *VAR_3, unsigned short VAR_4,
  unsigned short VAR_5)
{
 struct atmel_ac97c *VAR_6 = FUNC_3(VAR_3);
 unsigned long VAR_7;
 int VAR_8 = 40;

 VAR_7 = (VAR_4 & 0x7f) << 16 | VAR_5;

 do {
  if (FUNC_0(VAR_6, VAR_1) & VAR_0) {
   FUNC_1(VAR_6, VAR_2, VAR_7);
   return;
  }
  FUNC_4(1);
 } while (--VAR_8);

 FUNC_2(&VAR_6->pdev->dev, "codec write timeout\n");
}
