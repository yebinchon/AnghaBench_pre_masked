
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct regmap*,unsigned int,int*) ;

int FUNC_1(struct regmap *VAR_1, unsigned int VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;

 FUNC_0(VAR_1, VAR_2, &VAR_5);

 VAR_5 = (VAR_5 >> VAR_3) & 0x7;

 switch (VAR_5) {
 case 0:
 case 1:
 case 2:
 case 3:
  VAR_4 = VAR_5 + 1;
  break;
 case 4:
  VAR_4 = 6;
  break;
 case 5:
  VAR_4 = 8;
  break;
 case 6:
  VAR_4 = 12;
  break;
 case 7:
  VAR_4 = 16;
  break;
 default:
  VAR_4 = -VAR_0;
  break;
 }

 return VAR_4;
}
