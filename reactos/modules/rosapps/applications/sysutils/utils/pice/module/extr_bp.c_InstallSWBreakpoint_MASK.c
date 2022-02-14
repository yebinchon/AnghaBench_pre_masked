
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void* ULONG ;
struct TYPE_4__ {int ucOriginalOpcode; void (* Callback ) () ;void* bPermanent; void* ulNextInstr; void* ulAddress; void* bInstalled; void* bUsed; } ;
typedef int* PUCHAR ;
typedef TYPE_1__* PSW_BP ;
typedef void* BOOLEAN ;


 int * FUNC_0 (void*) ;
 int * FUNC_1 (void*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (void**,int*) ;
 int FUNC_4 () ;
 void* VAR_0 ;
 TYPE_1__* FUNC_5 () ;
 TYPE_1__* FUNC_6 (void*) ;
 scalar_t__ FUNC_7 (void*) ;
 void* FUNC_8 (void*) ;
 int FUNC_9 () ;
 int FUNC_10 (void*,void*) ;
 void* VAR_1 ;
 int VAR_2 ;

BOOLEAN FUNC_11(ULONG VAR_3,BOOLEAN VAR_4,void (*VAR_5)(void))
{
    PSW_BP VAR_6;
    BOOLEAN VAR_7 = VAR_0;

    FUNC_4();
    FUNC_2((0,"InstallSWBreakpoint()\n"));



    if(FUNC_7(VAR_3) )
    {
        FUNC_2((0,"InstallSWBreakpoint(): %.8X is valid, writable? %d\n",VAR_3,FUNC_8(VAR_3)));
  FUNC_2((0,"pde: %x, pte: %x\n", *(FUNC_0(VAR_3)), *(FUNC_1(VAR_3))));
        if((VAR_6 = FUNC_6(VAR_3))==((void*)0))
        {
            FUNC_2((0,"InstallSWBreakpoint(): %.8X is free\n",VAR_3));
            if( (VAR_6=FUNC_5()) )
            {
    BOOLEAN VAR_8;
                FUNC_2((0,"InstallSWBreakpoint(): found empty slot\n"));
    FUNC_2((0,"InstallSWBreakpoint(): %x value: %x", VAR_3, *(PUCHAR)VAR_3));
                VAR_6->ucOriginalOpcode = *(PUCHAR)VAR_3;

    if( !( VAR_8 = FUNC_8(VAR_3) ) )
     FUNC_10(VAR_3,VAR_1);
       FUNC_2((0,"writing breakpoint\n"));
    *(PUCHAR)VAR_3 = 0xCC;
    FUNC_2((0,"restoring page access\n"));
    if( !VAR_8 )
     FUNC_10(VAR_3,VAR_0);
    VAR_6->bUsed = VAR_1;
                VAR_6->bInstalled = VAR_1;

                VAR_6->ulAddress = VAR_3;
                FUNC_3(&VAR_3,(PUCHAR)&VAR_2);
                VAR_6->ulNextInstr = VAR_3;
                VAR_6->bPermanent = VAR_4;
                if(VAR_4)
                    VAR_6->Callback = VAR_5;
    else
     VAR_6->Callback = ((void*)0);
                VAR_7 = VAR_1;
            }
        }
        else
        {
            FUNC_2((0,"InstallSWBreakpoint(): %.8X is already used\n",VAR_3));
            if(VAR_6->bPermanent)
            {
                FUNC_2((0,"InstallSWBreakpoint(): %.8X is a permanent breakpoint\n",VAR_3));
            }
        }
    }

    FUNC_9();

    return VAR_7;
}
