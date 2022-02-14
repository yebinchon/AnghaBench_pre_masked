
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct ak4642_priv {scalar_t__ mcko; } ;


 int FUNC_0 (struct snd_soc_component*,int ) ;
 int FUNC_1 (scalar_t__) ;
 struct ak4642_priv* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_0)
{
 struct ak4642_priv *VAR_1 = FUNC_2(VAR_0);

 if (VAR_1->mcko)
  FUNC_0(VAR_0, FUNC_1(VAR_1->mcko));

 return 0;
}
