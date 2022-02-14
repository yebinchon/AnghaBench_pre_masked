
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int irq; int dev; } ;
struct hw {scalar_t__ model; void* io_base; int irq; TYPE_1__* card; struct pci_dev* pci; } ;
struct TYPE_2__ {int dev; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned int const) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (struct pci_dev*,char*) ;
 void* FUNC_8 (struct pci_dev*,int) ;
 int FUNC_9 (struct pci_dev*) ;
 int FUNC_10 (int ,int ,int ,int ,struct hw*) ;
 int FUNC_11 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_12(struct hw *VAR_5)
{
 int VAR_6;
 struct pci_dev *VAR_7 = VAR_5->pci;
 const unsigned int VAR_8 = VAR_0;

 VAR_6 = FUNC_5(VAR_7);
 if (VAR_6 < 0)
  return VAR_6;


 if (!FUNC_3(&VAR_7->dev, FUNC_0(VAR_8))) {
  FUNC_2(&VAR_7->dev, FUNC_0(VAR_8));
 } else {
  FUNC_3(&VAR_7->dev, FUNC_0(32));
  FUNC_2(&VAR_7->dev, FUNC_0(32));
 }

 if (!VAR_5->io_base) {
  VAR_6 = FUNC_7(VAR_7, "XFi");
  if (VAR_6 < 0)
   goto error1;

  if (VAR_5->model == VAR_1)
   VAR_5->io_base = FUNC_8(VAR_7, 5);
  else
   VAR_5->io_base = FUNC_8(VAR_7, 0);

 }


 if (VAR_5->model == VAR_1) {
  VAR_6 = FUNC_11(VAR_7);
  if (VAR_6)
   goto error2;

 }

 if (VAR_5->irq < 0) {
  VAR_6 = FUNC_10(VAR_7->irq, VAR_4, VAR_2,
      VAR_3, VAR_5);
  if (VAR_6 < 0) {
   FUNC_1(VAR_5->card->dev,
    "XFi: Cannot get irq %d\n", VAR_7->irq);
   goto error2;
  }
  VAR_5->irq = VAR_7->irq;
 }

 FUNC_9(VAR_7);

 return 0;

error2:
 FUNC_6(VAR_7);
 VAR_5->io_base = 0;
error1:
 FUNC_4(VAR_7);
 return VAR_6;
}
