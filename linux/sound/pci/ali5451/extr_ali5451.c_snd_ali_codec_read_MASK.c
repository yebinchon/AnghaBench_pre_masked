
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_ali {TYPE_1__* card; } ;
struct snd_ac97 {int num; struct snd_ali* private_data; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,char*,unsigned short) ;
 unsigned short FUNC_1 (struct snd_ali*,int ,unsigned short) ;

__attribute__((used)) static unsigned short FUNC_2(struct snd_ac97 *VAR_0,
      unsigned short VAR_1)
{
 struct snd_ali *VAR_2 = VAR_0->private_data;

 FUNC_0(VAR_2->card->dev, "codec_read reg=%xh.\n", VAR_1);
 return FUNC_1(VAR_2, VAR_0->num, VAR_1);
}
