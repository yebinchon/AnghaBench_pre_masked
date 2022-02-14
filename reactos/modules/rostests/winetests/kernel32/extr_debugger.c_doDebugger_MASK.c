
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int argc; void* detach_rc; void* detach_err; scalar_t__ pid; void* nokill_rc; void* nokill_err; void* debug_rc; void* debug_err; void* attach_rc; void* attach_err; } ;
typedef TYPE_1__ debugger_blackbox_t ;
typedef int blackbox ;
typedef scalar_t__ INT_PTR ;
typedef int * HANDLE ;


 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 void* FUNC_2 () ;
 int VAR_1 ;
 void* FUNC_3 (int *) ;
 void* VAR_2 ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (char*) ;
 int FUNC_6 (char const*,int **,int **) ;
 int * VAR_3 ;
 void* FUNC_7 (scalar_t__) ;
 void* FUNC_8 (int ) ;
 int FUNC_9 (char const*,TYPE_1__*,int) ;
 scalar_t__ FUNC_10 (int ,char*) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static void FUNC_12(int VAR_4, char** VAR_5)
{
    const char* VAR_6;
    debugger_blackbox_t VAR_7;
    HANDLE VAR_8 = 0, VAR_9 = 0, VAR_10;

    VAR_7.argc=VAR_4;
    VAR_6=(VAR_4 >= 4 ? VAR_5[3] : ((void*)0));
    VAR_7.pid=(VAR_4 >= 5 ? FUNC_5(VAR_5[4]) : 0);

    VAR_7.attach_err=0;
    if (FUNC_10(VAR_3[2], "attach"))
    {
        VAR_7.attach_rc=FUNC_0(VAR_7.pid);
        if (!VAR_7.attach_rc)
            VAR_7.attach_err=FUNC_2();
    }
    else
        VAR_7.attach_rc=VAR_2;

    VAR_10=(VAR_4 >= 6 ? (HANDLE)(INT_PTR)FUNC_5(VAR_5[5]) : ((void*)0));
    VAR_7.debug_err=0;
    if (VAR_10 && FUNC_10(VAR_3[2], "event"))
    {
        VAR_7.debug_rc=FUNC_3(VAR_10);
        if (!VAR_7.debug_rc)
            VAR_7.debug_err=FUNC_2();
    }
    else
        VAR_7.debug_rc=VAR_2;

    if (VAR_6)
    {
        FUNC_6(VAR_6, &VAR_8, &VAR_9);
    }

    if (FUNC_10(VAR_3[2], "order"))
    {
        FUNC_11("debugger: waiting for the start signal...\n");
        FUNC_4(VAR_8, VAR_1);
    }

    VAR_7.nokill_err=0;
    if (FUNC_10(VAR_3[2], "nokill"))
    {
        VAR_7.nokill_rc=FUNC_8(VAR_0);
        if (!VAR_7.nokill_rc)
            VAR_7.nokill_err=FUNC_2();
    }
    else
        VAR_7.nokill_rc=VAR_2;

    VAR_7.detach_err=0;
    if (FUNC_10(VAR_3[2], "detach"))
    {
        VAR_7.detach_rc=FUNC_7(VAR_7.pid);
        if (!VAR_7.detach_rc)
            VAR_7.detach_err=FUNC_2();
    }
    else
        VAR_7.detach_rc=VAR_2;

    if (VAR_6)
    {
        FUNC_9(VAR_6, &VAR_7, sizeof(VAR_7));
    }
    FUNC_11("debugger: done debugging...\n");
    FUNC_3(VAR_9);


    FUNC_1(0xdeadbeef);
}
