
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sonicvibes {scalar_t__ irq; int pci; int res_dmac; int res_dmaa; int dmac_port; int dmaa_port; } ;


 int FUNC_0 (scalar_t__,struct sonicvibes*) ;
 int FUNC_1 (struct sonicvibes*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sonicvibes*) ;

__attribute__((used)) static int FUNC_7(struct sonicvibes *VAR_0)
{
 FUNC_6(VAR_0);
 FUNC_4(VAR_0->pci, 0x40, VAR_0->dmaa_port);
 FUNC_4(VAR_0->pci, 0x48, VAR_0->dmac_port);
 if (VAR_0->irq >= 0)
  FUNC_0(VAR_0->irq, VAR_0);
 FUNC_5(VAR_0->res_dmaa);
 FUNC_5(VAR_0->res_dmac);
 FUNC_3(VAR_0->pci);
 FUNC_2(VAR_0->pci);
 FUNC_1(VAR_0);
 return 0;
}
