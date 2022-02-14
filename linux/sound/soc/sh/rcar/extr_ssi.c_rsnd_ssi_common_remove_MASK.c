
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsnd_ssi {int irq; } ;
struct rsnd_priv {int dummy; } ;
struct rsnd_mod {int dummy; } ;
struct rsnd_dai_stream {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct rsnd_mod*) ;
 int FUNC_1 (struct rsnd_ssi*,int ) ;
 scalar_t__ FUNC_2 (struct rsnd_ssi*,int ) ;
 struct rsnd_mod* FUNC_3 (struct rsnd_dai_stream*) ;
 struct rsnd_ssi* FUNC_4 (struct rsnd_mod*) ;

__attribute__((used)) static int FUNC_5(struct rsnd_mod *VAR_1,
      struct rsnd_dai_stream *VAR_2,
      struct rsnd_priv *VAR_3)
{
 struct rsnd_ssi *VAR_4 = FUNC_4(VAR_1);
 struct rsnd_mod *VAR_5 = FUNC_3(VAR_2);


 if (VAR_5 != VAR_1)
  return 0;


 if (FUNC_2(VAR_4, VAR_0)) {
  FUNC_0(VAR_4->irq, VAR_1);

  FUNC_1(VAR_4, VAR_0);
 }

 return 0;
}
