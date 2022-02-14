
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssp_priv {int ssp; } ;
struct snd_soc_dai {int dummy; } ;


 int FUNC_0 (struct ssp_priv*) ;
 int FUNC_1 (int ) ;
 struct ssp_priv* FUNC_2 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_0)
{
 struct ssp_priv *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(VAR_1->ssp);
 FUNC_0(VAR_1);
 return 0;
}
