
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int DeviceName; int Description; } ;
struct TYPE_12__ {int cb; int DeviceID; int DeviceName; int DeviceString; } ;
typedef int LPCSTR ;
typedef scalar_t__ DWORD ;
typedef TYPE_1__ DISPLAY_DEVICEA ;
typedef TYPE_2__ D3DADAPTER_IDENTIFIER9 ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,scalar_t__,TYPE_1__*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_2__*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (TYPE_1__*,int ,int) ;

BOOL FUNC_8(LPCSTR VAR_4, D3DADAPTER_IDENTIFIER9* VAR_5)
{
    DISPLAY_DEVICEA VAR_6;
    DWORD VAR_7;
    BOOL VAR_8;

    FUNC_7(&VAR_6, 0, sizeof(DISPLAY_DEVICEA));
    VAR_6.cb = sizeof(DISPLAY_DEVICEA);

    VAR_7 = 0;
    VAR_8 = VAR_1;
    while (FUNC_0(((void*)0), VAR_7, &VAR_6, 0) != VAR_1)
    {
        if (FUNC_5(VAR_4, VAR_6.DeviceName) == 0)
        {
            VAR_8 = VAR_3;
            break;
        }

        ++VAR_7;
    }


    if (VAR_1 == VAR_8)
        return VAR_1;

    FUNC_6(VAR_5->Description, VAR_6.DeviceString, VAR_2);
    FUNC_6(VAR_5->DeviceName, VAR_6.DeviceName, VAR_0);

    if (FUNC_3(&VAR_6, VAR_5) != VAR_1)
        FUNC_4(&VAR_6, VAR_5);

    FUNC_2(VAR_6.DeviceID, VAR_5);

    FUNC_1(VAR_5);

    return VAR_3;
}
