
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsnd_priv {int dummy; } ;
struct rsnd_mod {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 struct rsnd_mod* FUNC_1 (int ) ;
 int FUNC_2 (struct rsnd_priv*,int) ;
 int FUNC_3 (struct rsnd_priv*) ;

struct rsnd_mod *FUNC_4(struct rsnd_priv *VAR_0, int VAR_1)
{
 if (FUNC_0(VAR_1 < 0 || VAR_1 >= FUNC_3(VAR_0)))
  VAR_1 = 0;

 return FUNC_1(FUNC_2(VAR_0, VAR_1));
}
