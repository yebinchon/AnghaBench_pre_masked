
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rsnd_priv {int dummy; } ;
struct rsnd_mod {int dummy; } ;
struct rsnd_dai_stream {int dummy; } ;
struct rsnd_adg {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct rsnd_priv*,struct rsnd_dai_stream*,int ,int ,int *,int*,int *) ;
 int FUNC_1 (struct rsnd_mod*,int ,int,int) ;
 struct rsnd_mod* FUNC_2 (struct rsnd_adg*) ;
 int FUNC_3 (struct rsnd_mod*) ;
 struct rsnd_priv* FUNC_4 (struct rsnd_mod*) ;
 struct rsnd_adg* FUNC_5 (struct rsnd_priv*) ;
 int FUNC_6 (struct rsnd_priv*,struct rsnd_dai_stream*) ;
 int FUNC_7 (struct rsnd_priv*,struct rsnd_dai_stream*) ;

int FUNC_8(struct rsnd_mod *VAR_1,
     struct rsnd_dai_stream *VAR_2)
{
 struct rsnd_priv *VAR_3 = FUNC_4(VAR_1);
 struct rsnd_adg *VAR_4 = FUNC_5(VAR_3);
 struct rsnd_mod *VAR_5 = FUNC_2(VAR_4);
 int VAR_6 = FUNC_3(VAR_1);
 int VAR_7 = (VAR_6 % 2) ? 16 : 0;
 u32 VAR_8, VAR_9;

 FUNC_0(VAR_3, VAR_2,
       FUNC_6(VAR_3, VAR_2),
       FUNC_7(VAR_3, VAR_2),
       ((void*)0), &VAR_9, ((void*)0));

 VAR_9 = VAR_9 << VAR_7;
 VAR_8 = 0x0f1f << VAR_7;

 FUNC_1(VAR_5, VAR_0, VAR_8, VAR_9);

 return 0;
}
