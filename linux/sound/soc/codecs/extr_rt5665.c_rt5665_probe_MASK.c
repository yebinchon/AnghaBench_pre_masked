
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct rt5665_priv {int calibrate_work; struct snd_soc_component* component; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;
 struct rt5665_priv* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_0)
{
 struct rt5665_priv *VAR_1 = FUNC_2(VAR_0);

 VAR_1->component = VAR_0;

 FUNC_1(&VAR_1->calibrate_work, FUNC_0(100));

 return 0;
}
