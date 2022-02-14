
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct nau8824 {int jack; int jdet_work; int dev; struct regmap* regmap; } ;
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
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct nau8824*) ;
 int FUNC_5 (struct nau8824*) ;
 int FUNC_6 (struct nau8824*) ;
 scalar_t__ FUNC_7 (struct regmap*,int ,int*) ;
 int FUNC_8 (struct regmap*,int ,int ,int ) ;
 int FUNC_9 (struct regmap*,int ,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_12(int VAR_14, void *VAR_15)
{
 struct nau8824 *VAR_16 = (struct nau8824 *)VAR_15;
 struct regmap *VAR_17 = VAR_16->regmap;
 int VAR_18, VAR_19 = 0, VAR_20 = 0, VAR_21 = 0;

 if (FUNC_7(VAR_17, VAR_12, &VAR_18)) {
  FUNC_2(VAR_16->dev, "failed to read irq status\n");
  return VAR_1;
 }
 FUNC_1(VAR_16->dev, "IRQ %x\n", VAR_18);

 if (VAR_18 & VAR_5) {
  FUNC_4(VAR_16);
  VAR_21 |= VAR_13;
  VAR_19 = VAR_5;



  FUNC_5(VAR_16);
  FUNC_0(&VAR_16->jdet_work);
 } else if (VAR_18 & VAR_8) {
  int VAR_22, VAR_23;

  FUNC_7(VAR_17, VAR_9,
   &VAR_22);


  VAR_23 = FUNC_3(VAR_22);

  VAR_20 |= VAR_23;
  FUNC_1(VAR_16->dev, "button %x pressed\n", VAR_20);
  VAR_21 |= VAR_2;
  VAR_19 = VAR_8;
 } else if (VAR_18 & VAR_7) {
  VAR_21 = VAR_2;
  VAR_19 = VAR_7;
 } else if (VAR_18 & VAR_6) {

  FUNC_8(VAR_17,
   VAR_10,
   VAR_3,
   VAR_3);
  FUNC_8(VAR_17,
   VAR_11,
   VAR_4, 0);

  FUNC_0(&VAR_16->jdet_work);
  FUNC_10(&VAR_16->jdet_work);




  FUNC_6(VAR_16);
 }

 if (!VAR_19)
  VAR_19 = VAR_18;

 FUNC_9(VAR_17, VAR_9, VAR_19);

 if (VAR_21)
  FUNC_11(VAR_16->jack, VAR_20, VAR_21);

 return VAR_0;
}
