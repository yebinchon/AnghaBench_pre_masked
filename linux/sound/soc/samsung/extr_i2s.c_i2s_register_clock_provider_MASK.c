
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct samsung_i2s_variant_regs {int cdclkcon_off; int rclksrc_off; } ;
struct TYPE_4__ {int clk_num; int * clks; } ;
struct samsung_i2s_priv {int quirks; TYPE_2__ clk_data; int * clk_table; int lock; scalar_t__ addr; struct samsung_i2s_variant_regs* variant_regs; TYPE_1__* pdev; } ;
struct device {int of_node; } ;
struct clk {int dummy; } ;
struct TYPE_3__ {struct device dev; } ;


 int FUNC_0 (char const**) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ FUNC_1 (struct clk*) ;
 int VAR_10 ;
 int VAR_11 ;
 char* FUNC_2 (struct clk*) ;
 struct clk* FUNC_3 (struct device*,char const*) ;
 int FUNC_4 (struct clk*) ;
 int FUNC_5 (struct device*,char const*,char const*,int,scalar_t__,int,int,int ,int *) ;
 int FUNC_6 (struct device*,char const*,char const*,int,scalar_t__,int ,int ,int *) ;
 int FUNC_7 (struct device*,char const*,char const**,int,int,scalar_t__,int ,int,int ,int *) ;
 int FUNC_8 (struct device*,char*,int) ;
 int FUNC_9 (struct device*) ;
 char* FUNC_10 (struct device*,int ,char*,int ,char const* const) ;
 int FUNC_11 (struct samsung_i2s_priv*) ;
 int FUNC_12 (int ,int ,TYPE_2__*) ;
 int VAR_12 ;
 int FUNC_13 (int ,char*,int *) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_16(struct samsung_i2s_priv *VAR_13)
{

 const char * const VAR_14[] = { "cdclk", "rclk_src", "prescaler" };
 const char *VAR_15[2] = { "i2s_opclk0", "i2s_opclk1" };
 const char *VAR_16[2] = { ((void*)0) };
 struct device *VAR_17 = &VAR_13->pdev->dev;
 const struct samsung_i2s_variant_regs *VAR_18 = VAR_13->variant_regs;
 const char *VAR_19[FUNC_0(VAR_14)];
 struct clk *VAR_20;
 int VAR_21, VAR_22;


 if (!FUNC_13(VAR_17->of_node, "#clock-cells", ((void*)0)))
  return 0;


 for (VAR_22 = 0; VAR_22 < FUNC_0(VAR_16); VAR_22++) {
  VAR_20 = FUNC_3(VAR_17, VAR_15[VAR_22]);
  if (FUNC_1(VAR_20))
   continue;
  VAR_16[VAR_22] = FUNC_2(VAR_20);
  FUNC_4(VAR_20);
 }

 for (VAR_22 = 0; VAR_22 < FUNC_0(VAR_14); VAR_22++) {
  VAR_19[VAR_22] = FUNC_10(VAR_17, VAR_7, "%s_%s",
      FUNC_9(VAR_17), VAR_14[VAR_22]);
  if (!VAR_19[VAR_22])
   return -VAR_6;
 }

 if (!(VAR_13->quirks & VAR_11)) {

  u32 VAR_23 = FUNC_14(VAR_13->addr + VAR_9);
  FUNC_15(VAR_23 | VAR_10, VAR_13->addr + VAR_9);

  VAR_13->clk_table[VAR_3] = FUNC_7(VAR_17,
    VAR_19[VAR_3], VAR_16,
    FUNC_0(VAR_16),
    VAR_4 | VAR_5,
    VAR_13->addr + VAR_8, VAR_18->rclksrc_off,
    1, 0, &VAR_13->lock);

  VAR_13->clk_table[VAR_2] = FUNC_5(VAR_17,
    VAR_19[VAR_2],
    VAR_19[VAR_3],
    VAR_5,
    VAR_13->addr + VAR_9, 8, 6, 0, &VAR_13->lock);

  VAR_16[0] = VAR_19[VAR_2];
  VAR_13->clk_data.clk_num = 2;
 }

 VAR_13->clk_table[VAR_1] = FUNC_6(VAR_17,
    VAR_19[VAR_1], VAR_16[0],
    VAR_5,
    VAR_13->addr + VAR_8, VAR_18->cdclkcon_off,
    VAR_0, &VAR_13->lock);

 VAR_13->clk_data.clk_num += 1;
 VAR_13->clk_data.clks = VAR_13->clk_table;

 VAR_21 = FUNC_12(VAR_17->of_node, VAR_12,
      &VAR_13->clk_data);
 if (VAR_21 < 0) {
  FUNC_8(VAR_17, "failed to add clock provider: %d\n", VAR_21);
  FUNC_11(VAR_13);
 }

 return VAR_21;
}
