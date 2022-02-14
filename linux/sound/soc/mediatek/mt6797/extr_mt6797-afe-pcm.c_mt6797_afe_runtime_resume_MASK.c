
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_base_afe {int regmap; } ;
struct device {int dummy; } ;


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
 struct mtk_base_afe* FUNC_0 (struct device*) ;
 int FUNC_1 (struct mtk_base_afe*) ;
 int FUNC_2 (int ,int ,int,int) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_10)
{
 struct mtk_base_afe *VAR_11 = FUNC_0(VAR_10);
 int VAR_12;

 VAR_12 = FUNC_1(VAR_11);
 if (VAR_12)
  return VAR_12;


 FUNC_3(VAR_11->regmap, VAR_2, VAR_3);


 FUNC_2(VAR_11->regmap, VAR_4,
      0x7ff << 16, 0x7ff << 16);

 FUNC_2(VAR_11->regmap, VAR_5,
      VAR_8, 0);

 FUNC_2(VAR_11->regmap, VAR_5,
      VAR_9, 0);


 FUNC_2(VAR_11->regmap, VAR_0,
      0x3fffffff, 0x3fffffff);


 FUNC_2(VAR_11->regmap, VAR_1,
      VAR_6,
      0x1 << VAR_7);

 return 0;
}
