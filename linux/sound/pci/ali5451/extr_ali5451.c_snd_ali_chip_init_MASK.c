
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_ali {scalar_t__ revision; int spdif_mask; int num_of_codecs; TYPE_1__* card; scalar_t__ spdif_support; void* ac97_ext_status; void* ac97_ext_id; int pci; struct pci_dev* pci_m7101; struct pci_dev* pci_m1533; } ;
struct pci_dev {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct snd_ali*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (struct pci_dev*,int,unsigned char*) ;
 int FUNC_7 (int ,int,unsigned int*) ;
 int FUNC_8 (struct pci_dev*,int,unsigned char) ;
 int FUNC_9 (int ,int,unsigned int) ;
 void* FUNC_10 (struct snd_ali*,int ,int ) ;
 int FUNC_11 (struct snd_ali*) ;
 scalar_t__ FUNC_12 (struct snd_ali*) ;

__attribute__((used)) static int FUNC_13(struct snd_ali *VAR_13)
{
 unsigned int VAR_14;
 unsigned char VAR_15;
 struct pci_dev *VAR_16;

 FUNC_1(VAR_13->card->dev, "chip initializing ...\n");

 if (FUNC_12(VAR_13)) {
  FUNC_2(VAR_13->card->dev, "ali_chip_init: reset 5451 error.\n");
  return -1;
 }

 if (VAR_13->revision == VAR_2) {
         VAR_16 = VAR_13->pci_m1533;
  FUNC_6(VAR_16, 0x59, &VAR_15);
  VAR_15 |= 0x80;
  FUNC_8(VAR_16, 0x59, VAR_15);

  VAR_16 = VAR_13->pci_m7101;
  FUNC_6(VAR_16, 0xb8, &VAR_15);
  VAR_15 |= 0x20;
  FUNC_8(VAR_16, 0xB8, VAR_15);
 }

 FUNC_7(VAR_13->pci, 0x44, &VAR_14);
 VAR_14 &= 0xff00ff00;
 VAR_14 |= 0x000800aa;
 FUNC_9(VAR_13->pci, 0x44, VAR_14);

 FUNC_5(0x80000001, FUNC_0(VAR_13, VAR_5));
 FUNC_5(0x00000000, FUNC_0(VAR_13, VAR_4));
 FUNC_5(0xffffffff, FUNC_0(VAR_13, VAR_3));
 FUNC_5(0x00000000, FUNC_0(VAR_13, VAR_12));
 FUNC_4(0x10, FUNC_0(VAR_13, VAR_6));

 VAR_13->ac97_ext_id = FUNC_10(VAR_13, 0, VAR_0);
 VAR_13->ac97_ext_status = FUNC_10(VAR_13, 0,
          VAR_1);
 if (VAR_13->spdif_support) {
  FUNC_11(VAR_13);
  VAR_13->spdif_mask = 0x00000002;
 }

 VAR_13->num_of_codecs = 1;


 if (FUNC_3(FUNC_0(VAR_13, VAR_7)) & VAR_8) {
  VAR_13->num_of_codecs++;
  FUNC_5(FUNC_3(FUNC_0(VAR_13, VAR_7)) |
       (VAR_10 | VAR_9 |
        VAR_11),
       FUNC_0(VAR_13, VAR_7));
 }

 FUNC_1(VAR_13->card->dev, "chip initialize succeed.\n");
 return 0;

}
