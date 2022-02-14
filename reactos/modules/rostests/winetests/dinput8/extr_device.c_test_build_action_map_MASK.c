
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ddi ;
struct TYPE_9__ {scalar_t__ dwHow; int guidInstance; int dwObjID; } ;
struct TYPE_8__ {TYPE_3__* rgoAction; } ;
struct TYPE_7__ {int dwSize; int guidInstance; } ;
typedef int IDirectInputDevice8A ;
typedef int HRESULT ;
typedef int GUID ;
typedef scalar_t__ DWORD ;
typedef TYPE_1__ DIDEVICEINSTANCEA ;
typedef TYPE_2__ DIACTIONFORMATA ;
typedef TYPE_3__ DIACTIONA ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,TYPE_2__*,int *,int ) ;
 int FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,char*,int,...) ;

__attribute__((used)) static void FUNC_7(IDirectInputDevice8A *VAR_3, DIACTIONFORMATA *VAR_4,
                                  int VAR_5, DWORD VAR_6, DWORD VAR_7)
{
    HRESULT VAR_8;
    DIACTIONA *VAR_9;
    DWORD VAR_10, VAR_11, VAR_12;
    GUID VAR_13;
    DIDEVICEINSTANCEA VAR_14;

    VAR_14.dwSize = sizeof(VAR_14);
    FUNC_3(VAR_3, &VAR_14);

    VAR_8 = FUNC_2(VAR_3, VAR_4, ((void*)0), VAR_2);
    FUNC_6 (FUNC_5(VAR_8), "BuildActionMap failed hr=%08x\n", VAR_8);

    VAR_9 = VAR_4->rgoAction;
    VAR_10 = FUNC_0(VAR_9[VAR_5].dwObjID);
    VAR_11 = FUNC_1(VAR_9[VAR_5].dwObjID);
    VAR_12 = VAR_9[VAR_5].dwHow;
    VAR_13 = VAR_9[VAR_5].guidInstance;

    FUNC_6 (VAR_12 == VAR_1 || VAR_12 == VAR_0, "Action was not set dwHow=%08x\n", VAR_12);
    FUNC_6 (VAR_10 == VAR_7, "Action not mapped correctly instance=%08x expected=%08x\n", VAR_10, VAR_7);
    FUNC_6 (VAR_11 == VAR_6, "Action type not mapped correctly type=%08x expected=%08x\n", VAR_11, VAR_6);
    FUNC_6 (FUNC_4(&VAR_13, &VAR_14.guidInstance), "Action and device GUID do not match action=%d\n", VAR_5);
}
