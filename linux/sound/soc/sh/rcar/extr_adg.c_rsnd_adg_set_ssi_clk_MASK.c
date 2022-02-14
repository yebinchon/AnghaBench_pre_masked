
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rsnd_priv {int dummy; } ;
struct rsnd_mod {int dummy; } ;
struct rsnd_adg {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,int) ;
 int FUNC_2 (struct rsnd_mod*,int ,int,int) ;
 int FUNC_3 (struct rsnd_mod*) ;
 struct rsnd_mod* FUNC_4 (struct rsnd_adg*) ;
 int FUNC_5 (struct rsnd_mod*) ;
 struct rsnd_priv* FUNC_6 (struct rsnd_mod*) ;
 struct rsnd_adg* FUNC_7 (struct rsnd_priv*) ;
 struct device* FUNC_8 (struct rsnd_priv*) ;

__attribute__((used)) static void FUNC_9(struct rsnd_mod *VAR_0, u32 VAR_1)
{
 struct rsnd_priv *VAR_2 = FUNC_6(VAR_0);
 struct rsnd_adg *VAR_3 = FUNC_7(VAR_2);
 struct rsnd_mod *VAR_4 = FUNC_4(VAR_3);
 struct device *VAR_5 = FUNC_8(VAR_2);
 int VAR_6 = FUNC_5(VAR_0);
 int VAR_7 = (VAR_6 % 4) * 8;
 u32 VAR_8 = 0xFF << VAR_7;

 FUNC_3(VAR_0);

 VAR_1 = VAR_1 << VAR_7;





 if (VAR_6 == 8)
  return;

 FUNC_2(VAR_4, FUNC_0(VAR_6 / 4), VAR_8, VAR_1);

 FUNC_1(VAR_5, "AUDIO_CLK_SEL is 0x%x\n", VAR_1);
}
