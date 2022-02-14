
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_base_afe {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,int ,unsigned int*) ;
 int FUNC_1 (int ,int ,int,int) ;

__attribute__((used)) static void FUNC_2(struct mtk_base_afe *VAR_3, bool VAR_4)
{
 unsigned int VAR_5;

 FUNC_0(VAR_3->regmap, VAR_1, &VAR_5);
 if (!!(VAR_5 & VAR_2) == VAR_4)
  return;


 FUNC_1(VAR_3->regmap, VAR_1, 0x1, VAR_4);


 FUNC_1(VAR_3->regmap, VAR_0, 0x1, VAR_4);
}
