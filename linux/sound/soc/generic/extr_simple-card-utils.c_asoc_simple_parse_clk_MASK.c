
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct snd_soc_dai_link_component {struct device_node* of_node; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
struct clk {int dummy; } ;
struct asoc_simple_dai {int clk_direction; void* sysclk; struct clk* clk; } ;


 int FUNC_0 (struct clk*) ;
 int VAR_0 ;
 void* FUNC_1 (struct clk*) ;
 struct clk* FUNC_2 (struct device*,struct device_node*,int *) ;
 scalar_t__ FUNC_3 (struct device_node*,char*) ;
 int FUNC_4 (struct device_node*,char*,void**) ;

int FUNC_5(struct device *VAR_1,
     struct device_node *VAR_2,
     struct asoc_simple_dai *VAR_3,
     struct snd_soc_dai_link_component *VAR_4)
{
 struct clk *VAR_5;
 u32 VAR_6;







 VAR_5 = FUNC_2(VAR_1, VAR_2, ((void*)0));
 if (!FUNC_0(VAR_5)) {
  VAR_3->sysclk = FUNC_1(VAR_5);

  VAR_3->clk = VAR_5;
 } else if (!FUNC_4(VAR_2, "system-clock-frequency", &VAR_6)) {
  VAR_3->sysclk = VAR_6;
 } else {
  VAR_5 = FUNC_2(VAR_1, VAR_4->of_node, ((void*)0));
  if (!FUNC_0(VAR_5))
   VAR_3->sysclk = FUNC_1(VAR_5);
 }

 if (FUNC_3(VAR_2, "system-clock-direction-out"))
  VAR_3->clk_direction = VAR_0;

 return 0;
}
