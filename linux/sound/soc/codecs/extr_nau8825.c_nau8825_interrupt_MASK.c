
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct nau8825 {int button_pressed; int xtalk_protect; scalar_t__ xtalk_state; int xtalk_event; int xtalk_event_mask; int jack; int xtalk_work; scalar_t__ xtalk_enable; int dev; int high_imped; struct regmap* regmap; } ;
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
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct nau8825*) ;
 scalar_t__ FUNC_4 (struct regmap*) ;
 int FUNC_5 (struct nau8825*) ;
 int FUNC_6 (struct nau8825*,int ) ;
 int FUNC_7 (struct nau8825*) ;
 int FUNC_8 (struct nau8825*) ;
 scalar_t__ FUNC_9 (struct regmap*,int ,int*) ;
 int FUNC_10 (struct regmap*,int ,int ,int ) ;
 int FUNC_11 (struct regmap*,int ,int) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_14(int VAR_20, void *VAR_21)
{
 struct nau8825 *VAR_22 = (struct nau8825 *)VAR_21;
 struct regmap *VAR_23 = VAR_22->regmap;
 int VAR_24, VAR_25 = 0, VAR_26 = 0, VAR_27 = 0;

 if (FUNC_9(VAR_23, VAR_16, &VAR_24)) {
  FUNC_0(VAR_22->dev, "failed to read irq status\n");
  return VAR_1;
 }

 if ((VAR_24 & VAR_8) ==
  VAR_7) {

  FUNC_3(VAR_22);
  VAR_27 |= VAR_19;
  VAR_25 = VAR_8;
 } else if (VAR_24 & VAR_12) {
  int VAR_28;

  FUNC_9(VAR_23, VAR_15,
   &VAR_28);




  VAR_22->button_pressed = FUNC_2(
   VAR_28 >> 8);

  VAR_26 |= VAR_22->button_pressed;
  VAR_27 |= VAR_2;
  VAR_25 = VAR_12;
 } else if (VAR_24 & VAR_11) {
  VAR_27 = VAR_2;
  VAR_25 = VAR_11;
 } else if (VAR_24 & VAR_3) {
  if (FUNC_4(VAR_23)) {
   VAR_26 |= FUNC_5(VAR_22);
   if (VAR_22->xtalk_enable && !VAR_22->high_imped) {



    if (!VAR_22->xtalk_protect) {






     int VAR_29;
     VAR_22->xtalk_protect = 1;
     VAR_29 = FUNC_6(VAR_22, 0);
     if (VAR_29)
      VAR_22->xtalk_protect = 0;
    }

    if (VAR_22->xtalk_protect) {
     VAR_22->xtalk_state =
      VAR_18;
     FUNC_12(&VAR_22->xtalk_work);
    }
   } else {




    if (VAR_22->xtalk_protect) {
     FUNC_7(VAR_22);
     VAR_22->xtalk_protect = 0;
    }
   }
  } else {
   FUNC_1(VAR_22->dev, "Headset completion IRQ fired but no headset connected\n");
   FUNC_3(VAR_22);
  }

  VAR_27 |= VAR_19;
  VAR_25 = VAR_3;




  if (VAR_22->xtalk_state == VAR_18) {
   VAR_22->xtalk_event = VAR_26;
   VAR_22->xtalk_event_mask = VAR_27;
  }
 } else if (VAR_24 & VAR_4) {

  if (VAR_22->xtalk_enable && VAR_22->xtalk_protect)
   FUNC_12(&VAR_22->xtalk_work);
  VAR_25 = VAR_4;
 } else if ((VAR_24 & VAR_10) ==
  VAR_9) {





  if (FUNC_4(VAR_23)) {

   FUNC_10(VAR_23,
    VAR_13,
    VAR_5,
    VAR_5);
   FUNC_10(VAR_23, VAR_14,
    VAR_6, VAR_6);



   FUNC_8(VAR_22);
  }
 }

 if (!VAR_25)
  VAR_25 = VAR_24;

 FUNC_11(VAR_23, VAR_15, VAR_25);






 if (VAR_27 && VAR_22->xtalk_state == VAR_17)
  FUNC_13(VAR_22->jack, VAR_26, VAR_27);

 return VAR_0;
}
