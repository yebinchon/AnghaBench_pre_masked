
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct axg_spdifin {int pclk; } ;


 int FUNC_0 (int ) ;
 struct axg_spdifin* FUNC_1 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_0)
{
 struct axg_spdifin *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->pclk);
 return 0;
}
