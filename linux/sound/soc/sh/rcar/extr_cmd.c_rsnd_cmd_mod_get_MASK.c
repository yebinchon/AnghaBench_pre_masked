
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsnd_priv {scalar_t__ cmd; } ;
struct rsnd_mod {int dummy; } ;
struct rsnd_cmd {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct rsnd_priv*) ;
 struct rsnd_mod* FUNC_2 (struct rsnd_cmd*) ;

__attribute__((used)) static struct rsnd_mod *FUNC_3(struct rsnd_priv *VAR_0, int VAR_1)
{
 if (FUNC_0(VAR_1 < 0 || VAR_1 >= FUNC_1(VAR_0)))
  VAR_1 = 0;

 return FUNC_2((struct rsnd_cmd *)(VAR_0->cmd) + VAR_1);
}
