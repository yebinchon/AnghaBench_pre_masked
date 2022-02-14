
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ dwCallback; } ;
struct TYPE_5__ {scalar_t__ dwReturn; int dwItem; scalar_t__ dwCallback; } ;
struct TYPE_4__ {scalar_t__ wDeviceID; int * lpstrAlias; int * lpstrElementName; int lpstrDeviceType; scalar_t__ dwCallback; } ;
typedef TYPE_1__ MCI_OPEN_PARMS ;
typedef TYPE_2__ MCI_GETDEVCAPS_PARMS ;
typedef TYPE_3__ MCI_GENERIC_PARMS ;
typedef scalar_t__ MCIERROR ;
typedef int LPTSTR ;
typedef int DWORD_PTR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (scalar_t__,int ,int,int ) ;

__attribute__((used)) static BOOL
FUNC_1(LPTSTR VAR_8)
{
    MCIERROR VAR_9;
    MCI_OPEN_PARMS VAR_10;
    MCI_GETDEVCAPS_PARMS VAR_11;
    MCI_GENERIC_PARMS VAR_12;

    VAR_10.dwCallback = 0;
    VAR_10.wDeviceID = 0;
    VAR_10.lpstrDeviceType = VAR_8;
    VAR_10.lpstrElementName = ((void*)0);
    VAR_10.lpstrAlias = ((void*)0);

    VAR_9 = FUNC_0(0, VAR_5, VAR_6 | VAR_7, (DWORD_PTR)&VAR_10);
    if (VAR_9 != 0)
        return VAR_0;

    VAR_11.dwCallback = 0;
    VAR_11.dwReturn = 0;
    VAR_11.dwItem = VAR_4;

    VAR_9 = FUNC_0(VAR_10.wDeviceID, VAR_2, VAR_7 | VAR_3, (DWORD_PTR)&VAR_11);
    if (VAR_9 != 0)
        return VAR_0;

    VAR_12.dwCallback = 0;
    FUNC_0(VAR_10.wDeviceID, VAR_1, VAR_7, (DWORD_PTR)&VAR_12);

    return (BOOL)VAR_11.dwReturn;
}
