
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct evea_priv {int clk; int clk_exiv; int rst; int rst_exiv; int rst_adamv; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct evea_priv*) ;
 int FUNC_3 (struct evea_priv*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct evea_priv* FUNC_6 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_component *VAR_0)
{
 struct evea_priv *VAR_1 = FUNC_6(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_1(VAR_1->clk);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_1(VAR_1->clk_exiv);
 if (VAR_2)
  goto err_out_clock;

 VAR_2 = FUNC_5(VAR_1->rst);
 if (VAR_2)
  goto err_out_clock_exiv;

 VAR_2 = FUNC_5(VAR_1->rst_exiv);
 if (VAR_2)
  goto err_out_reset;

 VAR_2 = FUNC_5(VAR_1->rst_adamv);
 if (VAR_2)
  goto err_out_reset_exiv;

 FUNC_2(VAR_1);
 FUNC_3(VAR_1);

 return 0;

err_out_reset_exiv:
 FUNC_4(VAR_1->rst_exiv);

err_out_reset:
 FUNC_4(VAR_1->rst);

err_out_clock_exiv:
 FUNC_0(VAR_1->clk_exiv);

err_out_clock:
 FUNC_0(VAR_1->clk);

 return VAR_2;
}
