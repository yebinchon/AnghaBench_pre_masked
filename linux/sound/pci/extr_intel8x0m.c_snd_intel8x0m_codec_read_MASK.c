
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_ac97 {int num; struct intel8x0m* private_data; } ;
struct intel8x0m {TYPE_1__* card; int in_ac97_init; } ;
struct TYPE_2__ {int dev; } ;


 unsigned short VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_1 (int ,char*,int,unsigned short) ;
 unsigned short FUNC_2 (struct intel8x0m*,unsigned short) ;
 unsigned int FUNC_3 (struct intel8x0m*,int ) ;
 int FUNC_4 (struct intel8x0m*,int ,unsigned int) ;
 scalar_t__ FUNC_5 (struct intel8x0m*,int) ;

__attribute__((used)) static unsigned short FUNC_6(struct snd_ac97 *VAR_7,
            unsigned short VAR_8)
{
 struct intel8x0m *VAR_9 = VAR_7->private_data;
 unsigned short VAR_10;
 unsigned int VAR_11;

 if (FUNC_5(VAR_9, VAR_7->num) < 0) {
  if (! VAR_9->in_ac97_init)
   FUNC_1(VAR_9->card->dev,
    "codec_read %d: semaphore is not ready for register 0x%x\n",
    VAR_7->num, VAR_8);
  VAR_10 = 0xffff;
 } else {
  VAR_10 = FUNC_2(VAR_9, VAR_8 + VAR_7->num * 0x80);
  if ((VAR_11 = FUNC_3(VAR_9, FUNC_0(VAR_1))) & VAR_4) {

   FUNC_4(VAR_9, FUNC_0(VAR_1),
      VAR_11 & ~(VAR_5|VAR_3|VAR_6|VAR_2));
   if (! VAR_9->in_ac97_init)
    FUNC_1(VAR_9->card->dev,
     "codec_read %d: read timeout for register 0x%x\n",
     VAR_7->num, VAR_8);
   VAR_10 = 0xffff;
  }
 }
 if (VAR_8 == VAR_0)
  FUNC_2(VAR_9, 0);
 return VAR_10;
}
