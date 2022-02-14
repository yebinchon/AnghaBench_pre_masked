
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_ali {TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 unsigned long VAR_1 ;
 unsigned long FUNC_1 (int) ;
 int FUNC_2 (int) ;
 unsigned int FUNC_3 (struct snd_ali*,unsigned int) ;
 int FUNC_4 (struct snd_ali*,unsigned int,unsigned int) ;
 int FUNC_5 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct snd_ali *VAR_2,
          unsigned int VAR_3)
{
 unsigned long VAR_4;
 unsigned int VAR_5;

 VAR_4 = VAR_1 + FUNC_1(250);

 for (;;) {
  VAR_5 = FUNC_3(VAR_2,VAR_3);
  if (!(VAR_5 & 0x8000))
   return 0;
  if (!FUNC_5(VAR_4, VAR_1))
   break;
  FUNC_2(1);
 }

 FUNC_4(VAR_2, VAR_3, VAR_5 & ~0x8000);
 FUNC_0(VAR_2->card->dev, "ali_codec_ready: codec is not ready.\n ");
 return -VAR_0;
}
