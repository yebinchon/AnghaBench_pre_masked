
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct evea_priv {scalar_t__ switch_hp; struct regmap* regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct regmap*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct evea_priv *VAR_7)
{
 struct regmap *VAR_8 = VAR_7->regmap;

 if (VAR_7->switch_hp) {
  FUNC_1(VAR_8, FUNC_0(1), VAR_4, 0);

  FUNC_1(VAR_8, VAR_5, VAR_6,
       VAR_6);

  FUNC_1(VAR_8, VAR_0, VAR_1,
       VAR_2);
 } else {
  FUNC_1(VAR_8, VAR_0, VAR_1,
       VAR_3);

  FUNC_1(VAR_8, FUNC_0(1), VAR_4,
       VAR_4);

  FUNC_1(VAR_8, VAR_5, VAR_6, 0);
 }

 return 0;
}
