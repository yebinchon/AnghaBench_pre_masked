
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_6__ {int wDeviceID; int lpstrAlias; int lpstrElementName; } ;
struct TYPE_5__ {int wDeviceID; void* lpstrAlias; void* lpstrElementName; } ;
typedef TYPE_1__* LPWINE_MCIDRIVER ;
typedef TYPE_2__* LPMCI_OPEN_PARMSW ;
typedef int DWORD_PTR ;
typedef int DWORD ;


 int FUNC_0 () ;
 void* FUNC_1 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ,int,int ) ;
 int FUNC_3 (void*,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static DWORD FUNC_5(LPWINE_MCIDRIVER VAR_3, LPMCI_OPEN_PARMSW VAR_4,
          DWORD VAR_5)
{
    if (VAR_5 & VAR_2)
    {
        VAR_3->lpstrElementName = FUNC_1(FUNC_0(),0,(FUNC_4(VAR_4->lpstrElementName)+1) * sizeof(WCHAR));
        FUNC_3( VAR_3->lpstrElementName, VAR_4->lpstrElementName );
    }
    if (VAR_5 & VAR_0)
    {
        VAR_3->lpstrAlias = FUNC_1(FUNC_0(), 0, (FUNC_4(VAR_4->lpstrAlias)+1) * sizeof(WCHAR));
        FUNC_3( VAR_3->lpstrAlias, VAR_4->lpstrAlias);
    }
    VAR_4->wDeviceID = VAR_3->wDeviceID;

    return FUNC_2(VAR_3->wDeviceID, VAR_1, VAR_5,
     (DWORD_PTR)VAR_4);
}
