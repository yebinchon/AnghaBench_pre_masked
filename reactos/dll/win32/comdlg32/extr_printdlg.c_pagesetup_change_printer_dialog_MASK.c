
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int prnt ;
typedef int pagesetup_data ;
typedef int WCHAR ;
struct TYPE_13__ {scalar_t__ dmDriverExtra; scalar_t__ dmSize; } ;
struct TYPE_12__ {int wDriverOffset; int wDeviceOffset; int wOutputOffset; } ;
struct TYPE_11__ {int lStructSize; scalar_t__ hDevNames; scalar_t__ hDevMode; int hwndOwner; scalar_t__ Flags; } ;
typedef TYPE_1__ PRINTDLGW ;
typedef int LPWSTR ;
typedef int HWND ;
typedef TYPE_2__ DEVNAMES ;
typedef TYPE_3__ DEVMODEW ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__*,int ,int ,int ) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_3__*,TYPE_3__*,scalar_t__) ;
 int FUNC_7 (TYPE_1__*,int ,int) ;
 TYPE_3__* FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,TYPE_3__*) ;
 int FUNC_15 (int *,TYPE_3__*) ;
 int FUNC_16 (int *,int *,int *,int *) ;

__attribute__((used)) static void FUNC_17(HWND VAR_1, pagesetup_data *VAR_2)
{
    PRINTDLGW VAR_3;
    LPWSTR VAR_4, VAR_5, VAR_6;
    DEVMODEW *VAR_7, *VAR_8;

    FUNC_7(&VAR_3, 0, sizeof(VAR_3));
    VAR_3.lStructSize = sizeof(VAR_3);
    VAR_3.Flags = 0;
    VAR_3.hwndOwner = VAR_1;

    VAR_4 = FUNC_10(VAR_2);
    VAR_5 = FUNC_9(VAR_2);
    VAR_6 = FUNC_11(VAR_2);
    VAR_3.hDevNames = 0;
    FUNC_4(&VAR_3.hDevNames, VAR_4, VAR_5, VAR_6);
    FUNC_13(VAR_2, VAR_6);
    FUNC_13(VAR_2, VAR_5);
    FUNC_13(VAR_2, VAR_4);

    VAR_7 = FUNC_8(VAR_2);
    VAR_3.hDevMode = FUNC_0(VAR_0, VAR_7->dmSize + VAR_7->dmDriverExtra);
    VAR_8 = FUNC_2(VAR_3.hDevMode);
    FUNC_6(VAR_8, VAR_7, VAR_7->dmSize + VAR_7->dmDriverExtra);
    FUNC_3(VAR_3.hDevMode);
    FUNC_14(VAR_2, VAR_7);

    if (FUNC_5(&VAR_3))
    {
        DEVMODEW *VAR_9 = FUNC_2(VAR_3.hDevMode);
        DEVNAMES *VAR_10 = FUNC_2(VAR_3.hDevNames);

        FUNC_16(VAR_2, (WCHAR*)VAR_10 + VAR_10->wDriverOffset,
                               (WCHAR*)VAR_10 + VAR_10->wDeviceOffset, (WCHAR *)VAR_10 + VAR_10->wOutputOffset);
        FUNC_15(VAR_2, VAR_9);
        FUNC_3(VAR_3.hDevNames);
        FUNC_3(VAR_3.hDevMode);
        FUNC_12(VAR_1, VAR_2);
    }

    FUNC_1(VAR_3.hDevMode);
    FUNC_1(VAR_3.hDevNames);

}
