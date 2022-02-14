
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int entries_dmaaddr; int * entries; } ;
struct snd_trident {int ac97_ctrl; unsigned int spdif_bits; int spdif_ctrl; TYPE_2__ tlb; TYPE_1__* card; struct pci_dev* pci; } ;
struct pci_dev {int dummy; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct snd_trident*,scalar_t__) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct snd_trident*) ;
 int FUNC_3 (int ) ;
 int VAR_8 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (unsigned int,int ) ;
 int FUNC_6 (struct pci_dev*,int,int) ;
 int FUNC_7 (struct pci_dev*,int,int ) ;
 int FUNC_8 (struct snd_trident*) ;
 scalar_t__ FUNC_9 (unsigned long,int) ;
 int FUNC_10 (int) ;

__attribute__((used)) static int FUNC_11(struct snd_trident *VAR_9)
{
 struct pci_dev *VAR_10 = VAR_9->pci;
 unsigned long VAR_11;


 FUNC_7(VAR_10, 0x40, 0);
 FUNC_6(VAR_10, 0x44, 0);
 FUNC_6(VAR_10, 0x45, 0);

 FUNC_6(VAR_10, 0x46, 1);
 FUNC_10(100);
 FUNC_6(VAR_10, 0x46, 0);
 FUNC_10(100);


 FUNC_5(0x00000001, FUNC_0(VAR_9, VAR_2));
 FUNC_10(100);
 FUNC_5(0x00000000, FUNC_0(VAR_9, VAR_2));

 VAR_11 = (VAR_8 + (VAR_1 * 3) / 4) + 1;
 do {
  if ((FUNC_3(FUNC_0(VAR_9, VAR_2)) & 0x0008) != 0)
   goto __nx_ok;
  FUNC_2(VAR_9);
 } while (FUNC_9(VAR_11, VAR_8));
 FUNC_1(VAR_9->card->dev, "AC'97 codec ready error [0x%x]\n",
  FUNC_3(FUNC_0(VAR_9, VAR_2)));
 return -VAR_0;

 __nx_ok:

 VAR_9->ac97_ctrl = 0x00000002;
 FUNC_5(VAR_9->ac97_ctrl, FUNC_0(VAR_9, VAR_2));

 FUNC_5(VAR_3, FUNC_0(VAR_9, VAR_7));

 FUNC_8(VAR_9);

 if (VAR_9->tlb.entries != ((void*)0)) {
  unsigned int VAR_12;

  VAR_12 = VAR_9->tlb.entries_dmaaddr;
  VAR_12 |= 0x00000001;
  FUNC_5(VAR_12, FUNC_0(VAR_9, VAR_6));
 } else {
  FUNC_5(0, FUNC_0(VAR_9, VAR_6));
 }

 FUNC_5(VAR_9->spdif_bits, FUNC_0(VAR_9, VAR_4));
 FUNC_4(VAR_9->spdif_ctrl, FUNC_0(VAR_9, VAR_5 + 3));

 return 0;
}
