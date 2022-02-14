
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rsnd_priv {int dummy; } ;
struct rsnd_mod {int dummy; } ;
struct rsnd_dai_stream {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct rsnd_priv*) ;
 int FUNC_1 (struct rsnd_mod*,int ,int) ;
 scalar_t__ FUNC_2 (struct rsnd_mod*) ;
 scalar_t__ FUNC_3 (struct rsnd_mod*,struct rsnd_dai_stream*) ;
 int FUNC_4 (struct rsnd_mod*,struct rsnd_dai_stream*) ;

__attribute__((used)) static int FUNC_5(struct rsnd_mod *VAR_1,
   struct rsnd_dai_stream *VAR_2,
   struct rsnd_priv *VAR_3,
   int VAR_4)
{
 u32 VAR_5 = 0;

 if (FUNC_0(VAR_3))
  return 0;

 if (FUNC_3(VAR_1, VAR_2))
  return 0;

 if (!FUNC_4(VAR_1, VAR_2))
  return 0;

 if (VAR_4)
  VAR_5 = FUNC_2(VAR_1) ? 0x0e000000 : 0x0f000000;

 FUNC_1(VAR_1, VAR_0, VAR_5);

 return 0;
}
