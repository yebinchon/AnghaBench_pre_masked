
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int wDevID; } ;
typedef TYPE_1__ WINE_MCIMIDI ;
struct TYPE_6__ {int wDeviceID; int wType; int wCustomCommandTable; } ;
typedef TYPE_2__* LPMCI_OPEN_DRIVER_PARMSW ;
typedef int LPCWSTR ;
typedef int DWORD_PTR ;
typedef int DWORD ;


 int FUNC_0 () ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int ,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static DWORD FUNC_3(LPCWSTR VAR_3, LPMCI_OPEN_DRIVER_PARMSW VAR_4)
{
    WINE_MCIMIDI* VAR_5;

    if (!VAR_4) return 0xFFFFFFFF;

    VAR_5 = FUNC_1(FUNC_0(), VAR_0, sizeof(WINE_MCIMIDI));

    if (!VAR_5)
 return 0;

    VAR_5->wDevID = VAR_4->wDeviceID;
    FUNC_2(VAR_5->wDevID, (DWORD_PTR)VAR_5);
    VAR_4->wCustomCommandTable = VAR_2;
    VAR_4->wType = VAR_1;
    return VAR_4->wDeviceID;
}
