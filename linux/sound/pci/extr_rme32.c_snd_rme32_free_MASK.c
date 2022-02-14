
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rme32 {int irq; int pci; scalar_t__ port; int * iobase; } ;


 int FUNC_0 (int,void*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct rme32*,int ) ;

__attribute__((used)) static void FUNC_5(void *VAR_0)
{
 struct rme32 *VAR_1 = (struct rme32 *) VAR_0;

 if (VAR_1 == ((void*)0)) {
  return;
 }
 if (VAR_1->irq >= 0) {
  FUNC_4(VAR_1, 0);
  FUNC_0(VAR_1->irq, (void *) VAR_1);
  VAR_1->irq = -1;
 }
 if (VAR_1->iobase) {
  FUNC_1(VAR_1->iobase);
  VAR_1->iobase = ((void*)0);
 }
 if (VAR_1->port) {
  FUNC_3(VAR_1->pci);
  VAR_1->port = 0;
 }
 FUNC_2(VAR_1->pci);
}
