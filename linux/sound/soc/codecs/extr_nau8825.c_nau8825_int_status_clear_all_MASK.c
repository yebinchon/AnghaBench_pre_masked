
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct regmap*,int ,int*) ;
 int FUNC_1 (struct regmap*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct regmap *VAR_3)
{
 int VAR_4, VAR_5, VAR_6;




 FUNC_0(VAR_3, VAR_2, &VAR_4);
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_5 = (0x1 << VAR_6);
  if (VAR_4 & VAR_5)
   FUNC_1(VAR_3,
    VAR_1, VAR_5);
 }
}
