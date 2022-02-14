
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct nau8824 {int dev; struct regmap* regmap; } ;


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
 int FUNC_0 (int ,char*,unsigned int,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct nau8824*,int ) ;
 int FUNC_3 (struct nau8824*) ;
 int FUNC_4 (struct regmap*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct nau8824 *VAR_13,
 int VAR_14, unsigned int VAR_15)
{
 struct regmap *VAR_16 = VAR_13->regmap;

 switch (VAR_14) {
 case 133:
  FUNC_4(VAR_16, VAR_10,
   VAR_2, VAR_3);
  FUNC_4(VAR_16, VAR_12,
   VAR_5, 0);
  break;

 case 128:
  FUNC_2(VAR_13, VAR_1);
  FUNC_4(VAR_16, VAR_10,
   VAR_2, VAR_3);
  FUNC_4(VAR_16, VAR_12,
   VAR_5, 0);
  FUNC_3(VAR_13);
  break;

 case 129:
  FUNC_4(VAR_16, VAR_12,
   VAR_5, VAR_5);
  FUNC_4(VAR_16, VAR_10,
   VAR_2, VAR_4);
  break;

 case 130:
  FUNC_2(VAR_13, VAR_1);
  FUNC_4(VAR_16, VAR_11,
   VAR_8, VAR_9);
  FUNC_3(VAR_13);
  break;

 case 132:
  FUNC_2(VAR_13, VAR_1);
  FUNC_4(VAR_16, VAR_11,
   VAR_8, VAR_6);
  FUNC_3(VAR_13);
  break;

 case 131:
  FUNC_2(VAR_13, VAR_1);
  FUNC_4(VAR_16, VAR_11,
   VAR_8, VAR_7);
  FUNC_3(VAR_13);
  break;

 default:
  FUNC_1(VAR_13->dev, "Invalid clock id (%d)\n", VAR_14);
  return -VAR_0;
 }

 FUNC_0(VAR_13->dev, "Sysclk is %dHz and clock id is %d\n", VAR_15,
  VAR_14);

 return 0;
}
