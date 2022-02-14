
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ StackLimit; scalar_t__ StackBase; } ;
struct TYPE_4__ {scalar_t__ DeallocationStack; TYPE_1__ Tib; } ;
typedef TYPE_2__* PTEB ;
typedef int DWORD ;


 int FUNC_0 (char*,...) ;

int FUNC_1(int VAR_0, char* VAR_1[])
{
   int VAR_2;
   PTEB VAR_3;

   FUNC_0("TEB dumpper\n");
   __asm__("movl %%fs:0x18, %0\n\t"
    : "=a" (VAR_2)
    : );
   FUNC_0("fs[0x18] %x\n", VAR_2);

   VAR_3 = (PTEB)VAR_2;

   FUNC_0("StackBase: 0x%08lX\n", (DWORD)VAR_3->Tib.StackBase);
   FUNC_0("StackLimit: 0x%08lX\n", (DWORD)VAR_3->Tib.StackLimit);
   FUNC_0("DeallocationStack: 0x%08lX\n", (DWORD)VAR_3->DeallocationStack);

   return(0);
}
