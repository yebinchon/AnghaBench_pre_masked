
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
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct rsnd_priv*,struct rsnd_dai_stream*,unsigned int,unsigned int,int*,int*,int*) ;
 int FUNC_3 (struct rsnd_mod*,int ,int,int) ;
 int FUNC_4 (struct rsnd_mod*) ;
 struct rsnd_mod* FUNC_5 (struct rsnd_adg*) ;
 int FUNC_6 (struct rsnd_mod*) ;
 struct rsnd_priv* FUNC_7 (struct rsnd_mod*) ;
 struct rsnd_adg* FUNC_8 (struct rsnd_priv*) ;

int FUNC_9(struct rsnd_mod *VAR_1,
      struct rsnd_dai_stream *VAR_2,
      unsigned int VAR_3,
      unsigned int VAR_4)
{
 struct rsnd_priv *VAR_5 = FUNC_7(VAR_1);
 struct rsnd_adg *VAR_6 = FUNC_8(VAR_5);
 struct rsnd_mod *VAR_7 = FUNC_5(VAR_6);
 u32 VAR_8, VAR_9;
 u32 VAR_10, VAR_11;
 int VAR_12 = FUNC_6(VAR_1);
 int VAR_13 = (VAR_12 % 2) ? 16 : 0;

 FUNC_4(VAR_1);

 FUNC_2(VAR_5, VAR_2,
       VAR_3, VAR_4,
       &VAR_8, &VAR_9, &VAR_11);

 VAR_8 = VAR_8 << VAR_13;
 VAR_9 = VAR_9 << VAR_13;
 VAR_10 = 0x0f1f << VAR_13;

 FUNC_3(VAR_7, FUNC_0(VAR_12 / 2), VAR_10, VAR_8);
 FUNC_3(VAR_7, FUNC_1(VAR_12 / 2), VAR_10, VAR_9);

 if (VAR_11)
  FUNC_3(VAR_7, VAR_0, VAR_11, VAR_11);

 return 0;
}
