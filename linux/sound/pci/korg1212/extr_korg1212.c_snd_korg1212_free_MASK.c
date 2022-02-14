
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * area; } ;
struct snd_korg1212 {scalar_t__ irq; int pci; TYPE_1__ dma_shared; TYPE_1__ dma_rec; TYPE_1__ dma_play; TYPE_1__ dma_dsp; int * iobase; } ;


 int FUNC_0 (scalar_t__,struct snd_korg1212*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct snd_korg1212*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct snd_korg1212*) ;
 int FUNC_7 (struct snd_korg1212*) ;

__attribute__((used)) static int
FUNC_8(struct snd_korg1212 *VAR_0)
{
        FUNC_7(VAR_0);

        if (VAR_0->irq >= 0) {
                FUNC_6(VAR_0);
                FUNC_0(VAR_0->irq, VAR_0);
                VAR_0->irq = -1;
        }

        if (VAR_0->iobase != ((void*)0)) {
                FUNC_1(VAR_0->iobase);
                VAR_0->iobase = ((void*)0);
        }

 FUNC_4(VAR_0->pci);




        if (VAR_0->dma_dsp.area) {
         FUNC_5(&VAR_0->dma_dsp);
         VAR_0->dma_dsp.area = ((void*)0);
        }






 if (VAR_0->dma_play.area) {
  FUNC_5(&VAR_0->dma_play);
  VAR_0->dma_play.area = ((void*)0);
        }

 if (VAR_0->dma_rec.area) {
  FUNC_5(&VAR_0->dma_rec);
  VAR_0->dma_rec.area = ((void*)0);
        }






 if (VAR_0->dma_shared.area) {
  FUNC_5(&VAR_0->dma_shared);
  VAR_0->dma_shared.area = ((void*)0);
        }

 FUNC_3(VAR_0->pci);
        FUNC_2(VAR_0);
        return 0;
}
