
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct rme32 {int irq; int wcreg; int * playback_substream; int * capture_substream; TYPE_1__* card; scalar_t__ iobase; scalar_t__ capture_periodsize; scalar_t__ playback_periodsize; TYPE_2__* adat_pcm; scalar_t__ fullduplex_mode; TYPE_2__* spdif_pcm; int rev; scalar_t__ port; struct pci_dev* pci; int lock; } ;
struct pci_dev {int irq; scalar_t__ device; } ;
struct TYPE_7__ {void* info_flags; int name; int private_free; struct rme32* private_data; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int ,char*,int,...) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,int,int *) ;
 int FUNC_4 (struct pci_dev*,char*) ;
 scalar_t__ FUNC_5 (struct pci_dev*,int ) ;
 scalar_t__ FUNC_6 (int,int ,int ,int ,struct rme32*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*,int ,int ,int ,int ) ;
 int FUNC_9 (TYPE_1__*,char*,int,int,int,TYPE_2__**) ;
 int FUNC_10 (TYPE_2__*,int ,int *) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_11 (TYPE_1__*,struct rme32*) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_12 (struct rme32*,int ) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_13 (struct rme32*) ;
 int FUNC_14 (struct rme32*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ,char*) ;
 int FUNC_17 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_18(struct rme32 *VAR_30)
{
 struct pci_dev *VAR_31 = VAR_30->pci;
 int VAR_32;

 VAR_30->irq = -1;
 FUNC_15(&VAR_30->lock);

 if ((VAR_32 = FUNC_2(VAR_31)) < 0)
  return VAR_32;

 if ((VAR_32 = FUNC_4(VAR_31, "RME32")) < 0)
  return VAR_32;
 VAR_30->port = FUNC_5(VAR_30->pci, 0);

 VAR_30->iobase = FUNC_1(VAR_30->port, VAR_9);
 if (!VAR_30->iobase) {
  FUNC_0(VAR_30->card->dev,
   "unable to remap memory region 0x%lx-0x%lx\n",
      VAR_30->port, VAR_30->port + VAR_9 - 1);
  return -VAR_1;
 }

 if (FUNC_6(VAR_31->irq, VAR_25, VAR_3,
   VAR_4, VAR_30)) {
  FUNC_0(VAR_30->card->dev, "unable to grab IRQ %d\n", VAR_31->irq);
  return -VAR_0;
 }
 VAR_30->irq = VAR_31->irq;


 FUNC_3(VAR_31, 8, &VAR_30->rev);


 if ((VAR_32 = FUNC_9(VAR_30->card, "Digi32 IEC958", 0, 1, 1, &VAR_30->spdif_pcm)) < 0) {
  return VAR_32;
 }
 VAR_30->spdif_pcm->private_data = VAR_30;
 VAR_30->spdif_pcm->private_free = VAR_24;
 FUNC_16(VAR_30->spdif_pcm->name, "Digi32 IEC958");
 if (VAR_30->fullduplex_mode) {
  FUNC_10(VAR_30->spdif_pcm, VAR_18,
    &VAR_28);
  FUNC_10(VAR_30->spdif_pcm, VAR_17,
    &VAR_21);
  FUNC_8(VAR_30->spdif_pcm, VAR_14,
            FUNC_7(VAR_2),
            0, VAR_10);
  VAR_30->spdif_pcm->info_flags = VAR_16;
 } else {
  FUNC_10(VAR_30->spdif_pcm, VAR_18,
    &VAR_29);
  FUNC_10(VAR_30->spdif_pcm, VAR_17,
    &VAR_22);
  VAR_30->spdif_pcm->info_flags = VAR_15;
 }


 if ((VAR_31->device == VAR_5) ||
     (VAR_31->device == VAR_6)) {

  VAR_30->adat_pcm = ((void*)0);
 }
 else {
  if ((VAR_32 = FUNC_9(VAR_30->card, "Digi32 ADAT", 1,
           1, 1, &VAR_30->adat_pcm)) < 0)
  {
   return VAR_32;
  }
  VAR_30->adat_pcm->private_data = VAR_30;
  VAR_30->adat_pcm->private_free = VAR_23;
  FUNC_16(VAR_30->adat_pcm->name, "Digi32 ADAT");
  if (VAR_30->fullduplex_mode) {
   FUNC_10(VAR_30->adat_pcm, VAR_18,
     &VAR_26);
   FUNC_10(VAR_30->adat_pcm, VAR_17,
     &VAR_19);
   FUNC_8(VAR_30->adat_pcm, VAR_14,
             FUNC_7(VAR_2),
             0, VAR_10);
   VAR_30->adat_pcm->info_flags = VAR_16;
  } else {
   FUNC_10(VAR_30->adat_pcm, VAR_18,
     &VAR_27);
   FUNC_10(VAR_30->adat_pcm, VAR_17,
     &VAR_20);
   VAR_30->adat_pcm->info_flags = VAR_15;
  }
 }


 VAR_30->playback_periodsize = 0;
 VAR_30->capture_periodsize = 0;


 FUNC_12(VAR_30, 0);


        FUNC_14(VAR_30);


 FUNC_17(0, VAR_30->iobase + VAR_8);


 VAR_30->wcreg = VAR_13 |
  VAR_11 |
  VAR_12;
 FUNC_17(VAR_30->wcreg, VAR_30->iobase + VAR_7);



 if ((VAR_32 = FUNC_11(VAR_30->card, VAR_30)) < 0) {
  return VAR_32;
 }


 FUNC_13(VAR_30);

 VAR_30->capture_substream = ((void*)0);
 VAR_30->playback_substream = ((void*)0);

 return 0;
}
