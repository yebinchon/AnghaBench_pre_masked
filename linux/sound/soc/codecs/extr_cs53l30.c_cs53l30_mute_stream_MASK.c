
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int component; } ;
struct cs53l30_private {int mute_gpio; } ;


 int FUNC_0 (int ,int) ;
 struct cs53l30_private* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_0, int VAR_1, int VAR_2)
{
 struct cs53l30_private *VAR_3 = FUNC_1(VAR_0->component);

 FUNC_0(VAR_3->mute_gpio, VAR_1);

 return 0;
}
