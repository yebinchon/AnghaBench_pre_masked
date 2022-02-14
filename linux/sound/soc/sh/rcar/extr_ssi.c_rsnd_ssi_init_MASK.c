
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsnd_ssi {int usrcnt; } ;
struct rsnd_priv {int dummy; } ;
struct rsnd_mod {int dummy; } ;
struct rsnd_dai_stream {int dummy; } ;


 int FUNC_0 (struct rsnd_mod*) ;
 struct rsnd_ssi* FUNC_1 (struct rsnd_mod*) ;
 int FUNC_2 (struct rsnd_mod*,struct rsnd_dai_stream*) ;
 int FUNC_3 (struct rsnd_mod*,struct rsnd_dai_stream*) ;
 int FUNC_4 (struct rsnd_mod*) ;
 int FUNC_5 (struct rsnd_mod*) ;

__attribute__((used)) static int FUNC_6(struct rsnd_mod *VAR_0,
    struct rsnd_dai_stream *VAR_1,
    struct rsnd_priv *VAR_2)
{
 struct rsnd_ssi *VAR_3 = FUNC_1(VAR_0);

 if (!FUNC_3(VAR_0, VAR_1))
  return 0;

 VAR_3->usrcnt++;

 FUNC_0(VAR_0);

 FUNC_2(VAR_0, VAR_1);

 FUNC_4(VAR_0);


 FUNC_5(VAR_0);

 return 0;
}
