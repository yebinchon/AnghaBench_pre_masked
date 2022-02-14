
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_3__ {int member_0; } ;
typedef TYPE_1__ SID_IDENTIFIER_AUTHORITY ;
typedef int * PRPC_SID ;
typedef int NTSTATUS ;


 int FUNC_0 (char*) ;
 int * FUNC_1 (int ,int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *,TYPE_1__*,int ) ;
 int FUNC_4 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static
NTSTATUS
FUNC_5(PRPC_SID *VAR_3)
{
    SID_IDENTIFIER_AUTHORITY VAR_4 = {VAR_0};
    ULONG VAR_5 = 0;

    VAR_5 = FUNC_4(0);
    *VAR_3 = FUNC_1(FUNC_2(), 0, VAR_5);
    if (*VAR_3 == ((void*)0))
    {
        FUNC_0("Failed to allocate SID\n");
        return VAR_1;
    }

    FUNC_3(*VAR_3,&VAR_4, 0);

    return VAR_2;
}
