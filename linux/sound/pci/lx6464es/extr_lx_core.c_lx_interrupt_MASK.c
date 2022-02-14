
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct lx6464es {int irqsrc; TYPE_1__* card; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct lx6464es*,int*,int*,int*) ;

irqreturn_t FUNC_2(int VAR_8, void *VAR_9)
{
 struct lx6464es *VAR_10 = VAR_9;
 int VAR_11, VAR_12;
 u32 VAR_13;
 bool VAR_14 = 0;

 FUNC_0(VAR_10->card->dev,
  "**************************************************\n");

 if (!FUNC_1(VAR_10, &VAR_13, &VAR_11, &VAR_12)) {
  FUNC_0(VAR_10->card->dev, "IRQ_NONE\n");
  return VAR_1;
 }

 if (VAR_13 & VAR_3)
  return VAR_0;

 if (VAR_13 & VAR_4)
  FUNC_0(VAR_10->card->dev, "interrupt: EOBI\n");

 if (VAR_13 & VAR_5)
  FUNC_0(VAR_10->card->dev, "interrupt: EOBO\n");

 if (VAR_13 & VAR_7)
  FUNC_0(VAR_10->card->dev, "interrupt: URUN\n");

 if (VAR_13 & VAR_6)
  FUNC_0(VAR_10->card->dev, "interrupt: ORUN\n");

 if (VAR_11) {
  VAR_14 = 1;
  VAR_10->irqsrc = VAR_13;
 }

 if (VAR_12) {






  FUNC_0(VAR_10->card->dev, "interrupt requests escmd handling\n");
 }

 return VAR_14 ? VAR_2 : VAR_0;
}
