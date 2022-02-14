
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_component {int dummy; } ;
struct rt5640_priv {TYPE_1__* jack; int irq; } ;
struct TYPE_2__ {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct rt5640_priv*) ;
 int FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct snd_soc_component*) ;
 struct rt5640_priv* FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct snd_soc_component *VAR_2)
{
 struct rt5640_priv *VAR_3 = FUNC_4(VAR_2);

 FUNC_0(VAR_3->irq);
 FUNC_1(VAR_3);

 if (VAR_3->jack->status & VAR_1) {
  FUNC_3(VAR_2);
  FUNC_2(VAR_2);
  FUNC_5(VAR_3->jack, 0, VAR_0);
 }

 VAR_3->jack = ((void*)0);
}
