
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct pci_dev*) ;
 struct pci_dev* FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_5, int VAR_6)
{
 struct pci_dev *VAR_7 = ((void*)0);


 if (VAR_6 == 255) {

  VAR_7 = FUNC_2(VAR_4,
   VAR_2, ((void*)0));

  if (VAR_7 == ((void*)0)) {
   VAR_7 = FUNC_2(VAR_4,
    VAR_1, ((void*)0));

   if (VAR_7 == ((void*)0))
    VAR_7 = FUNC_2(VAR_3,
     VAR_0, ((void*)0));
  }
  if (VAR_7) {
   FUNC_0(&VAR_5->dev,
     "Activating latency workaround...\n");
   FUNC_4(VAR_5);
   FUNC_3(VAR_7);
  }
 } else {
  if (VAR_6 & 0x1)
   FUNC_4(VAR_5);
  if ((VAR_6 & 0x2) && (VAR_7 = FUNC_2(VAR_4,
    VAR_2, ((void*)0))))
   FUNC_3(VAR_7);
  if ((VAR_6 & 0x4) && (VAR_7 = FUNC_2(VAR_4,
    VAR_1, ((void*)0))))
   FUNC_3(VAR_7);
  if ((VAR_6 & 0x8) && (VAR_7 = FUNC_2(VAR_3,
    VAR_0, ((void*)0))))
   FUNC_3(VAR_7);
 }
 FUNC_1(VAR_7);
}
