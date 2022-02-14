
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ULONG_PTR ;
struct TYPE_7__ {int ExceptionCode; } ;
struct TYPE_8__ {TYPE_1__ ExceptionRecord; } ;
struct TYPE_9__ {TYPE_2__ Exception; } ;
struct TYPE_10__ {int NewState; TYPE_3__ u; int Thread; } ;
typedef int PETHREAD ;
typedef TYPE_4__ DBGKD_ANY_WAIT_STATE_CHANGE ;


 TYPE_4__ VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,...) ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static
void
FUNC_6(DBGKD_ANY_WAIT_STATE_CHANGE* VAR_7)
{
    VAR_2 = VAR_4;

    switch (VAR_7->NewState)
    {
    case 128:
    case 129:
    {
        PETHREAD VAR_8 = (PETHREAD)(ULONG_PTR)VAR_7->Thread;

        VAR_0 = *VAR_7;
        FUNC_0("Exception 0x%08x in thread p%p.%p.\n",
            VAR_7->u.Exception.ExceptionRecord.ExceptionCode,
            FUNC_2(VAR_8),
            FUNC_1(VAR_8));

        VAR_6 = FUNC_5(FUNC_1(VAR_8));



        VAR_5 = FUNC_4(FUNC_2(VAR_8));

        FUNC_3();

        VAR_3 = VAR_1;
        break;
    }
    default:
        FUNC_0("Unknown StateChange %u.\n", VAR_7->NewState);
        while (1);
    }
}
