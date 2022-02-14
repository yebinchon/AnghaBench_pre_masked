
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rme96 {int irq; int pci; int capture_suspend_buffer; int playback_suspend_buffer; scalar_t__ port; int * iobase; int areg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,void*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct rme96*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void
FUNC_7(void *VAR_3)
{
 struct rme96 *VAR_4 = (struct rme96 *)VAR_3;

 if (!VAR_4)
         return;

 if (VAR_4->irq >= 0) {
  FUNC_4(VAR_4, VAR_2);
  VAR_4->areg &= ~VAR_0;
  FUNC_6(VAR_4->areg, VAR_4->iobase + VAR_1);
  FUNC_0(VAR_4->irq, (void *)VAR_4);
  VAR_4->irq = -1;
 }
 if (VAR_4->iobase) {
  FUNC_1(VAR_4->iobase);
  VAR_4->iobase = ((void*)0);
 }
 if (VAR_4->port) {
  FUNC_3(VAR_4->pci);
  VAR_4->port = 0;
 }




 FUNC_2(VAR_4->pci);
}
