
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int mask; scalar_t__ pszText; scalar_t__ lParam; scalar_t__ iSubItem; int iItem; int stateMask; int state; } ;
struct TYPE_4__ {scalar_t__ pwszName; } ;
typedef TYPE_1__* PCCRYPT_OID_INFO ;
typedef TYPE_2__ LVITEMW ;
typedef scalar_t__ LPWSTR ;
typedef scalar_t__ LPARAM ;
typedef int HWND ;
typedef int CheckBitmapIndex ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(HWND VAR_6, PCCRYPT_OID_INFO VAR_7,
 CheckBitmapIndex VAR_8)
{
    LVITEMW VAR_9;

    VAR_9.mask = VAR_2 | VAR_1 | VAR_0;
    VAR_9.state = FUNC_0(VAR_8);
    VAR_9.stateMask = VAR_3;
    VAR_9.iItem = FUNC_1(VAR_6, VAR_4, 0, 0);
    VAR_9.iSubItem = 0;
    VAR_9.lParam = (LPARAM)VAR_7;
    VAR_9.pszText = (LPWSTR)VAR_7->pwszName;
    FUNC_1(VAR_6, VAR_5, 0, (LPARAM)&VAR_9);
}
