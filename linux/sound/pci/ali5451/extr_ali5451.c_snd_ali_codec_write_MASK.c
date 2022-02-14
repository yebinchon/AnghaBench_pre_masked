
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_ali {TYPE_1__* card; } ;
struct snd_ac97 {int num; struct snd_ali* private_data; } ;
struct TYPE_2__ {int dev; } ;


 unsigned short VAR_0 ;
 int VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 int FUNC_0 (struct snd_ali*,int ) ;
 int FUNC_1 (int ,char*,unsigned short,unsigned short) ;
 int FUNC_2 (unsigned short,int ) ;
 int FUNC_3 (struct snd_ali*,int ,unsigned short,unsigned short) ;

__attribute__((used)) static void FUNC_4(struct snd_ac97 *VAR_4,
    unsigned short VAR_5,
    unsigned short VAR_6 )
{
 struct snd_ali *VAR_7 = VAR_4->private_data;

 FUNC_1(VAR_7->card->dev, "codec_write: reg=%xh data=%xh.\n", VAR_5, VAR_6);
 if (VAR_5 == VAR_0) {
  FUNC_2((VAR_6 << VAR_2) | VAR_3,
       FUNC_0(VAR_7, VAR_1));
  return;
 }
 FUNC_3(VAR_7, VAR_4->num, VAR_5, VAR_6);
 return ;
}
