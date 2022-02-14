
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct pm8916_wcd_analog_priv {int supplies; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct pm8916_wcd_analog_priv* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct snd_soc_component*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct snd_soc_component *VAR_2)
{
 struct pm8916_wcd_analog_priv *VAR_3 = FUNC_1(VAR_2->dev);

 FUNC_3(VAR_2, VAR_0,
       VAR_1, 0);

 FUNC_2(FUNC_0(VAR_3->supplies),
          VAR_3->supplies);
}
