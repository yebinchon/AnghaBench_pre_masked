
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsnd_ssiu {scalar_t__ usrcnt; } ;
struct rsnd_priv {int dummy; } ;
struct rsnd_mod {int dummy; } ;
struct rsnd_dai_stream {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rsnd_mod*,int ,int,int ) ;
 int FUNC_1 (struct rsnd_mod*) ;
 struct rsnd_ssiu* FUNC_2 (struct rsnd_mod*) ;
 int FUNC_3 (struct rsnd_mod*,int ,int ) ;
 scalar_t__ FUNC_4 (struct rsnd_dai_stream*) ;
 int FUNC_5 (struct rsnd_dai_stream*) ;

__attribute__((used)) static int FUNC_6(struct rsnd_mod *VAR_2,
          struct rsnd_dai_stream *VAR_3,
          struct rsnd_priv *VAR_4)
{
 struct rsnd_ssiu *VAR_5 = FUNC_2(VAR_2);
 int VAR_6 = FUNC_1(VAR_2);

 if (!FUNC_5(VAR_3))
  return 0;

 FUNC_0(VAR_2, VAR_1, 1 << (VAR_6 * 4), 0);

 if (--VAR_5->usrcnt)
  return 0;

 if (FUNC_4(VAR_3))
  FUNC_3(VAR_2, VAR_0, 0);

 return 0;
}
