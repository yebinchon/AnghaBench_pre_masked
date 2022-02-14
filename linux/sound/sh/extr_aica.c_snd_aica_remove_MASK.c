
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_card_aica {int card; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_card_aica*) ;
 struct snd_card_aica* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1)
{
 struct snd_card_aica *VAR_2;
 VAR_2 = FUNC_1(VAR_1);
 if (FUNC_3(!VAR_2))
  return -VAR_0;
 FUNC_2(VAR_2->card);
 FUNC_0(VAR_2);
 return 0;
}
