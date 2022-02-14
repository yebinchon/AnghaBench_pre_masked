
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* dlgw; } ;
struct TYPE_9__ {TYPE_2__ u; scalar_t__ unicode; } ;
typedef TYPE_3__ pagesetup_data ;
typedef int WCHAR ;
struct TYPE_10__ {int wDriverOffset; int wDeviceOffset; int wOutputOffset; int wDefault; } ;
struct TYPE_7__ {int hDevNames; } ;
typedef int LPCWSTR ;
typedef int DWORD ;
typedef TYPE_4__ DEVNAMES ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int*) ;
 int FUNC_2 (int ,int) ;
 TYPE_4__* FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ,int,char*,int,int *,int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(pagesetup_data *VAR_2, LPCWSTR VAR_3, LPCWSTR VAR_4, LPCWSTR VAR_5)
{
    DEVNAMES *VAR_6;
    WCHAR VAR_7[256];
    DWORD VAR_8 = sizeof(DEVNAMES), VAR_9, VAR_10, VAR_11;

    if(VAR_2->unicode)
    {
        VAR_9 = (FUNC_9(VAR_3) + 1) * sizeof(WCHAR);
        VAR_10 = (FUNC_9(VAR_4) + 1) * sizeof(WCHAR);
        VAR_11 = (FUNC_9(VAR_5) + 1) * sizeof(WCHAR);
    }
    else
    {
        VAR_9 = FUNC_6(VAR_0, 0, VAR_3, -1, ((void*)0), 0, ((void*)0), ((void*)0));
        VAR_10 = FUNC_6(VAR_0, 0, VAR_4, -1, ((void*)0), 0, ((void*)0), ((void*)0));
        VAR_11 = FUNC_6(VAR_0, 0, VAR_5, -1, ((void*)0), 0, ((void*)0), ((void*)0));
    }
    VAR_8 += VAR_9 + VAR_10 + VAR_11;

    if(VAR_2->u.dlgw->hDevNames)
        VAR_2->u.dlgw->hDevNames = FUNC_4(VAR_2->u.dlgw->hDevNames, VAR_8, VAR_1);
    else
        VAR_2->u.dlgw->hDevNames = FUNC_2(VAR_1, VAR_8);

    VAR_6 = FUNC_3(VAR_2->u.dlgw->hDevNames);

    if(VAR_2->unicode)
    {
        WCHAR *VAR_12 = (WCHAR *)(VAR_6 + 1);
        VAR_8 = sizeof(DEVNAMES) / sizeof(WCHAR);
        VAR_6->wDriverOffset = VAR_8;
        FUNC_8(VAR_12, VAR_3);
        VAR_12 += VAR_9 / sizeof(WCHAR);
        VAR_8 += VAR_9 / sizeof(WCHAR);
        VAR_6->wDeviceOffset = VAR_8;
        FUNC_8(VAR_12, VAR_4);
        VAR_12 += VAR_10 / sizeof(WCHAR);
        VAR_8 += VAR_10 / sizeof(WCHAR);
        VAR_6->wOutputOffset = VAR_8;
        FUNC_8(VAR_12, VAR_5);
    }
    else
    {
        char *VAR_13 = (char *)(VAR_6 + 1);
        VAR_8 = sizeof(DEVNAMES);
        VAR_6->wDriverOffset = VAR_8;
        FUNC_6(VAR_0, 0, VAR_3, -1, VAR_13, VAR_9, ((void*)0), ((void*)0));
        VAR_13 += VAR_9;
        VAR_8 += VAR_9;
        VAR_6->wDeviceOffset = VAR_8;
        FUNC_6(VAR_0, 0, VAR_4, -1, VAR_13, VAR_10, ((void*)0), ((void*)0));
        VAR_13 += VAR_10;
        VAR_8 += VAR_10;
        VAR_6->wOutputOffset = VAR_8;
        FUNC_6(VAR_0, 0, VAR_5, -1, VAR_13, VAR_11, ((void*)0), ((void*)0));
    }

    VAR_6->wDefault = 0;
    VAR_8 = FUNC_0(VAR_7);
    FUNC_1(VAR_7, &VAR_8);
    if(!FUNC_7(VAR_7, VAR_4))
        VAR_6->wDefault = 1;

    FUNC_5(VAR_2->u.dlgw->hDevNames);
}
