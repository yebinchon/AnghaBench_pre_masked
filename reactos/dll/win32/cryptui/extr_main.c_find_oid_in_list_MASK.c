
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ psz; int flags; } ;
struct TYPE_3__ {scalar_t__ lParam; int flags; } ;
typedef scalar_t__ PCCRYPT_OID_INFO ;
typedef TYPE_1__ LVFINDINFOW ;
typedef TYPE_2__ LVFINDINFOA ;
typedef scalar_t__ LPCSTR ;
typedef scalar_t__ LPARAM ;
typedef int LONG_PTR ;
typedef int HWND ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,void*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int,scalar_t__) ;

__attribute__((used)) static LONG_PTR FUNC_2(HWND VAR_6, LPCSTR VAR_7)
{
    PCCRYPT_OID_INFO VAR_8 = FUNC_0(VAR_1,
     (void *)VAR_7, VAR_0);
    LONG_PTR VAR_9;

    if (VAR_8)
    {
        LVFINDINFOW VAR_10;

        VAR_10.flags = VAR_2;
        VAR_10.lParam = (LPARAM)VAR_8;
        VAR_9 = FUNC_1(VAR_6, VAR_5, -1, (LPARAM)&VAR_10);
    }
    else
    {
        LVFINDINFOA VAR_11;

        VAR_11.flags = VAR_3;
        VAR_11.psz = VAR_7;
        VAR_9 = FUNC_1(VAR_6, VAR_4, -1, (LPARAM)&VAR_11);
    }
    return VAR_9;
}
