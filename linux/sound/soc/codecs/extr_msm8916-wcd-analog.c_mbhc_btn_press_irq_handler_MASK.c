
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_component {int dev; } ;
struct pm8916_wcd_analog_priv {int jack; int detect_accessory_type; struct snd_soc_component* component; } ;
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
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct snd_soc_component*,int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_9, void *VAR_10)
{
 struct pm8916_wcd_analog_priv *VAR_11 = VAR_10;
 struct snd_soc_component *VAR_12 = VAR_11->component;
 u32 VAR_13;

 VAR_13 = FUNC_1(VAR_12, VAR_0) &
      VAR_1;

 switch (VAR_13) {
 case 0xf:
  FUNC_2(VAR_11->jack, VAR_7, VAR_8);
  break;
 case 0x7:
  FUNC_2(VAR_11->jack, VAR_6, VAR_8);
  break;
 case 0x3:
  FUNC_2(VAR_11->jack, VAR_5, VAR_8);
  break;
 case 0x1:
  FUNC_2(VAR_11->jack, VAR_4, VAR_8);
  break;
 case 0x0:

  if (!VAR_11->detect_accessory_type)
   FUNC_2(VAR_11->jack,
         VAR_3, VAR_8);
  break;
 default:
  FUNC_0(VAR_12->dev,
   "Unexpected button press result (%x)", VAR_13);
  break;
 }

 return VAR_2;
}
