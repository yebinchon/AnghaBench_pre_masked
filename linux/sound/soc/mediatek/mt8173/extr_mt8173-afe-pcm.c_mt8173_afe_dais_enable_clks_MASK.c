
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_base_afe {int dev; } ;
struct clk {int dummy; } ;


 int FUNC_0 (struct clk*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct mtk_base_afe *VAR_0,
           struct clk *VAR_1, struct clk *VAR_2)
{
 int VAR_3;

 if (VAR_1) {
  VAR_3 = FUNC_0(VAR_1);
  if (VAR_3) {
   FUNC_1(VAR_0->dev, "Failed to enable m_ck\n");
   return VAR_3;
  }
 }

 if (VAR_2) {
  VAR_3 = FUNC_0(VAR_2);
  if (VAR_3) {
   FUNC_1(VAR_0->dev, "Failed to enable b_ck\n");
   return VAR_3;
  }
 }
 return 0;
}
