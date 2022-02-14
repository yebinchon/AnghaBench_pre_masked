
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct evea_priv {int switch_lin; int switch_lo; int switch_hp; } ;


 int FUNC_0 (struct evea_priv*) ;
 int FUNC_1 (struct evea_priv*) ;
 struct evea_priv* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_0)
{
 struct evea_priv *VAR_1 = FUNC_2(VAR_0);

 VAR_1->switch_lin = 1;
 VAR_1->switch_lo = 1;
 VAR_1->switch_hp = 1;

 FUNC_0(VAR_1);
 FUNC_1(VAR_1);

 return 0;
}
