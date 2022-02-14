
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_4__* dma; int cmd; } ;
struct TYPE_5__ {TYPE_4__* dma; int cmd; } ;
struct snd_pmac {scalar_t__ irq; scalar_t__ tx_irq; scalar_t__ rx_irq; int requested; scalar_t__ node; int pdev; TYPE_3__* rsrc; TYPE_2__ capture; TYPE_1__ playback; TYPE_4__* awacs; TYPE_4__* latch_base; TYPE_4__* macio_base; int extra_dma; int (* mixer_free ) (struct snd_pmac*) ;scalar_t__ initialized; } ;
struct TYPE_8__ {int control; } ;
struct TYPE_7__ {int start; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,void*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (struct snd_pmac*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (TYPE_3__*) ;
 int FUNC_9 (struct snd_pmac*,int *) ;
 int FUNC_10 (struct snd_pmac*) ;
 int FUNC_11 (struct snd_pmac*) ;
 int FUNC_12 (struct snd_pmac*,int ) ;
 int FUNC_13 (struct snd_pmac*) ;

__attribute__((used)) static int FUNC_14(struct snd_pmac *VAR_1)
{

 if (VAR_1->initialized) {
  FUNC_10(VAR_1);

  FUNC_5(&VAR_1->awacs->control, FUNC_1(&VAR_1->awacs->control) & 0xfff);
 }

 if (VAR_1->node)
  FUNC_12(VAR_1, 0);


 if (VAR_1->mixer_free)
  VAR_1->mixer_free(VAR_1);

 FUNC_11(VAR_1);


 if (VAR_1->irq >= 0)
  FUNC_0(VAR_1->irq, (void*)VAR_1);
 if (VAR_1->tx_irq >= 0)
  FUNC_0(VAR_1->tx_irq, (void*)VAR_1);
 if (VAR_1->rx_irq >= 0)
  FUNC_0(VAR_1->rx_irq, (void*)VAR_1);
 FUNC_9(VAR_1, &VAR_1->playback.cmd);
 FUNC_9(VAR_1, &VAR_1->capture.cmd);
 FUNC_9(VAR_1, &VAR_1->extra_dma);
 FUNC_9(VAR_1, &VAR_0);
 FUNC_2(VAR_1->macio_base);
 FUNC_2(VAR_1->latch_base);
 FUNC_2(VAR_1->awacs);
 FUNC_2(VAR_1->playback.dma);
 FUNC_2(VAR_1->capture.dma);

 if (VAR_1->node) {
  int VAR_2;
  for (VAR_2 = 0; VAR_2 < 3; VAR_2++) {
   if (VAR_1->requested & (1 << VAR_2))
    FUNC_7(VAR_1->rsrc[VAR_2].start,
         FUNC_8(&VAR_1->rsrc[VAR_2]));
  }
 }

 FUNC_6(VAR_1->pdev);
 FUNC_4(VAR_1->node);
 FUNC_3(VAR_1);
 return 0;
}
