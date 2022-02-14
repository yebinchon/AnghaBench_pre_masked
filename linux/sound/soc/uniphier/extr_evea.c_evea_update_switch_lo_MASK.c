
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct evea_priv {scalar_t__ switch_lo; struct regmap* regmap; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct regmap*,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct evea_priv *VAR_6)
{
 struct regmap *VAR_7 = VAR_6->regmap;

 if (VAR_6->switch_lo) {
  FUNC_1(VAR_7, FUNC_0(0), VAR_0, 0);
  FUNC_1(VAR_7, FUNC_0(2), VAR_0, 0);

  FUNC_1(VAR_7, VAR_1, VAR_2,
       VAR_2);
  FUNC_1(VAR_7, VAR_3,
       VAR_4 | VAR_5,
       VAR_4 | VAR_5);
 } else {
  FUNC_1(VAR_7, FUNC_0(0), VAR_0,
       VAR_0);
  FUNC_1(VAR_7, FUNC_0(2), VAR_0,
       VAR_0);

  FUNC_1(VAR_7, VAR_1, VAR_2, 0);
  FUNC_1(VAR_7, VAR_3,
       VAR_4 | VAR_5,
       0);
 }

 return 0;
}
