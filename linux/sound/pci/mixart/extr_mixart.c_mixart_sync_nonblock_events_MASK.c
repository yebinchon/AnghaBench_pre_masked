
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mixart_mgr {TYPE_1__* pci; int msg_processed; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 unsigned long VAR_2 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct mixart_mgr *VAR_3)
{
 unsigned long VAR_4 = VAR_2 + VAR_1;
 while (FUNC_0(&VAR_3->msg_processed) > 0) {
  if (FUNC_3(VAR_2, VAR_4)) {
   FUNC_1(&VAR_3->pci->dev,
    "mixart: cannot process nonblock events!\n");
   return -VAR_0;
  }
  FUNC_2(1);
 }
 return 0;
}
