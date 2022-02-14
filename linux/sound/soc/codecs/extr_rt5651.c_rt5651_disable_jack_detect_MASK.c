
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct rt5651_priv {int * hp_jack; int irq; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct rt5651_priv*) ;
 int FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*) ;
 scalar_t__ FUNC_4 (struct rt5651_priv*) ;
 struct rt5651_priv* FUNC_5 (struct snd_soc_component*) ;
 int FUNC_6 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct snd_soc_component *VAR_1)
{
 struct rt5651_priv *VAR_2 = FUNC_5(VAR_1);

 FUNC_0(VAR_2->irq);
 FUNC_1(VAR_2);

 if (FUNC_4(VAR_2)) {
  FUNC_3(VAR_1);
  FUNC_2(VAR_1);
  FUNC_6(VAR_2->hp_jack, 0, VAR_0);
 }

 VAR_2->hp_jack = ((void*)0);
}
