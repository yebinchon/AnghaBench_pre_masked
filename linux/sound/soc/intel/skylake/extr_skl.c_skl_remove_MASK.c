
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skl_dev {int nhlt; int probe_work; } ;
struct pci_dev {int dev; } ;
struct hdac_bus {int dummy; } ;


 struct skl_dev* FUNC_0 (struct hdac_bus*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ) ;
 struct hdac_bus* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct skl_dev*) ;
 int FUNC_7 (struct skl_dev*) ;
 int FUNC_8 (struct hdac_bus*) ;
 int FUNC_9 (struct skl_dev*) ;
 int FUNC_10 (struct skl_dev*) ;
 int FUNC_11 (struct skl_dev*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct hdac_bus*) ;

__attribute__((used)) static void FUNC_14(struct pci_dev *VAR_0)
{
 struct hdac_bus *VAR_1 = FUNC_4(VAR_0);
 struct skl_dev *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(&VAR_2->probe_work);

 FUNC_5(&VAR_0->dev);


 FUNC_13(VAR_1);

 FUNC_12(&VAR_0->dev);
 FUNC_9(VAR_2);
 FUNC_10(VAR_2);
 FUNC_7(VAR_2);
 FUNC_6(VAR_2);
 FUNC_11(VAR_2);
 FUNC_3(VAR_2->nhlt);
 FUNC_8(VAR_1);
 FUNC_2(&VAR_0->dev, ((void*)0));
}
