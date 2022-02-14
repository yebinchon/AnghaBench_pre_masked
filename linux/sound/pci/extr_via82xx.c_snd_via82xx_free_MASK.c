
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct via82xx {scalar_t__ irq; unsigned int num_devs; scalar_t__ chip_type; int pci; int old_legacy_cfg; int old_legacy; int mpu_res; int * devs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,struct via82xx*) ;
 int FUNC_1 (struct via82xx*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct via82xx*) ;
 int FUNC_7 (struct via82xx*,int *) ;

__attribute__((used)) static int FUNC_8(struct via82xx *VAR_3)
{
 unsigned int VAR_4;

 if (VAR_3->irq < 0)
  goto __end_hw;

 for (VAR_4 = 0; VAR_4 < VAR_3->num_devs; VAR_4++)
  FUNC_7(VAR_3, &VAR_3->devs[VAR_4]);

 if (VAR_3->irq >= 0)
  FUNC_0(VAR_3->irq, VAR_3);
 __end_hw:
 FUNC_5(VAR_3->mpu_res);
 FUNC_3(VAR_3->pci);

 if (VAR_3->chip_type == VAR_0) {
  FUNC_6(VAR_3);
  FUNC_4(VAR_3->pci, VAR_1, VAR_3->old_legacy);
  FUNC_4(VAR_3->pci, VAR_2, VAR_3->old_legacy_cfg);
 }
 FUNC_2(VAR_3->pci);
 FUNC_1(VAR_3);
 return 0;
}
