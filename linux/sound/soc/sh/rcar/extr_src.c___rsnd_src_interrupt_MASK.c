
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsnd_priv {int lock; } ;
struct rsnd_mod {int dummy; } ;
struct rsnd_dai_stream {int substream; } ;


 int FUNC_0 (struct rsnd_dai_stream*) ;
 struct rsnd_priv* FUNC_1 (struct rsnd_mod*) ;
 scalar_t__ FUNC_2 (struct rsnd_mod*) ;
 int FUNC_3 (struct rsnd_mod*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct rsnd_mod *VAR_0,
     struct rsnd_dai_stream *VAR_1)
{
 struct rsnd_priv *VAR_2 = FUNC_1(VAR_0);
 bool VAR_3 = 0;

 FUNC_5(&VAR_2->lock);


 if (!FUNC_0(VAR_1))
  goto rsnd_src_interrupt_out;

 if (FUNC_2(VAR_0))
  VAR_3 = 1;

 FUNC_3(VAR_0);
rsnd_src_interrupt_out:

 FUNC_6(&VAR_2->lock);

 if (VAR_3)
  FUNC_4(VAR_1->substream);
}
