
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rsnd_ssi {int cr_own; int cr_clk; scalar_t__ cr_en; } ;
struct rsnd_priv {int dummy; } ;
struct rsnd_mod {int dummy; } ;
struct rsnd_dai_stream {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct rsnd_dai_stream*) ;
 struct rsnd_ssi* FUNC_1 (struct rsnd_mod*) ;
 int FUNC_2 (struct rsnd_mod*,int ,int) ;
 scalar_t__ FUNC_3 (struct rsnd_mod*,struct rsnd_dai_stream*) ;
 int FUNC_4 (struct rsnd_mod*,struct rsnd_dai_stream*) ;
 int FUNC_5 (struct rsnd_mod*,int ) ;

__attribute__((used)) static int FUNC_6(struct rsnd_mod *VAR_4,
    struct rsnd_dai_stream *VAR_5,
    struct rsnd_priv *VAR_6)
{
 struct rsnd_ssi *VAR_7 = FUNC_1(VAR_4);
 u32 VAR_8;

 if (!FUNC_4(VAR_4, VAR_5))
  return 0;

 if (FUNC_3(VAR_4, VAR_5))
  return 0;

 VAR_8 = VAR_7->cr_own |
  VAR_7->cr_clk;






 if (FUNC_0(VAR_5)) {
  FUNC_2(VAR_4, VAR_3, VAR_8 | VAR_1);
  FUNC_5(VAR_4, VAR_0);
 }





 FUNC_2(VAR_4, VAR_3, VAR_8);
 FUNC_5(VAR_4, VAR_2);

 VAR_7->cr_en = 0;

 return 0;
}
