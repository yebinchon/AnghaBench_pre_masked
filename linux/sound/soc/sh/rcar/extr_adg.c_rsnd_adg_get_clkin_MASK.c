
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsnd_priv {int dummy; } ;
struct rsnd_adg {struct clk** clk; } ;
struct device {int dummy; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int * VAR_1 ;
 struct clk* FUNC_1 (struct device*,int ) ;
 struct device* FUNC_2 (struct rsnd_priv*) ;

__attribute__((used)) static void FUNC_3(struct rsnd_priv *VAR_2,
          struct rsnd_adg *VAR_3)
{
 struct device *VAR_4 = FUNC_2(VAR_2);
 struct clk *VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_5 = FUNC_1(VAR_4, VAR_1[VAR_6]);
  VAR_3->clk[VAR_6] = FUNC_0(VAR_5) ? ((void*)0) : VAR_5;
 }
}
