
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct rt5651_priv {int ovcd_irq_enabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct rt5651_priv* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct snd_soc_component *VAR_3)
{
 struct rt5651_priv *VAR_4 = FUNC_0(VAR_3);

 FUNC_1(VAR_3, VAR_0,
  VAR_2, VAR_1);
 VAR_4->ovcd_irq_enabled = 0;
}
