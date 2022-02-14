
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;
struct device {int dummy; } ;
struct adau {void (* switch_mode ) (struct device*) ;int type; struct regmap* sigmadsp; struct regmap* regmap; struct regmap* mclk; int pll_regs; int clk_src; } ;
typedef enum adau17x1_type { ____Placeholder_adau17x1_type } adau17x1_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 scalar_t__ FUNC_2 (struct adau*) ;
 int VAR_4 ;
 int FUNC_3 (int ,int,int ) ;
 int FUNC_4 (struct regmap*) ;
 int FUNC_5 (struct regmap*) ;
 int FUNC_6 (struct device*,struct adau*) ;
 int FUNC_7 (struct device*,char*,int) ;
 struct regmap* FUNC_8 (struct device*,char*) ;
 struct adau* FUNC_9 (struct device*,int,int ) ;
 void* FUNC_10 (struct device*,struct regmap*,int *,char const*) ;

int FUNC_11(struct device *VAR_5, struct regmap *VAR_6,
 enum adau17x1_type VAR_7, void (*VAR_8)(struct device *VAR_9),
 const char *VAR_10)
{
 struct adau *VAR_11;
 int VAR_12;

 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 VAR_11 = FUNC_9(VAR_5, sizeof(*VAR_11), VAR_3);
 if (!VAR_11)
  return -VAR_2;

 VAR_11->mclk = FUNC_8(VAR_5, "mclk");
 if (FUNC_0(VAR_11->mclk)) {
  if (FUNC_1(VAR_11->mclk) != -VAR_1)
   return FUNC_1(VAR_11->mclk);

  VAR_11->mclk = ((void*)0);
 } else if (VAR_11->mclk) {
  VAR_11->clk_src = VAR_0;






  VAR_12 = FUNC_3(FUNC_4(VAR_11->mclk), 48000 * 1024,
    VAR_11->pll_regs);
  if (VAR_12 < 0)
   return VAR_12;

  VAR_12 = FUNC_5(VAR_11->mclk);
  if (VAR_12)
   return VAR_12;
 }

 VAR_11->regmap = VAR_6;
 VAR_11->switch_mode = VAR_8;
 VAR_11->type = VAR_7;

 FUNC_6(VAR_5, VAR_11);

 if (VAR_10) {
  if (FUNC_2(VAR_11)) {
   VAR_11->sigmadsp = FUNC_10(VAR_5, VAR_6,
    &VAR_4, VAR_10);
  } else {
   VAR_11->sigmadsp = FUNC_10(VAR_5, VAR_6,
    ((void*)0), VAR_10);
  }
  if (FUNC_0(VAR_11->sigmadsp)) {
   FUNC_7(VAR_5, "Could not find firmware file: %ld\n",
    FUNC_1(VAR_11->sigmadsp));
   VAR_11->sigmadsp = ((void*)0);
  }
 }

 if (VAR_8)
  VAR_8(VAR_5);

 return 0;
}
