
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ts3a227e {int regmap; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,int*) ;
 int FUNC_1 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct ts3a227e *VAR_3,
    struct device *VAR_4)
{
 u32 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_4, "ti,micbias", &VAR_5);
 if (!VAR_6) {
  FUNC_1(VAR_3->regmap, VAR_2,
   VAR_0,
   (VAR_5 & 0x07) << VAR_1);
 }

 return 0;
}
