
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_component {int dummy; } ;
struct es8316_priv {int lock; TYPE_1__* jack; int irq; } ;
struct TYPE_2__ {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct es8316_priv* FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_component*,int ,int ,int ) ;
 int FUNC_6 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static void FUNC_7(struct snd_soc_component *VAR_4)
{
 struct es8316_priv *VAR_5 = FUNC_4(VAR_4);

 FUNC_0(VAR_5->irq);

 FUNC_2(&VAR_5->lock);

 FUNC_5(VAR_4, VAR_0,
          VAR_1, 0);

 if (VAR_5->jack->status & VAR_3) {
  FUNC_1(VAR_4);
  FUNC_6(VAR_5->jack, 0, VAR_2);
 }

 VAR_5->jack = ((void*)0);

 FUNC_3(&VAR_5->lock);
}
