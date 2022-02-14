
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int RunningActions; } ;
struct TYPE_5__ {int entry; int name; int process; int handle; } ;
typedef TYPE_1__ MSIRUNNINGACTION ;
typedef TYPE_2__ MSIPACKAGE ;
typedef int LPCWSTR ;
typedef int HANDLE ;
typedef int BOOL ;


 int FUNC_0 (int *,int *) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(MSIPACKAGE* VAR_0, HANDLE VAR_1,
                                BOOL VAR_2, LPCWSTR VAR_3)
{
    MSIRUNNINGACTION *VAR_4;

    VAR_4 = FUNC_1( sizeof(MSIRUNNINGACTION) );

    VAR_4->handle = VAR_1;
    VAR_4->process = VAR_2;
    VAR_4->name = FUNC_2(VAR_3);

    FUNC_0( &VAR_0->RunningActions, &VAR_4->entry );
}
