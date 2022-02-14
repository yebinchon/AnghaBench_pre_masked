
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_component {int dummy; } ;
struct pm8916_wcd_analog_priv {int mbhc_btn0_released; int jack; struct snd_soc_component* component; scalar_t__ detect_accessory_type; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_soc_component*,int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_4, void *VAR_5)
{
 struct pm8916_wcd_analog_priv *VAR_6 = VAR_5;

 if (VAR_6->detect_accessory_type) {
  struct snd_soc_component *VAR_7 = VAR_6->component;
  u32 VAR_8 = FUNC_0(VAR_7, VAR_0);


  if ((VAR_8 != -1) && !(VAR_8 & VAR_1))
   VAR_6->mbhc_btn0_released = 1;

 } else {
  FUNC_1(VAR_6->jack, 0, VAR_3);
 }

 return VAR_2;
}
