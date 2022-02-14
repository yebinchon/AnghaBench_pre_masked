
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsnd_priv {int dummy; } ;
struct rsnd_mod_ops {int dummy; } ;
struct rsnd_mod {int id; int type; struct rsnd_priv* priv; struct clk* clk; struct rsnd_mod_ops* ops; } ;
struct clk {int dummy; } ;
typedef enum rsnd_mod_type { ____Placeholder_rsnd_mod_type } rsnd_mod_type ;


 int FUNC_0 (struct clk*) ;

int FUNC_1(struct rsnd_priv *VAR_0,
    struct rsnd_mod *VAR_1,
    struct rsnd_mod_ops *VAR_2,
    struct clk *VAR_3,
    enum rsnd_mod_type VAR_4,
    int VAR_5)
{
 int VAR_6 = FUNC_0(VAR_3);

 if (VAR_6)
  return VAR_6;

 VAR_1->id = VAR_5;
 VAR_1->ops = VAR_2;
 VAR_1->type = VAR_4;
 VAR_1->clk = VAR_3;
 VAR_1->priv = VAR_0;

 return VAR_6;
}
