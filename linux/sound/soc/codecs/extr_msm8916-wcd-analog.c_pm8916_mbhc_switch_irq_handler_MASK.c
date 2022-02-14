
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct pm8916_wcd_analog_priv {int mbhc_btn0_released; int detect_accessory_type; int jack; struct snd_soc_component* component; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct pm8916_wcd_analog_priv*,int) ;
 int FUNC_1 (struct snd_soc_component*,int ) ;
 int FUNC_2 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_9, void *VAR_10)
{
 struct pm8916_wcd_analog_priv *VAR_11 = VAR_10;
 struct snd_soc_component *VAR_12 = VAR_11->component;
 bool VAR_13 = 0;

 if (FUNC_1(VAR_12, VAR_0) &
    VAR_1)
  VAR_13 = 1;


 FUNC_2(VAR_12, VAR_0,
       VAR_1,
       (!VAR_13 << VAR_2));


 if (VAR_13) {
  bool VAR_14 = 0;

  if (FUNC_1(VAR_12, VAR_3) &
    VAR_4)
   VAR_14 = 1;

  FUNC_0(VAR_11, VAR_14);







  if (VAR_11->mbhc_btn0_released)
   FUNC_3(VAR_11->jack,
         VAR_7, VAR_8);
  else
   FUNC_3(VAR_11->jack,
         VAR_6, VAR_8);

  VAR_11->detect_accessory_type = 0;

 } else {
  FUNC_3(VAR_11->jack, 0, VAR_8);
  VAR_11->detect_accessory_type = 1;
  VAR_11->mbhc_btn0_released = 0;
 }

 return VAR_5;
}
