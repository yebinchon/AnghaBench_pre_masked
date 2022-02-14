
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sta32x_priv {scalar_t__ xti_clk; int supplies; } ;
struct snd_soc_component {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int ) ;
 struct sta32x_priv* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct sta32x_priv*) ;

__attribute__((used)) static void FUNC_5(struct snd_soc_component *VAR_0)
{
 struct sta32x_priv *VAR_1 = FUNC_3(VAR_0);

 FUNC_4(VAR_1);
 FUNC_2(FUNC_0(VAR_1->supplies), VAR_1->supplies);

 if (VAR_1->xti_clk)
  FUNC_1(VAR_1->xti_clk);
}
