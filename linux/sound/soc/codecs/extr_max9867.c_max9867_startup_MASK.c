
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int component; } ;
struct snd_pcm_substream {int runtime; } ;
struct max9867_priv {scalar_t__ constraints; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,scalar_t__) ;
 struct max9867_priv* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_1,
      struct snd_soc_dai *VAR_2)
{
        struct max9867_priv *VAR_3 =
  FUNC_1(VAR_2->component);

 if (VAR_3->constraints)
  FUNC_0(VAR_1->runtime, 0,
   VAR_0, VAR_3->constraints);

 return 0;
}
