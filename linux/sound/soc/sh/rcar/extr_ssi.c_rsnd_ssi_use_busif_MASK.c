
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsnd_ssi {int dummy; } ;
struct rsnd_mod {int dummy; } ;
struct rsnd_dai_stream {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct rsnd_ssi*,int ) ;
 scalar_t__ FUNC_1 (struct rsnd_dai_stream*) ;
 struct rsnd_mod* FUNC_2 (struct rsnd_dai_stream*) ;
 struct rsnd_ssi* FUNC_3 (struct rsnd_mod*) ;
 int FUNC_4 (struct rsnd_mod*) ;

int FUNC_5(struct rsnd_dai_stream *VAR_1)
{
 struct rsnd_mod *VAR_2 = FUNC_2(VAR_1);
 struct rsnd_ssi *VAR_3 = FUNC_3(VAR_2);
 int VAR_4 = 0;

 if (!FUNC_4(VAR_2))
  return 0;

 if (!(FUNC_0(VAR_3, VAR_0)))
  VAR_4 = 1;
 if (FUNC_1(VAR_1))
  VAR_4 = 1;

 return VAR_4;
}
