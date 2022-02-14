
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xtfpga_i2s {int regmap; int tx_fifo_low; int tx_fifo_level; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (int ,int ,unsigned int*) ;
 int FUNC_1 (int ,int ,int,int) ;
 int FUNC_2 (int ,int ,unsigned int) ;
 int FUNC_3 (struct xtfpga_i2s*) ;

__attribute__((used)) static void FUNC_4(struct xtfpga_i2s *VAR_8)
{
 unsigned VAR_9;
 unsigned VAR_10;

 FUNC_0(VAR_8->regmap, VAR_5,
      &VAR_9);

 for (VAR_10 = 0; VAR_10 < 2; ++VAR_10) {
  bool VAR_11 = FUNC_3(VAR_8);

  FUNC_2(VAR_8->regmap, VAR_5,
        VAR_7);
  if (VAR_11)
   FUNC_0(VAR_8->regmap, VAR_5,
        &VAR_9);

  if (!VAR_11 ||
      !(VAR_9 & VAR_3))
   break;





  VAR_8->tx_fifo_level = VAR_8->tx_fifo_low;
 }

 if (!(VAR_9 & VAR_3))
  FUNC_2(VAR_8->regmap, VAR_4,
        VAR_7);
 else if (!(VAR_9 & VAR_6))
  FUNC_2(VAR_8->regmap, VAR_4,
        VAR_6);

 if (!(VAR_9 & VAR_6))
  FUNC_1(VAR_8->regmap, VAR_0,
       VAR_1 |
       VAR_2,
       VAR_1 |
       VAR_2);
 else
  FUNC_1(VAR_8->regmap, VAR_0,
       VAR_1 |
       VAR_2, 0);
}
