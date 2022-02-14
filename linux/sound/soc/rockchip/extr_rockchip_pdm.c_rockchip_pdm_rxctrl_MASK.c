
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk_pdm_dev {int regmap; } ;


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
 int FUNC_0 (int ,int ,int,int) ;

__attribute__((used)) static void FUNC_1(struct rk_pdm_dev *VAR_10, int VAR_11)
{
 if (VAR_11) {
  FUNC_0(VAR_10->regmap, VAR_0,
       VAR_3, VAR_2);
  FUNC_0(VAR_10->regmap, VAR_9,
       VAR_6, VAR_7);
 } else {
  FUNC_0(VAR_10->regmap, VAR_0,
       VAR_3, VAR_1);
  FUNC_0(VAR_10->regmap, VAR_9,
       VAR_6 | VAR_4,
       VAR_8 | VAR_5);
 }
}
