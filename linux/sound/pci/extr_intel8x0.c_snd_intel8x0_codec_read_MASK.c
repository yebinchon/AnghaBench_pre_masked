
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_ac97 {int num; struct intel8x0* private_data; } ;
struct intel8x0 {unsigned int codec_ready_bits; TYPE_1__* card; int in_ac97_init; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (int ,char*,int,unsigned short) ;
 unsigned short FUNC_2 (struct intel8x0*,unsigned short) ;
 unsigned int FUNC_3 (struct intel8x0*,int ) ;
 int FUNC_4 (struct intel8x0*,int ,unsigned int) ;
 scalar_t__ FUNC_5 (struct intel8x0*,int) ;

__attribute__((used)) static unsigned short FUNC_6(struct snd_ac97 *VAR_3,
           unsigned short VAR_4)
{
 struct intel8x0 *VAR_5 = VAR_3->private_data;
 unsigned short VAR_6;
 unsigned int VAR_7;

 if (FUNC_5(VAR_5, VAR_3->num) < 0) {
  if (! VAR_5->in_ac97_init)
   FUNC_1(VAR_5->card->dev,
    "codec_read %d: semaphore is not ready for register 0x%x\n",
    VAR_3->num, VAR_4);
  VAR_6 = 0xffff;
 } else {
  VAR_6 = FUNC_2(VAR_5, VAR_4 + VAR_3->num * 0x80);
  if ((VAR_7 = FUNC_3(VAR_5, FUNC_0(VAR_0))) & VAR_2) {

   FUNC_4(VAR_5, FUNC_0(VAR_0), VAR_7 &
      ~(VAR_5->codec_ready_bits | VAR_1));
   if (! VAR_5->in_ac97_init)
    FUNC_1(VAR_5->card->dev,
     "codec_read %d: read timeout for register 0x%x\n",
     VAR_3->num, VAR_4);
   VAR_6 = 0xffff;
  }
 }
 return VAR_6;
}
