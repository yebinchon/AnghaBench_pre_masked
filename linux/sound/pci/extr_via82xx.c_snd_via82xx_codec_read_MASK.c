
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct via82xx {TYPE_1__* card; } ;
struct snd_ac97 {unsigned int num; struct via82xx* private_data; } ;
struct TYPE_2__ {int dev; } ;


 unsigned short VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_0 (int ,char*,int,unsigned int) ;
 scalar_t__ FUNC_1 (struct via82xx*,int) ;
 unsigned int FUNC_2 (struct via82xx*) ;
 int FUNC_3 (struct via82xx*,unsigned int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static unsigned short FUNC_5(struct snd_ac97 *VAR_5, unsigned short VAR_6)
{
 struct via82xx *VAR_7 = VAR_5->private_data;
 unsigned int VAR_8, VAR_9 = 0xffff;
 int VAR_10 = 0;

 VAR_8 = VAR_5->num << VAR_1;
 VAR_8 |= VAR_5->num ? VAR_4 : VAR_2;
 VAR_8 |= VAR_3;
 VAR_8 |= (VAR_6 & 0x7f) << VAR_0;
       while (1) {
        if (VAR_10++ > 3) {
   FUNC_0(VAR_7->card->dev,
    "codec_read: codec %i is not valid [0x%x]\n",
       VAR_5->num, FUNC_2(VAR_7));
         return 0xffff;
  }
  FUNC_3(VAR_7, VAR_8);
  FUNC_4 (20);
  if (FUNC_1(VAR_7, VAR_5->num) >= 0) {
   FUNC_4(25);
   VAR_9 = FUNC_2(VAR_7);
   break;
  }
 }
 return VAR_9 & 0xffff;
}
