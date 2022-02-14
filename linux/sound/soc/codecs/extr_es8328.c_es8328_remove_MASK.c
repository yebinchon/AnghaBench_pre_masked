
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct es8328_priv {int supplies; scalar_t__ clk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ) ;
 struct es8328_priv* FUNC_3 (struct snd_soc_component*) ;

__attribute__((used)) static void FUNC_4(struct snd_soc_component *VAR_0)
{
 struct es8328_priv *VAR_1;

 VAR_1 = FUNC_3(VAR_0);

 if (VAR_1->clk)
  FUNC_1(VAR_1->clk);

 FUNC_2(FUNC_0(VAR_1->supplies),
          VAR_1->supplies);
}
