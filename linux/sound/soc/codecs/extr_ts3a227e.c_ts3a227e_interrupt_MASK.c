
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ts3a227e {int buttons_held; struct device* dev; struct regmap* regmap; } ;
struct regmap {int dummy; } ;
struct device {int dummy; } ;
typedef int irqreturn_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (unsigned int) ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (struct regmap*,int ,unsigned int*) ;
 int FUNC_4 (struct ts3a227e*) ;
 int FUNC_5 (struct ts3a227e*,unsigned int) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_8, void *VAR_9)
{
 struct ts3a227e *VAR_10 = (struct ts3a227e *)VAR_9;
 struct regmap *VAR_11 = VAR_10->regmap;
 unsigned int VAR_12, VAR_13, VAR_14, VAR_15;
 struct device *VAR_16 = VAR_10->dev;
 int VAR_17;


 VAR_17 = FUNC_3(VAR_11, VAR_6, &VAR_12);
 if (VAR_17) {
  FUNC_2(VAR_16, "failed to clear interrupt ret=%d\n", VAR_17);
  return VAR_3;
 }

 if (VAR_12 & (VAR_0 | VAR_1)) {
  FUNC_3(VAR_11, VAR_5, &VAR_14);
  FUNC_5(VAR_10, VAR_14);
 }


 VAR_17 = FUNC_3(VAR_11, VAR_7, &VAR_13);
 if (VAR_17) {
  FUNC_2(VAR_16, "failed to clear key interrupt ret=%d\n", VAR_17);
  return VAR_3;
 }

 for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++) {
  if (VAR_13 & FUNC_0(VAR_15))
   VAR_10->buttons_held |= (1 << VAR_15);
  if (VAR_13 & FUNC_1(VAR_15))
   VAR_10->buttons_held &= ~(1 << VAR_15);
 }

 FUNC_4(VAR_10);

 return VAR_2;
}
