
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct madera_priv {struct madera* madera; } ;
struct madera {int dummy; } ;


 int FUNC_0 (struct madera*) ;
 struct madera_priv* FUNC_1 (struct snd_soc_component*) ;

int FUNC_2(struct snd_soc_component *VAR_0)
{
 struct madera_priv *VAR_1 = FUNC_1(VAR_0);
 struct madera *VAR_2 = VAR_1->madera;

 FUNC_0(VAR_2);

 return 0;
}
