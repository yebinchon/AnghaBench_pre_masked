
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skl_dev {int pci; scalar_t__ init_done; } ;
struct hdac_bus {scalar_t__ irq; scalar_t__ remap_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 struct skl_dev* FUNC_1 (struct hdac_bus*) ;
 int FUNC_2 (scalar_t__,void*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct hdac_bus*) ;
 int FUNC_7 (struct hdac_bus*,int ,int) ;
 int FUNC_8 (struct hdac_bus*) ;
 int FUNC_9 (struct hdac_bus*) ;
 int FUNC_10 (struct hdac_bus*) ;
 int FUNC_11 (struct hdac_bus*) ;
 int FUNC_12 (struct hdac_bus*) ;

__attribute__((used)) static int FUNC_13(struct hdac_bus *VAR_2)
{
 struct skl_dev *VAR_3 = FUNC_1(VAR_2);

 VAR_3->init_done = 0;

 FUNC_9(VAR_2);

 if (VAR_2->irq >= 0)
  FUNC_2(VAR_2->irq, (void *)VAR_2);
 FUNC_6(VAR_2);
 FUNC_12(VAR_2);
 FUNC_11(VAR_2);

 if (VAR_2->remap_addr)
  FUNC_3(VAR_2->remap_addr);

 FUNC_5(VAR_3->pci);
 FUNC_4(VAR_3->pci);

 FUNC_8(VAR_2);

 if (FUNC_0(VAR_0)) {
  FUNC_7(VAR_2, VAR_1, 0);
  FUNC_10(VAR_2);
 }

 return 0;
}
