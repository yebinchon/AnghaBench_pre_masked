
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sis7019 {scalar_t__ irq; int pci; int ioaddr; scalar_t__ ioport; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,struct sis7019*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sis7019*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct sis7019 *VAR_3)
{


 FUNC_2(VAR_1, VAR_3->ioport + VAR_0);
 FUNC_6(25);
 FUNC_2(0, VAR_3->ioport + VAR_0);
 FUNC_2(0, VAR_3->ioport + VAR_2);



 if (VAR_3->irq >= 0)
  FUNC_0(VAR_3->irq, VAR_3);

 FUNC_1(VAR_3->ioaddr);
 FUNC_4(VAR_3->pci);
 FUNC_3(VAR_3->pci);
 FUNC_5(VAR_3);
 return 0;
}
