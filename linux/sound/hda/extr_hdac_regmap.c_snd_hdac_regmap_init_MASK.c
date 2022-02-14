
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct hdac_device {int vendor_verbs; struct regmap* regmap; int dev; } ;


 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int VAR_0 ;
 struct regmap* FUNC_2 (int *,int *,struct hdac_device*,int *) ;
 int FUNC_3 (int *,int,int) ;

int FUNC_4(struct hdac_device *VAR_1)
{
 struct regmap *VAR_2;

 VAR_2 = FUNC_2(&VAR_1->dev, ((void*)0), VAR_1, &VAR_0);
 if (FUNC_0(VAR_2))
  return FUNC_1(VAR_2);
 VAR_1->regmap = VAR_2;
 FUNC_3(&VAR_1->vendor_verbs, sizeof(unsigned int), 8);
 return 0;
}
