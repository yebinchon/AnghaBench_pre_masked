
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skl_dev {struct pci_dev* pci; } ;
struct pci_dev {int dummy; } ;
struct hdac_bus {int num_streams; int dev; int irq; int ppcap; int * remap_addr; int addr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct skl_dev* FUNC_1 (struct hdac_bus*) ;
 int FUNC_2 (int ,char*,unsigned short) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int * FUNC_6 (struct pci_dev*,int ) ;
 int FUNC_7 (struct pci_dev*,char*) ;
 int FUNC_8 (struct pci_dev*,int ) ;
 int FUNC_9 (struct pci_dev*) ;
 scalar_t__ FUNC_10 (struct hdac_bus*,int ) ;
 int FUNC_11 (struct hdac_bus*) ;
 int FUNC_12 (struct hdac_bus*,int) ;
 int FUNC_13 (struct skl_dev*) ;
 int FUNC_14 (struct hdac_bus*) ;
 int FUNC_15 (struct hdac_bus*) ;
 int FUNC_16 (struct hdac_bus*,int) ;
 unsigned short FUNC_17 (struct hdac_bus*,int ) ;
 int FUNC_18 (struct hdac_bus*,int,int,int ) ;
 int FUNC_19 (int ) ;

__attribute__((used)) static int FUNC_20(struct hdac_bus *VAR_7)
{
 struct skl_dev *VAR_8 = FUNC_1(VAR_7);
 struct pci_dev *VAR_9 = VAR_8->pci;
 int VAR_10;
 unsigned short VAR_11;
 int VAR_12, VAR_13, VAR_14;

 VAR_10 = FUNC_7(VAR_9, "Skylake HD audio");
 if (VAR_10 < 0)
  return VAR_10;

 VAR_7->addr = FUNC_8(VAR_9, 0);
 VAR_7->remap_addr = FUNC_6(VAR_9, 0);
 if (VAR_7->remap_addr == ((void*)0)) {
  FUNC_3(VAR_7->dev, "ioremap error\n");
  return -VAR_3;
 }

 FUNC_16(VAR_7, 1);

 FUNC_15(VAR_7);


 if (!VAR_7->ppcap) {
  FUNC_3(VAR_7->dev, "bus ppcap not set, HDaudio or DSP not present?\n");
  return -VAR_2;
 }

 if (FUNC_10(VAR_7, 0) < 0)
  return -VAR_0;

 FUNC_9(VAR_9);
 FUNC_19(VAR_7->irq);

 VAR_11 = FUNC_17(VAR_7, VAR_4);
 FUNC_2(VAR_7->dev, "chipset global capabilities = 0x%x\n", VAR_11);


 VAR_12 = (VAR_11 >> 8) & 0x0f;
 VAR_13 = (VAR_11 >> 12) & 0x0f;

 if (!VAR_13 && !VAR_12) {
  FUNC_3(VAR_7->dev, "no streams found in GCAP definitions?\n");
  return -VAR_1;
 }

 VAR_7->num_streams = VAR_12 + VAR_13;


 if (!FUNC_5(VAR_7->dev, FUNC_0(64))) {
  FUNC_4(VAR_7->dev, FUNC_0(64));
 } else {
  FUNC_5(VAR_7->dev, FUNC_0(32));
  FUNC_4(VAR_7->dev, FUNC_0(32));
 }


 FUNC_18
  (VAR_7, 0, VAR_12, VAR_5);
 VAR_14 = VAR_12;
 FUNC_18
  (VAR_7, VAR_14, VAR_13, VAR_6);

 VAR_10 = FUNC_14(VAR_7);
 if (VAR_10 < 0)
  return VAR_10;


 FUNC_13(VAR_8);
 FUNC_11(VAR_7);

 return FUNC_12(VAR_7, 1);
}
