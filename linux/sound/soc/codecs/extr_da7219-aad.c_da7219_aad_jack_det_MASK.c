
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_jack {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct da7219_priv {TYPE_1__* aad; } ;
struct TYPE_2__ {int jack_inserted; struct snd_soc_jack* jack; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct da7219_priv* FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int ,int ) ;
 int FUNC_2 (struct snd_soc_jack*,int ,int ) ;

void FUNC_3(struct snd_soc_component *VAR_3, struct snd_soc_jack *VAR_4)
{
 struct da7219_priv *VAR_5 = FUNC_0(VAR_3);

 VAR_5->aad->jack = VAR_4;
 VAR_5->aad->jack_inserted = 0;


 FUNC_2(VAR_4, 0, VAR_0);


 FUNC_1(VAR_3, VAR_1,
       VAR_2,
       (VAR_4 ? VAR_2 : 0));
}
