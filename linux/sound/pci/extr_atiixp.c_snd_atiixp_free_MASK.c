
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct atiixp {scalar_t__ irq; int pci; int remap_addr; } ;


 int FUNC_0 (scalar_t__,struct atiixp*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct atiixp*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct atiixp*) ;

__attribute__((used)) static int FUNC_6(struct atiixp *VAR_0)
{
 if (VAR_0->irq < 0)
  goto __hw_end;
 FUNC_5(VAR_0);

      __hw_end:
 if (VAR_0->irq >= 0)
  FUNC_0(VAR_0->irq, VAR_0);
 FUNC_1(VAR_0->remap_addr);
 FUNC_4(VAR_0->pci);
 FUNC_3(VAR_0->pci);
 FUNC_2(VAR_0);
 return 0;
}
