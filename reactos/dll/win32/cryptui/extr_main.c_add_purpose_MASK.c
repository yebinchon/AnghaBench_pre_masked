
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int mask; char* pszText; scalar_t__ lParam; scalar_t__ iSubItem; int iItem; int stateMask; int state; } ;
struct TYPE_4__ {int cbSize; char* pszOID; } ;
typedef TYPE_1__* PCRYPT_OID_INFO ;
typedef TYPE_2__ LVITEMA ;
typedef int LPCSTR ;
typedef scalar_t__ LPARAM ;
typedef int HWND ;
typedef int CRYPT_OID_INFO ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 () ;
 int VAR_1 ;
 void* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int ,int ,int ,scalar_t__) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(HWND VAR_9, LPCSTR VAR_10)
{
    HWND VAR_11 = FUNC_0(VAR_9, VAR_2);
    PCRYPT_OID_INFO VAR_12 = FUNC_2(FUNC_1(), VAR_1,
     sizeof(CRYPT_OID_INFO));

    if (VAR_12)
    {
        char *VAR_13 = FUNC_2(FUNC_1(), 0, FUNC_8(VAR_10) + 1);

        if (VAR_13)
        {
            LVITEMA VAR_14;

            FUNC_7(VAR_13, VAR_10);
            VAR_12->cbSize = sizeof(CRYPT_OID_INFO);
            VAR_12->pszOID = VAR_13;
            VAR_14.mask = VAR_5 | VAR_4 | VAR_3;
            VAR_14.state = FUNC_4(VAR_0);
            VAR_14.stateMask = VAR_6;
            VAR_14.iItem = FUNC_6(VAR_11, VAR_7, 0, 0);
            VAR_14.iSubItem = 0;
            VAR_14.lParam = (LPARAM)VAR_12;
            VAR_14.pszText = VAR_13;
            FUNC_5(VAR_11, VAR_8, 0, (LPARAM)&VAR_14);
        }
        else
            FUNC_3(FUNC_1(), 0, VAR_12);
    }
}
