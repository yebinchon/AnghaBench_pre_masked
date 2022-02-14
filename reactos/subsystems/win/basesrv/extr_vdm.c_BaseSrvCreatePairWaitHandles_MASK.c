
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* Process; } ;
struct TYPE_3__ {int ProcessHandle; } ;
typedef int * PHANDLE ;
typedef int NTSTATUS ;


 TYPE_2__* FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int *,int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ,int ,int *,int ,int ,int) ;

NTSTATUS FUNC_6(PHANDLE VAR_5, PHANDLE VAR_6)
{
    NTSTATUS VAR_7;


    VAR_7 = FUNC_3(VAR_5, VAR_2, ((void*)0), VAR_4, VAR_3);
    if (!FUNC_1(VAR_7)) return VAR_7;


    VAR_7 = FUNC_5(FUNC_4(),
                               *VAR_5,
                               FUNC_0()->Process->ProcessHandle,
                               VAR_6,
                               0,
                               0,
                               VAR_1 | VAR_0);

    if (!FUNC_1(VAR_7)) FUNC_2(*VAR_5);
    return VAR_7;
}
