
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct rt5640_priv {scalar_t__ jd_inverted; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 struct rt5640_priv* FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ) ;

__attribute__((used)) static bool FUNC_3(struct snd_soc_component *VAR_2)
{
 struct rt5640_priv *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;

 VAR_4 = FUNC_2(VAR_2, VAR_0);
 FUNC_0(VAR_2->dev, "irq status %#04x\n", VAR_4);

 if (VAR_3->jd_inverted)
  return !(VAR_4 & VAR_1);
 else
  return (VAR_4 & VAR_1);
}
