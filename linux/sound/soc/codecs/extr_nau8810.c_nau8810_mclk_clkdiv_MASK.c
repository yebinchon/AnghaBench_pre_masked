
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nau8810 {int sysclk; int regmap; int dev; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,char*,int,int) ;
 int FUNC_2 (int ,char*) ;
 int* VAR_6 ;
 int FUNC_3 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct nau8810 *VAR_7, int VAR_8)
{
 int VAR_9, VAR_10, VAR_11 = VAR_8 * 256, VAR_12 = 0;

 if (!VAR_7->sysclk) {
  FUNC_2(VAR_7->dev, "Make mclk div configuration fail because of invalid system clock\n");
  return -VAR_0;
 }





 for (VAR_9 = 1; VAR_9 < FUNC_0(VAR_6); VAR_9++) {
  VAR_10 = (VAR_7->sysclk * 10) /
   VAR_6[VAR_9];
  if (VAR_10 < VAR_11)
   break;
  VAR_12 = VAR_9;
 }
 FUNC_1(VAR_7->dev,
  "master clock prescaler %x for fs %d\n", VAR_12, VAR_8);


 FUNC_3(VAR_7->regmap, VAR_5,
  VAR_3, (VAR_12 << VAR_4));
 FUNC_3(VAR_7->regmap, VAR_5,
  VAR_1, VAR_2);

 return 0;
}
