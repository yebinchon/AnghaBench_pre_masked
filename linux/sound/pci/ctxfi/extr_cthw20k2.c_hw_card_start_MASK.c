
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int irq; int dev; } ;
struct hw {scalar_t__ io_base; int irq; TYPE_1__* card; int mem_base; struct pci_dev* pci; } ;
struct TYPE_2__ {int dev; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int const) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 unsigned int FUNC_4 (struct hw*,int ) ;
 int FUNC_5 (struct hw*,int ,unsigned int) ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (struct pci_dev*) ;
 int FUNC_8 (struct pci_dev*) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (struct pci_dev*,char*) ;
 int FUNC_11 (struct pci_dev*,int) ;
 scalar_t__ FUNC_12 (struct pci_dev*,int) ;
 int FUNC_13 (struct pci_dev*) ;
 int FUNC_14 (int ,int ,int ,int ,struct hw*) ;
 int FUNC_15 (unsigned int*,int ,int ) ;

__attribute__((used)) static int FUNC_16(struct hw *VAR_7)
{
 int VAR_8 = 0;
 struct pci_dev *VAR_9 = VAR_7->pci;
 unsigned int VAR_10;
 const unsigned int VAR_11 = VAR_0;

 VAR_8 = FUNC_8(VAR_9);
 if (VAR_8 < 0)
  return VAR_8;


 if (!FUNC_3(&VAR_9->dev, FUNC_0(VAR_11))) {
  FUNC_2(&VAR_9->dev, FUNC_0(VAR_11));
 } else {
  FUNC_3(&VAR_9->dev, FUNC_0(32));
  FUNC_2(&VAR_9->dev, FUNC_0(32));
 }

 if (!VAR_7->io_base) {
  VAR_8 = FUNC_10(VAR_9, "XFi");
  if (VAR_8 < 0)
   goto error1;

  VAR_7->io_base = FUNC_12(VAR_7->pci, 2);
  VAR_7->mem_base = FUNC_6(VAR_7->io_base,
           FUNC_11(VAR_7->pci, 2));
  if (!VAR_7->mem_base) {
   VAR_8 = -VAR_1;
   goto error2;
  }
 }


 VAR_10 = FUNC_4(VAR_7, VAR_3);
 FUNC_15(&VAR_10, VAR_2, 0);
 FUNC_5(VAR_7, VAR_3, VAR_10);

 if (VAR_7->irq < 0) {
  VAR_8 = FUNC_14(VAR_9->irq, VAR_6, VAR_4,
      VAR_5, VAR_7);
  if (VAR_8 < 0) {
   FUNC_1(VAR_7->card->dev,
    "XFi: Cannot get irq %d\n", VAR_9->irq);
   goto error2;
  }
  VAR_7->irq = VAR_9->irq;
 }

 FUNC_13(VAR_9);

 return 0;




error2:
 FUNC_9(VAR_9);
 VAR_7->io_base = 0;
error1:
 FUNC_7(VAR_9);
 return VAR_8;
}
