
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_jack {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct da7218_priv {scalar_t__ dev_id; struct snd_soc_jack* jack; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct da7218_priv* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int ,int ) ;

int FUNC_2(struct snd_soc_component *VAR_4, struct snd_soc_jack *VAR_5)
{
 struct da7218_priv *VAR_6 = FUNC_0(VAR_4);

 if (VAR_6->dev_id == VAR_0)
  return -VAR_3;

 VAR_6->jack = VAR_5;
 FUNC_1(VAR_4, VAR_1,
       VAR_2,
       VAR_5 ? VAR_2 : 0);

 return 0;
}
