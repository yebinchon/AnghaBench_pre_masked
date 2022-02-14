
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skl_clk_parent_src {int name; int rate; int parent_name; } ;
struct skl_clk_parent {int hw; int lookup; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (struct device*,int ,int ,int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (struct skl_clk_parent*,int) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_2,
   struct skl_clk_parent *VAR_3,
   struct skl_clk_parent_src *VAR_4)
{
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {


  VAR_3[VAR_5].hw = FUNC_2(VAR_2, VAR_4[VAR_5].name,
    VAR_4[VAR_5].parent_name, 0, VAR_4[VAR_5].rate);
  if (FUNC_0(VAR_3[VAR_5].hw)) {
   VAR_6 = FUNC_1(VAR_3[VAR_5].hw);
   goto err;
  }

  VAR_3[VAR_5].lookup = FUNC_4(VAR_3[VAR_5].hw, VAR_4[VAR_5].name,
         ((void*)0));
  if (!VAR_3[VAR_5].lookup) {
   FUNC_3(VAR_3[VAR_5].hw);
   VAR_6 = -VAR_0;
   goto err;
  }
 }

 return 0;
err:
 FUNC_5(VAR_3, VAR_5);
 return VAR_6;
}
