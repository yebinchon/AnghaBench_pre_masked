
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct skl_ssp_clk {int parent_name; int name; } ;
struct skl_clk_pdata {int dummy; } ;
struct TYPE_3__ {struct clk_init_data* init; } ;
struct skl_clk {int id; int lookup; TYPE_1__ hw; struct skl_clk_pdata* pdata; } ;
struct device {int dummy; } ;
struct clk_init_data {int num_parents; int name; int * parent_names; int flags; int * ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct skl_clk* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,int ,int *) ;
 int FUNC_2 (struct device*,TYPE_1__*) ;
 struct skl_clk* FUNC_3 (struct device*,int,int ) ;
 int VAR_3 ;

__attribute__((used)) static struct skl_clk *FUNC_4(struct device *VAR_4,
   struct skl_ssp_clk *VAR_5,
   struct skl_clk_pdata *VAR_6, int VAR_7)
{
 struct clk_init_data VAR_8;
 struct skl_clk *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_3(VAR_4, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return FUNC_0(-VAR_1);

 VAR_8.name = VAR_5->name;
 VAR_8.ops = &VAR_3;
 VAR_8.flags = VAR_0;
 VAR_8.parent_names = &VAR_5->parent_name;
 VAR_8.num_parents = 1;
 VAR_9->hw.init = &VAR_8;
 VAR_9->pdata = VAR_6;

 VAR_9->id = VAR_7;
 VAR_10 = FUNC_2(VAR_4, &VAR_9->hw);
 if (VAR_10) {
  VAR_9 = FUNC_0(VAR_10);
  return VAR_9;
 }

 VAR_9->lookup = FUNC_1(&VAR_9->hw, VAR_8.name, ((void*)0));
 if (!VAR_9->lookup)
  VAR_9 = FUNC_0(-VAR_1);

 return VAR_9;
}
