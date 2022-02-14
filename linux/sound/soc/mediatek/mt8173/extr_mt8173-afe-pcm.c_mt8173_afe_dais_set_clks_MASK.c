
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_base_afe {int dev; } ;
struct clk {int dummy; } ;


 int FUNC_0 (struct clk*,unsigned int) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct mtk_base_afe *VAR_0,
        struct clk *VAR_1, unsigned int VAR_2,
        struct clk *VAR_3, unsigned int VAR_4)
{
 int VAR_5;

 if (VAR_1) {
  VAR_5 = FUNC_0(VAR_1, VAR_2);
  if (VAR_5) {
   FUNC_1(VAR_0->dev, "Failed to set m_ck rate\n");
   return VAR_5;
  }
 }

 if (VAR_3) {
  VAR_5 = FUNC_0(VAR_3, VAR_4);
  if (VAR_5) {
   FUNC_1(VAR_0->dev, "Failed to set b_ck rate\n");
   return VAR_5;
  }
 }
 return 0;
}
