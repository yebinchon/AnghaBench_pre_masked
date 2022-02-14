
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sun4i_i2s {void* field_fmt_sr; TYPE_1__* variant; int regmap; void* field_fmt_wss; void* field_clkdiv_mclk_en; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int field_fmt_sr; int field_fmt_wss; int field_clkdiv_mclk_en; } ;


 scalar_t__ FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 void* FUNC_2 (struct device*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0,
     struct sun4i_i2s *VAR_1)
{
 VAR_1->field_clkdiv_mclk_en =
  FUNC_2(VAR_0, VAR_1->regmap,
     VAR_1->variant->field_clkdiv_mclk_en);
 if (FUNC_0(VAR_1->field_clkdiv_mclk_en))
  return FUNC_1(VAR_1->field_clkdiv_mclk_en);

 VAR_1->field_fmt_wss =
   FUNC_2(VAR_0, VAR_1->regmap,
      VAR_1->variant->field_fmt_wss);
 if (FUNC_0(VAR_1->field_fmt_wss))
  return FUNC_1(VAR_1->field_fmt_wss);

 VAR_1->field_fmt_sr =
   FUNC_2(VAR_0, VAR_1->regmap,
      VAR_1->variant->field_fmt_sr);
 if (FUNC_0(VAR_1->field_fmt_sr))
  return FUNC_1(VAR_1->field_fmt_sr);

 return 0;
}
