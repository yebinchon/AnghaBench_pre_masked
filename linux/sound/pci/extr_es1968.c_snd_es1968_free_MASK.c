
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct es1968 {scalar_t__ irq; int pci; int v4l2_dev; int tea; scalar_t__ io_port; scalar_t__ input_dev; int hwvol_work; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__,struct es1968*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct es1968*) ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct es1968*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct es1968 *VAR_1)
{
 FUNC_0(&VAR_1->hwvol_work);





 if (VAR_1->io_port) {
  if (VAR_1->irq >= 0)
   FUNC_9(VAR_1->irq);
  FUNC_4(1, VAR_1->io_port + 0x04);
  FUNC_4(0, VAR_1->io_port + VAR_0);
 }






 if (VAR_1->irq >= 0)
  FUNC_1(VAR_1->irq, VAR_1);
 FUNC_7(VAR_1);
 FUNC_6(VAR_1->pci);
 FUNC_5(VAR_1->pci);
 FUNC_3(VAR_1);
 return 0;
}
