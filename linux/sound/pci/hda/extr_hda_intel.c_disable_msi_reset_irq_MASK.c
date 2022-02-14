
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_bus {int irq; } ;
struct azx {scalar_t__ msi; int pci; } ;


 int FUNC_0 (struct azx*,int) ;
 struct hdac_bus* FUNC_1 (struct azx*) ;
 int FUNC_2 (int,struct azx*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct azx *VAR_0)
{
 struct hdac_bus *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;

 FUNC_2(VAR_1->irq, VAR_0);
 VAR_1->irq = -1;
 FUNC_3(VAR_0->pci);
 VAR_0->msi = 0;
 VAR_2 = FUNC_0(VAR_0, 1);
 if (VAR_2 < 0)
  return VAR_2;

 return 0;
}
