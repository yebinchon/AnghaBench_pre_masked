
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned int ac97write; } ;
struct TYPE_6__ {TYPE_2__ regs; } ;
struct snd_ali {scalar_t__ revision; TYPE_3__ chregs; TYPE_1__* card; } ;
struct TYPE_4__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,unsigned short) ;
 int FUNC_1 (struct snd_ali*,unsigned int,unsigned int) ;
 scalar_t__ FUNC_2 (struct snd_ali*,unsigned int) ;
 scalar_t__ FUNC_3 (struct snd_ali*) ;

__attribute__((used)) static void FUNC_4(struct snd_ali *VAR_1,int VAR_2,
          unsigned short VAR_3,
          unsigned short VAR_4)
{
 unsigned int VAR_5;
 unsigned int VAR_6;

 if (VAR_3 >= 0x80) {
  FUNC_0(VAR_1->card->dev,
   "ali_codec_poke: reg(%xh) invalid.\n", VAR_3);
  return;
 }

 VAR_6 = VAR_1->chregs.regs.ac97write;

 if (FUNC_2(VAR_1, VAR_6) < 0)
  return;
 if (FUNC_3(VAR_1) < 0)
  return;

 VAR_5 = (unsigned int) (VAR_3 & 0xff);
 VAR_5 |= 0x8000 | (VAR_4 << 16);
 if (VAR_2)
  VAR_5 |= 0x0080;
 if (VAR_1->revision == VAR_0)
  VAR_5 |= 0x0100;

 FUNC_1(VAR_1, VAR_6, VAR_5);

 return ;
}
