
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct evea_priv {int clk; int clk_exiv; int rst; int rst_exiv; int rst_adamv; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct evea_priv*) ;
 int FUNC_2 (int ) ;
 struct evea_priv* FUNC_3 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_component *VAR_0)
{
 struct evea_priv *VAR_1 = FUNC_3(VAR_0);

 FUNC_1(VAR_1);

 FUNC_2(VAR_1->rst_adamv);
 FUNC_2(VAR_1->rst_exiv);
 FUNC_2(VAR_1->rst);

 FUNC_0(VAR_1->clk_exiv);
 FUNC_0(VAR_1->clk);

 return 0;
}
