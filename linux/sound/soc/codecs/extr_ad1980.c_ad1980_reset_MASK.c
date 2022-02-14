
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct snd_ac97 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct snd_ac97*,int,int ,int ) ;
 struct snd_ac97* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_component *VAR_4, int VAR_5)
{
 struct snd_ac97 *VAR_6 = FUNC_2(VAR_4);
 unsigned int VAR_7 = 0;
 int VAR_8;

 do {
  VAR_8 = FUNC_1(VAR_6, 1, VAR_1,
   VAR_2);
  if (VAR_8 >= 0)
   return 0;







  FUNC_3(VAR_4, VAR_0, 0x9900);

 } while (VAR_7++ < 10);

 FUNC_0(VAR_4->dev, "Failed to reset: AC97 link error\n");

 return -VAR_3;
}
