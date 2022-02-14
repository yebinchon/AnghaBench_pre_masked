
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsnd_priv {int dummy; } ;
struct rsnd_mod {int dummy; } ;
struct rsnd_dai_stream {int dummy; } ;
struct rsnd_dai {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct rsnd_mod*) ;
 int FUNC_1 (int ,struct rsnd_dai_stream*,int ) ;
 struct rsnd_dai* FUNC_2 (struct rsnd_dai_stream*) ;
 int FUNC_3 (struct rsnd_mod*) ;
 struct rsnd_priv* FUNC_4 (struct rsnd_mod*) ;
 int FUNC_5 (struct rsnd_dai*) ;
 int FUNC_6 (struct rsnd_priv*,int) ;

__attribute__((used)) static void FUNC_7(struct rsnd_mod *VAR_1,
       struct rsnd_dai_stream *VAR_2)
{
 struct rsnd_dai *VAR_3 = FUNC_2(VAR_2);
 struct rsnd_priv *VAR_4 = FUNC_4(VAR_1);

 if (!FUNC_0(VAR_1))
  return;

 if (!FUNC_5(VAR_3))
  return;

 switch (FUNC_3(VAR_1)) {
 case 1:
 case 2:
 case 9:
  FUNC_1(FUNC_6(VAR_4, 0), VAR_2, VAR_0);
  break;
 case 4:
  FUNC_1(FUNC_6(VAR_4, 3), VAR_2, VAR_0);
  break;
 case 8:
  FUNC_1(FUNC_6(VAR_4, 7), VAR_2, VAR_0);
  break;
 }
}
