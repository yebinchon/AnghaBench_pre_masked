
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int initialized; int eax; scalar_t__ ebx; } ;
typedef TYPE_1__ zend_cpu_info ;


 int FUNC_0 (int,int ,TYPE_1__*) ;
 TYPE_1__ VAR_0 ;

void FUNC_1(void)
{
 if (!VAR_0.initialized) {
  zend_cpu_info VAR_1;
  int VAR_2;

  VAR_0.initialized = 1;
  FUNC_0(0, 0, &VAR_0);
  VAR_2 = VAR_0.eax;
  if (VAR_2 == 0) {
   return;
  }

  FUNC_0(1, 0, &VAR_0);


  if (VAR_2 >= 7) {
   FUNC_0(7, 0, &VAR_1);
   VAR_0.ebx = VAR_1.ebx;
  } else {
   VAR_0.ebx = 0;
  }
 }
}
