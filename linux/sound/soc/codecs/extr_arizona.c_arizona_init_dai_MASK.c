
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arizona_priv {struct arizona_dai_priv* dai; } ;
struct arizona_dai_priv {int constraint; int clk; } ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(struct arizona_priv *VAR_2, int VAR_3)
{
 struct arizona_dai_priv *VAR_4 = &VAR_2->dai[VAR_3];

 VAR_4->clk = VAR_0;
 VAR_4->constraint = VAR_1;

 return 0;
}
