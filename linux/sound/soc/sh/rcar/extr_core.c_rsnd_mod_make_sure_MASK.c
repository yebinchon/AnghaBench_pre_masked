
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsnd_priv {int dummy; } ;
struct rsnd_mod {int type; } ;
struct device {int dummy; } ;
typedef enum rsnd_mod_type { ____Placeholder_rsnd_mod_type } rsnd_mod_type ;


 int FUNC_0 (struct device*,char*,int ) ;
 int FUNC_1 (struct rsnd_mod*) ;
 struct rsnd_priv* FUNC_2 (struct rsnd_mod*) ;
 struct device* FUNC_3 (struct rsnd_priv*) ;

void FUNC_4(struct rsnd_mod *VAR_0, enum rsnd_mod_type VAR_1)
{
 if (VAR_0->type != VAR_1) {
  struct rsnd_priv *VAR_2 = FUNC_2(VAR_0);
  struct device *VAR_3 = FUNC_3(VAR_2);

  FUNC_0(VAR_3, "%s is not your expected module\n",
    FUNC_1(VAR_0));
 }
}
