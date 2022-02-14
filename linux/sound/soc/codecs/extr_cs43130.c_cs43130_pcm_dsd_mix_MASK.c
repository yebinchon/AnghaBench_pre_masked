
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct regmap*,int ,int ,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2(bool VAR_5, struct regmap *VAR_6)
{
 if (VAR_5) {
  FUNC_0(VAR_6, VAR_0,
       VAR_3,
       1 << VAR_4);
  FUNC_1(6000, 6050);
  FUNC_0(VAR_6, VAR_0,
       VAR_1,
       1 << VAR_2);
 } else {
  FUNC_0(VAR_6, VAR_0,
       VAR_1,
       0 << VAR_2);
  FUNC_1(1600, 1650);
  FUNC_0(VAR_6, VAR_0,
       VAR_3,
       0 << VAR_4);
 }

 return 0;
}
