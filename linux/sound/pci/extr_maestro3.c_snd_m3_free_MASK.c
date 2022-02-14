
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_m3 {int num_substreams; scalar_t__ irq; int pci; int assp_minisrc_image; int assp_kernel_image; scalar_t__ iobase; int suspend_mem; struct snd_m3* substreams; int reg_lock; scalar_t__ substream; scalar_t__ running; scalar_t__ input_dev; int hwvol_work; } ;
struct m3_dma {int num_substreams; scalar_t__ irq; int pci; int assp_minisrc_image; int assp_kernel_image; scalar_t__ iobase; int suspend_mem; struct m3_dma* substreams; int reg_lock; scalar_t__ substream; scalar_t__ running; scalar_t__ input_dev; int hwvol_work; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__,struct snd_m3*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct snd_m3*) ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct snd_m3*,struct snd_m3*,scalar_t__) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static int FUNC_12(struct snd_m3 *VAR_1)
{
 struct m3_dma *VAR_2;
 int VAR_3;

 FUNC_0(&VAR_1->hwvol_work);





 if (VAR_1->substreams) {
  FUNC_9(&VAR_1->reg_lock);
  for (VAR_3 = 0; VAR_3 < VAR_1->num_substreams; VAR_3++) {
   VAR_2 = &VAR_1->substreams[VAR_3];

   if (VAR_2->substream && VAR_2->running)
    FUNC_8(VAR_1, VAR_2, VAR_2->substream);
  }
  FUNC_10(&VAR_1->reg_lock);
  FUNC_3(VAR_1->substreams);
 }
 if (VAR_1->iobase) {
  FUNC_4(0, VAR_1->iobase + VAR_0);
 }





 if (VAR_1->irq >= 0)
  FUNC_1(VAR_1->irq, VAR_1);

 if (VAR_1->iobase)
  FUNC_6(VAR_1->pci);

 FUNC_7(VAR_1->assp_kernel_image);
 FUNC_7(VAR_1->assp_minisrc_image);

 FUNC_5(VAR_1->pci);
 FUNC_3(VAR_1);
 return 0;
}
