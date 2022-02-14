
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int diprg ;
struct TYPE_5__ {int dwSize; int dwHeaderSize; scalar_t__ dwObj; int dwHow; } ;
struct TYPE_4__ {TYPE_3__ diph; } ;
typedef int IDirectInputDeviceA ;
typedef int IDirectInputA ;
typedef int HWND ;
typedef scalar_t__ HRESULT ;
typedef TYPE_1__ DIPROPRANGE ;
typedef int DIPROPHEADER ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *,int ,TYPE_3__*) ;
 scalar_t__ FUNC_2 (int *,int *,int **,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int FUNC_6 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_7(IDirectInputA *VAR_4, HWND VAR_5)
{
    HRESULT VAR_6;
    IDirectInputDeviceA *VAR_7 = ((void*)0);
    DIPROPRANGE VAR_8;

    VAR_6 = FUNC_2(VAR_4, &VAR_3, &VAR_7, ((void*)0));
    FUNC_6(FUNC_4(VAR_6), "IDirectInput_CreateDevice() failed: %08x\n", VAR_6);
    if (FUNC_0(VAR_6)) return;

    FUNC_5(&VAR_8, 0, sizeof(VAR_8));
    VAR_8.diph.dwSize = sizeof(DIPROPRANGE);
    VAR_8.diph.dwHeaderSize = sizeof(DIPROPHEADER);
    VAR_8.diph.dwHow = VAR_1;
    VAR_8.diph.dwObj = 0;

    VAR_6 = FUNC_1(VAR_7, VAR_2, &VAR_8.diph);
    FUNC_6(VAR_6 == VAR_0, "IDirectInputDevice_GetProperty() did not return DIPROP_RANGE but: %08x\n", VAR_6);

    if (VAR_7) FUNC_3(VAR_7);
}
