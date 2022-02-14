
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {unsigned int ac97read; } ;
struct TYPE_4__ {TYPE_3__ regs; } ;
struct snd_ali {TYPE_1__ chregs; TYPE_2__* card; } ;
struct TYPE_5__ {int dev; } ;


 int FUNC_0 (int ,char*,unsigned short) ;
 int FUNC_1 (struct snd_ali*,unsigned int) ;
 int FUNC_2 (struct snd_ali*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_3 (struct snd_ali*,unsigned int) ;
 scalar_t__ FUNC_4 (struct snd_ali*) ;

__attribute__((used)) static unsigned short FUNC_5(struct snd_ali *VAR_0,
      int VAR_1,
      unsigned short VAR_2)
{
 unsigned int VAR_3;
 unsigned int VAR_4;

 if (VAR_2 >= 0x80) {
  FUNC_0(VAR_0->card->dev,
   "ali_codec_peek: reg(%xh) invalid.\n", VAR_2);
  return ~0;
 }

 VAR_4 = VAR_0->chregs.regs.ac97read;

 if (FUNC_3(VAR_0, VAR_4) < 0)
  return ~0;
 if (FUNC_4(VAR_0) < 0)
  return ~0;

 VAR_3 = (unsigned int) (VAR_2 & 0xff);
 VAR_3 |= 0x8000;
 if (VAR_1)
  VAR_3 |= 0x0080;

 FUNC_2(VAR_0, VAR_4, VAR_3);

 if (FUNC_4(VAR_0) < 0)
  return ~0;
 if (FUNC_3(VAR_0, VAR_4) < 0)
  return ~0;

 return (FUNC_1(VAR_0, VAR_4) & 0xffff0000) >> 16;
}
