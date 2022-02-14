
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_3__ {int error_code; int eip; int eflags; int cs; } ;
typedef int* PULONG ;
typedef scalar_t__ PEPROCESS ;
typedef TYPE_1__ FRAME ;


 int* FUNC_0 (int) ;
 int* FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,int ) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

ULONG FUNC_7(FRAME* VAR_7,ULONG VAR_8)
{
 PEPROCESS VAR_9;

    FUNC_3();

 FUNC_2((0,"HandleInDebuggerFault(): ###### page fault @ %.8X while inside debugger, eip: %x\n",VAR_8, VAR_7->eip));


 if(VAR_4)
 {
     FUNC_2((0,"HandleInDebuggerFault(): ###### page fault @ %.8X while in page fault handler\n",VAR_8));

        FUNC_2((0,"!!! machine is halted !!!\n"));
        __asm__ __volatile__ ("hlt");

        FUNC_6();
  return 0;
 }

 VAR_4 = VAR_1;



    VAR_9 = FUNC_5();

    FUNC_2((0,"%.8X (%.4X:%.8X %.8X %s %s %s task=%.8X )\n",
        VAR_8,
        VAR_7->cs,
        VAR_7->eip,
        VAR_7->eflags,
        (VAR_7->error_code&1)?"PLP":"NP",
        (VAR_7->error_code&2)?"WRITE":"READ",
        (VAR_7->error_code&4)?"USER-MODE":"KERNEL-MODE",
        (ULONG)VAR_9));

 if(!VAR_5)
    {
     FUNC_2((0,"HandleInDebuggerFault(): unexpected pagefault in command handler!\n",VAR_8));
    }
 else
    {
     FUNC_2((0,"HandleInDebuggerFault(): unexpected pagefault in command handler while in PrintkCallback()!\n",VAR_8));
    }

    if(VAR_9)
    {
     PULONG VAR_10;
     PULONG VAR_11;

        VAR_10 = FUNC_0(VAR_8);

        FUNC_2((0,"PGD for %.8X @ %.8X = %.8X\n",VAR_8,(ULONG)VAR_10,(ULONG)(*VAR_10) ));

        if(VAR_10 && (*VAR_10)&VAR_3)
        {

            if(!((*VAR_10)&VAR_2))
            {
                VAR_11 = FUNC_1(VAR_8);
                if(VAR_11)
                {
                    FUNC_2((0,"PTE for %.8X @ %.8X = %.8X\n",VAR_8,(ULONG)VAR_11,(ULONG)(*VAR_11) ));
                }
            }
        }
    }

    FUNC_4(VAR_7->eip,VAR_0,VAR_6);

    FUNC_2((0,"!!! machine is halted !!!\n"));
    __asm__ __volatile__ ("hlt");

    FUNC_6();

 return 2;
}
