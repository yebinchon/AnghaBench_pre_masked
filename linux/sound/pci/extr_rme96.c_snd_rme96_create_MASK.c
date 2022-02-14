
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rme96 {int irq; int wcreg; int areg; TYPE_1__* card; scalar_t__* vol; scalar_t__ iobase; scalar_t__ capture_periodsize; scalar_t__ playback_periodsize; TYPE_2__* adat_pcm; TYPE_2__* spdif_pcm; int rev; scalar_t__ port; struct pci_dev* pci; int lock; } ;
struct pci_dev {int irq; scalar_t__ device; } ;
struct TYPE_6__ {scalar_t__ info_flags; int name; int private_free; struct rme96* private_data; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct rme96*) ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (int ,char*,int,...) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,int,int *) ;
 int FUNC_5 (struct pci_dev*,char*) ;
 scalar_t__ FUNC_6 (struct pci_dev*,int ) ;
 scalar_t__ FUNC_7 (int,int ,int ,int ,struct rme96*) ;
 int FUNC_8 (TYPE_1__*,char*,int,int,int,TYPE_2__**) ;
 int FUNC_9 (TYPE_2__*,int ,int *) ;
 int FUNC_10 (struct rme96*) ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_11 (TYPE_1__*,struct rme96*) ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_12 (struct rme96*) ;
 int FUNC_13 (struct rme96*) ;
 int FUNC_14 (struct rme96*,int ) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ,char*) ;
 int FUNC_17 (int,scalar_t__) ;

__attribute__((used)) static int
FUNC_18(struct rme96 *VAR_27)
{
 struct pci_dev *VAR_28 = VAR_27->pci;
 int VAR_29;

 VAR_27->irq = -1;
 FUNC_15(&VAR_27->lock);

 if ((VAR_29 = FUNC_3(VAR_28)) < 0)
  return VAR_29;

 if ((VAR_29 = FUNC_5(VAR_28, "RME96")) < 0)
  return VAR_29;
 VAR_27->port = FUNC_6(VAR_27->pci, 0);

 VAR_27->iobase = FUNC_2(VAR_27->port, VAR_12);
 if (!VAR_27->iobase) {
  FUNC_1(VAR_27->card->dev,
   "unable to remap memory region 0x%lx-0x%lx\n",
   VAR_27->port, VAR_27->port + VAR_12 - 1);
  return -VAR_1;
 }

 if (FUNC_7(VAR_28->irq, VAR_24, VAR_2,
   VAR_3, VAR_27)) {
  FUNC_1(VAR_27->card->dev, "unable to grab IRQ %d\n", VAR_28->irq);
  return -VAR_0;
 }
 VAR_27->irq = VAR_28->irq;


 FUNC_4(VAR_28, 8, &VAR_27->rev);


 if ((VAR_29 = FUNC_8(VAR_27->card, "Digi96 IEC958", 0,
          1, 1, &VAR_27->spdif_pcm)) < 0)
 {
  return VAR_29;
 }
 VAR_27->spdif_pcm->private_data = VAR_27;
 VAR_27->spdif_pcm->private_free = VAR_23;
 FUNC_16(VAR_27->spdif_pcm->name, "Digi96 IEC958");
 FUNC_9(VAR_27->spdif_pcm, VAR_19, &VAR_26);
 FUNC_9(VAR_27->spdif_pcm, VAR_18, &VAR_21);

 VAR_27->spdif_pcm->info_flags = 0;


 if (VAR_28->device == VAR_4) {

  VAR_27->adat_pcm = ((void*)0);
 } else {
  if ((VAR_29 = FUNC_8(VAR_27->card, "Digi96 ADAT", 1,
           1, 1, &VAR_27->adat_pcm)) < 0)
  {
   return VAR_29;
  }
  VAR_27->adat_pcm->private_data = VAR_27;
  VAR_27->adat_pcm->private_free = VAR_22;
  FUNC_16(VAR_27->adat_pcm->name, "Digi96 ADAT");
  FUNC_9(VAR_27->adat_pcm, VAR_19, &VAR_25);
  FUNC_9(VAR_27->adat_pcm, VAR_18, &VAR_20);

  VAR_27->adat_pcm->info_flags = 0;
 }

 VAR_27->playback_periodsize = 0;
 VAR_27->capture_periodsize = 0;


 FUNC_14(VAR_27, VAR_13);


 VAR_27->wcreg =
  VAR_14 |
  VAR_17 |
  VAR_16 |
  VAR_15;

 VAR_27->areg = VAR_6;

 FUNC_17(VAR_27->wcreg, VAR_27->iobase + VAR_9);
 FUNC_17(VAR_27->areg, VAR_27->iobase + VAR_8);


 FUNC_17(VAR_27->areg | VAR_7,
        VAR_27->iobase + VAR_8);
 FUNC_17(VAR_27->areg, VAR_27->iobase + VAR_8);


 FUNC_13(VAR_27);
 VAR_27->areg |= VAR_5;
 FUNC_17(VAR_27->areg, VAR_27->iobase + VAR_8);


 FUNC_17(0, VAR_27->iobase + VAR_10);
 FUNC_17(0, VAR_27->iobase + VAR_11);


 VAR_27->vol[0] = VAR_27->vol[1] = 0;
 if (FUNC_0(VAR_27)) {
  FUNC_10(VAR_27);
 }


 if ((VAR_29 = FUNC_11(VAR_27->card, VAR_27)) < 0) {
  return VAR_29;
 }


 FUNC_12(VAR_27);

 return 0;
}
