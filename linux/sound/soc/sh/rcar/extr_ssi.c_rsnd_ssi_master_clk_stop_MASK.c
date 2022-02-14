
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsnd_ssi {int usrcnt; scalar_t__ chan; scalar_t__ rate; scalar_t__ cr_clk; } ;
struct rsnd_mod {int dummy; } ;
struct rsnd_dai_stream {int dummy; } ;
struct rsnd_dai {int dummy; } ;


 int FUNC_0 (struct rsnd_mod*) ;
 struct rsnd_dai* FUNC_1 (struct rsnd_dai_stream*) ;
 struct rsnd_ssi* FUNC_2 (struct rsnd_mod*) ;
 int FUNC_3 (struct rsnd_dai*) ;
 int FUNC_4 (struct rsnd_mod*) ;

__attribute__((used)) static void FUNC_5(struct rsnd_mod *VAR_0,
         struct rsnd_dai_stream *VAR_1)
{
 struct rsnd_dai *VAR_2 = FUNC_1(VAR_1);
 struct rsnd_ssi *VAR_3 = FUNC_2(VAR_0);

 if (!FUNC_3(VAR_2))
  return;

 if (!FUNC_4(VAR_0))
  return;

 if (VAR_3->usrcnt > 1)
  return;

 VAR_3->cr_clk = 0;
 VAR_3->rate = 0;
 VAR_3->chan = 0;

 FUNC_0(VAR_0);
}
