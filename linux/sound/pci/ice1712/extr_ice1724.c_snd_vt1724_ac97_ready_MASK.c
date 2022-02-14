
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_ice1712 {TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_ice1712*,int ) ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 int FUNC_1 (int ,char*) ;
 unsigned char FUNC_2 (int ) ;

__attribute__((used)) static unsigned char FUNC_3(struct snd_ice1712 *VAR_4)
{
 unsigned char VAR_5;
 int VAR_6;
 for (VAR_6 = 0; VAR_6 < 0x10000; VAR_6++) {
  VAR_5 = FUNC_2(FUNC_0(VAR_4, VAR_0));
  if (VAR_5 & (VAR_3 | VAR_1))
   continue;
  if (!(VAR_5 & VAR_2))
   continue;
  return VAR_5;
 }
 FUNC_1(VAR_4->card->dev, "snd_vt1724_ac97_ready: timeout\n");
 return VAR_5;
}
