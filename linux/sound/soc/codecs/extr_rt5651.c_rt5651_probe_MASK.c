
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
struct rt5651_priv {struct snd_soc_component* component; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ) ;
 struct rt5651_priv* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_component *VAR_4)
{
 struct rt5651_priv *VAR_5 = FUNC_2(VAR_4);

 VAR_5->component = VAR_4;

 FUNC_3(VAR_4, VAR_0,
  VAR_2, VAR_1);

 FUNC_1(VAR_4, VAR_3);

 FUNC_0(VAR_4);

 return 0;
}
