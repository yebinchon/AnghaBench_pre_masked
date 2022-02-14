
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int member_0; int member_1; int member_2; int member_3; int member_4; int member_5; } ;
struct TYPE_5__ {TYPE_1__ member_0; } ;
typedef TYPE_2__ SID_IDENTIFIER_AUTHORITY ;
typedef int PSID ;
typedef scalar_t__ NTSTATUS ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int,int,int,int,int,int,int,int,int,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(void)
{
    NTSTATUS VAR_1;
    SID_IDENTIFIER_AUTHORITY VAR_2 = {{ 1, 2, 3, 4, 5, 6 }};
    PSID VAR_3;

    if (!&FUNC_1)
    {
        FUNC_3("RtlAllocateAndInitializeSid is not available\n");
        return;
    }

    VAR_1 = FUNC_1(&VAR_2, 0, 1, 2, 3, 4, 5, 6, 7, 8, &VAR_3);
    FUNC_0(!VAR_1, "RtlAllocateAndInitializeSid error %08x\n", VAR_1);
    VAR_1 = FUNC_2(VAR_3);
    FUNC_0(!VAR_1, "RtlFreeSid error %08x\n", VAR_1);


    if (0)
    {
        FUNC_1(((void*)0), 0, 1, 2, 3, 4, 5, 6, 7, 8, &VAR_3);
        FUNC_1(&VAR_2, 0, 1, 2, 3, 4, 5, 6, 7, 8, ((void*)0));
    }

    VAR_1 = FUNC_1(&VAR_2, 9, 1, 2, 3, 4, 5, 6, 7, 8, &VAR_3);
    FUNC_0(VAR_1 == VAR_0, "wrong error %08x\n", VAR_1);
}
