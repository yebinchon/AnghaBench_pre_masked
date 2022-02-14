
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct mt6358_priv {int mtkaif_protocol; } ;


 struct mt6358_priv* FUNC_0 (struct snd_soc_component*) ;

int FUNC_1(struct snd_soc_component *VAR_0,
          int VAR_1)
{
 struct mt6358_priv *VAR_2 = FUNC_0(VAR_0);

 VAR_2->mtkaif_protocol = VAR_1;
 return 0;
}
