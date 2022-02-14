
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct device {int dummy; } ;
struct clk_init_data {scalar_t__ flags; int num_parents; int parent_names; int name; int ops; } ;
struct TYPE_3__ {struct clk_init_data* init; } ;
struct clk_aic32x4 {TYPE_1__ hw; int reg; int regmap; struct device* dev; } ;
struct clk {int dummy; } ;
struct aic32x4_clkdesc {int name; int reg; int num_parents; int parent_names; int ops; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,char const*) ;
 int FUNC_1 (struct device*,int *) ;
 char* FUNC_2 (struct device*) ;
 struct clk* FUNC_3 (struct device*,TYPE_1__*) ;
 struct clk_aic32x4* FUNC_4 (struct device*,int,int ) ;

__attribute__((used)) static struct clk *FUNC_5(struct device *VAR_2,
   struct aic32x4_clkdesc *VAR_3)
{
 struct clk_init_data VAR_4;
 struct clk_aic32x4 *VAR_5;
 const char *VAR_6 = FUNC_2(VAR_2);

 VAR_4.ops = VAR_3->ops;
 VAR_4.name = VAR_3->name;
 VAR_4.parent_names = VAR_3->parent_names;
 VAR_4.num_parents = VAR_3->num_parents;
 VAR_4.flags = 0;

 VAR_5 = FUNC_4(VAR_2, sizeof(struct clk_aic32x4), VAR_1);
 if (VAR_5 == ((void*)0))
  return (struct clk *) -VAR_0;

 VAR_5->dev = VAR_2;
 VAR_5->hw.init = &VAR_4;
 VAR_5->regmap = FUNC_1(VAR_2, ((void*)0));
 VAR_5->reg = VAR_3->reg;

 FUNC_0(&VAR_5->hw, VAR_3->name, VAR_6);
 return FUNC_3(VAR_2, &VAR_5->hw);
}
