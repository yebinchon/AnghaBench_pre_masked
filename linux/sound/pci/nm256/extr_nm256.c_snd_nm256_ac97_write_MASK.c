
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct snd_ac97 {struct nm256* private_data; } ;
struct nm256 {unsigned short* ac97_regs; TYPE_1__* card; scalar_t__ mixer_base; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned short) ;
 scalar_t__ FUNC_3 (struct nm256*) ;
 int FUNC_4 (struct nm256*,scalar_t__,unsigned short) ;

__attribute__((used)) static void
FUNC_5(struct snd_ac97 *VAR_0,
       unsigned short VAR_1, unsigned short VAR_2)
{
 struct nm256 *VAR_3 = VAR_0->private_data;
 int VAR_4 = 2;
 int VAR_5 = FUNC_2(VAR_1);
 u32 VAR_6;

 if (VAR_5 < 0)
  return;

 VAR_6 = VAR_3->mixer_base;

 FUNC_3(VAR_3);


 while (VAR_4-- > 0) {
  FUNC_4(VAR_3, VAR_6 + VAR_1, VAR_2);
  FUNC_1(1);
  if (FUNC_3(VAR_3)) {

   VAR_3->ac97_regs[VAR_5] = VAR_2;
   return;
  }
 }
 FUNC_0(VAR_3->card->dev, "nm256: ac97 codec not ready..\n");
}
