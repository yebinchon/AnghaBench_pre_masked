
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct omap_mcbsp {int dev; int fclk; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct clk* FUNC_1 (int ,char const*) ;
 int FUNC_2 (struct clk*) ;
 int FUNC_3 (int ,struct clk*) ;
 int FUNC_4 (int ,char*,char const*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct omap_mcbsp *VAR_3, u8 VAR_4)
{
 struct clk *VAR_5;
 const char *VAR_6;
 int VAR_7;

 if (VAR_4 == VAR_1)
  VAR_6 = "pad_fck";
 else if (VAR_4 == VAR_2)
  VAR_6 = "prcm_fck";
 else
  return -VAR_0;

 VAR_5 = FUNC_1(VAR_3->dev, VAR_6);
 if (FUNC_0(VAR_5)) {
  FUNC_4(VAR_3->dev, "CLKS: could not clk_get() %s\n", VAR_6);
  return -VAR_0;
 }

 FUNC_6(VAR_3->dev);

 VAR_7 = FUNC_3(VAR_3->fclk, VAR_5);
 if (VAR_7) {
  FUNC_4(VAR_3->dev, "CLKS: could not clk_set_parent() to %s\n",
   VAR_6);
  FUNC_2(VAR_5);
  return VAR_7;
 }

 FUNC_5(VAR_3->dev);

 FUNC_2(VAR_5);

 return 0;
}
