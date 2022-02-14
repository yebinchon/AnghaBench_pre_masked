
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_ac97 {int num; struct intel8x0m* private_data; } ;
struct intel8x0m {TYPE_1__* card; int in_ac97_init; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,char*,int,unsigned short) ;
 int FUNC_1 (struct intel8x0m*,unsigned short,unsigned short) ;
 scalar_t__ FUNC_2 (struct intel8x0m*,int) ;

__attribute__((used)) static void FUNC_3(struct snd_ac97 *VAR_0,
          unsigned short VAR_1,
          unsigned short VAR_2)
{
 struct intel8x0m *VAR_3 = VAR_0->private_data;

 if (FUNC_2(VAR_3, VAR_0->num) < 0) {
  if (! VAR_3->in_ac97_init)
   FUNC_0(VAR_3->card->dev,
    "codec_write %d: semaphore is not ready for register 0x%x\n",
    VAR_0->num, VAR_1);
 }
 FUNC_1(VAR_3, VAR_1 + VAR_0->num * 0x80, VAR_2);
}
