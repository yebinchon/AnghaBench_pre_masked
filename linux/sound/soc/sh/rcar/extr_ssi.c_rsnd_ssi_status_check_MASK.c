
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rsnd_priv {int dummy; } ;
struct rsnd_mod {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,int ) ;
 int FUNC_1 (struct rsnd_mod*) ;
 struct rsnd_priv* FUNC_2 (struct rsnd_mod*) ;
 struct device* FUNC_3 (struct rsnd_priv*) ;
 int FUNC_4 (struct rsnd_mod*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct rsnd_mod *VAR_0,
      u32 VAR_1)
{
 struct rsnd_priv *VAR_2 = FUNC_2(VAR_0);
 struct device *VAR_3 = FUNC_3(VAR_2);
 u32 VAR_4;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < 1024; VAR_5++) {
  VAR_4 = FUNC_4(VAR_0);
  if (VAR_4 & VAR_1)
   return;

  FUNC_5(5);
 }

 FUNC_0(VAR_3, "%s status check failed\n", FUNC_1(VAR_0));
}
