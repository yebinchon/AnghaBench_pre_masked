
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_base_afe {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int FUNC_1 (int) ;
 int VAR_10 ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (int ,int ,int,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct mtk_base_afe *VAR_11, unsigned int VAR_12)
{
 unsigned int VAR_13;
 int VAR_14 = FUNC_2(VAR_12);

 if (VAR_14 < 0)
  return -VAR_10;


 FUNC_3(VAR_11->regmap, VAR_1, 0x1, 0x1);
 FUNC_3(VAR_11->regmap, VAR_0, 0x1, 0x1);


 VAR_13 = VAR_9 |
       FUNC_1(VAR_14) |
       VAR_8;

 FUNC_3(VAR_11->regmap, VAR_6, ~VAR_7, VAR_13);


 VAR_13 = VAR_5 |
       FUNC_0(VAR_14) |
       VAR_4;

 FUNC_3(VAR_11->regmap, VAR_2, ~VAR_3, VAR_13);
 return 0;
}
