
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct pm8916_wcd_analog_priv {int micbias_mv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 struct pm8916_wcd_analog_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static void FUNC_4(struct snd_soc_component *VAR_7)
{
 struct pm8916_wcd_analog_priv *VAR_8 = FUNC_2(VAR_7);

 FUNC_3(VAR_7, VAR_0,
       VAR_3 |
       VAR_5,
       VAR_4
       | VAR_2);

 if (VAR_8->micbias_mv) {
  FUNC_3(VAR_7, VAR_1,
        VAR_6,
        FUNC_0(VAR_8->micbias_mv));




  if (VAR_8->micbias_mv >= 2700)
   FUNC_1(50);
 }

 FUNC_3(VAR_7, VAR_0,
       VAR_3 |
       VAR_5, 0);

}
