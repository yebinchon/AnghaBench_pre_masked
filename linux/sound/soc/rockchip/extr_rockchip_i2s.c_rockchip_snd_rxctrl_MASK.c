
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rk_i2s_dev {int rx_start; int dev; int regmap; int tx_start; } ;


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
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,unsigned int*) ;
 int FUNC_2 (int ,int ,int,int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct rk_i2s_dev *VAR_11, int VAR_12)
{
 unsigned int VAR_13 = 0;
 int VAR_14 = 10;

 if (VAR_12) {
  FUNC_2(VAR_11->regmap, VAR_3,
       VAR_5, VAR_5);

  FUNC_2(VAR_11->regmap, VAR_6,
       VAR_9 | VAR_7,
       VAR_9 | VAR_7);

  VAR_11->rx_start = 1;
 } else {
  VAR_11->rx_start = 0;

  FUNC_2(VAR_11->regmap, VAR_3,
       VAR_5, VAR_4);

  if (!VAR_11->tx_start) {
   FUNC_2(VAR_11->regmap, VAR_6,
        VAR_9 |
        VAR_7,
        VAR_10 |
        VAR_8);

   FUNC_3(150);
   FUNC_2(VAR_11->regmap, VAR_0,
        VAR_2 | VAR_1,
        VAR_2 | VAR_1);

   FUNC_1(VAR_11->regmap, VAR_0, &VAR_13);


   while (VAR_13) {
    FUNC_1(VAR_11->regmap, VAR_0, &VAR_13);
    VAR_14--;
    if (!VAR_14) {
     FUNC_0(VAR_11->dev, "fail to clear\n");
     break;
    }
   }
  }
 }
}
