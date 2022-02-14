
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int* res; int * cmds; } ;
struct hdac_bus {int reg_lock; TYPE_1__ rirb; scalar_t__ polling_mode; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 unsigned long VAR_1 ;
 unsigned long FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct hdac_bus*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (unsigned long,unsigned long) ;
 int FUNC_7 (int) ;

int FUNC_8(struct hdac_bus *VAR_2, unsigned int VAR_3,
         unsigned int *VAR_4)
{
 unsigned long VAR_5;
 unsigned long VAR_6;

 VAR_5 = VAR_1 + FUNC_1(1000);

 for (VAR_6 = 0;; VAR_6++) {
  FUNC_4(&VAR_2->reg_lock);
  if (VAR_2->polling_mode)
   FUNC_3(VAR_2);
  if (!VAR_2->rirb.cmds[VAR_3]) {
   if (VAR_4)
    *VAR_4 = VAR_2->rirb.res[VAR_3];
   FUNC_5(&VAR_2->reg_lock);
   return 0;
  }
  FUNC_5(&VAR_2->reg_lock);
  if (FUNC_6(VAR_1, VAR_5))
   break;
  if (VAR_6 > 3000)
   FUNC_2(2);
  else {
   FUNC_7(10);
   FUNC_0();
  }
 }

 return -VAR_0;
}
