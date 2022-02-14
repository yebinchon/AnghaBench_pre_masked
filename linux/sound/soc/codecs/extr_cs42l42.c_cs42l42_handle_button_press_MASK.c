
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cs42l42_private {int btn_det_event_dbnce; int* bias_thresholds; int regmap; TYPE_1__* component; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,unsigned int*) ;
 int FUNC_2 (int ,int ,int,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static void FUNC_4(struct cs42l42_private *VAR_22)
{
 int VAR_23;
 unsigned int VAR_24;


 FUNC_2(VAR_22->regmap,
  VAR_0,
  VAR_13 |
  VAR_11 |
  VAR_15 |
  VAR_19 |
  VAR_17,
  (1 << VAR_14) |
  (1 << VAR_12) |
  (1 << VAR_16) |
  (1 << VAR_20) |
  (1 << VAR_18));

 FUNC_3(VAR_22->btn_det_event_dbnce * 1000,
       VAR_22->btn_det_event_dbnce * 2000);


 VAR_23 = 1;
 do {

  FUNC_2(VAR_22->regmap,
   VAR_10,
   VAR_8 |
   VAR_3 |
   VAR_5,
   (1 << VAR_9) |
   (0 << VAR_4) |
   (VAR_22->bias_thresholds[VAR_23] <<
   VAR_6));

  FUNC_1(VAR_22->regmap, VAR_2,
    &VAR_24);
 } while ((VAR_24 & VAR_7) &&
  (++VAR_23 < VAR_21));

 switch (VAR_23) {
 case 1:
  FUNC_0(VAR_22->component->dev, "Function C button press\n");
  break;
 case 2:
  FUNC_0(VAR_22->component->dev, "Function B button press\n");
  break;
 case 3:
  FUNC_0(VAR_22->component->dev, "Function D button press\n");
  break;
 case 4:
  FUNC_0(VAR_22->component->dev, "Function A button press\n");
  break;
 }


 FUNC_2(VAR_22->regmap,
  VAR_10,
  VAR_8 |
  VAR_3 |
  VAR_5,
  (1 << VAR_9) |
  (0 << VAR_4) |
  (VAR_22->bias_thresholds[0] << VAR_6));


 FUNC_1(VAR_22->regmap, VAR_1,
      &VAR_24);


 FUNC_2(VAR_22->regmap,
  VAR_0,
  VAR_13 |
  VAR_11 |
  VAR_15 |
  VAR_19 |
  VAR_17,
  (0 << VAR_14) |
  (0 << VAR_12) |
  (0 << VAR_16) |
  (1 << VAR_20) |
  (1 << VAR_18));
}
