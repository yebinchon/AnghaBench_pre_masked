
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int libName ;
typedef int WCHAR ;
struct TYPE_3__ {int * hDriver; } ;
typedef TYPE_1__* LPWINE_MCIDRIVER ;
typedef int LPCWSTR ;
typedef int * HDRVR ;
typedef int DWORD_PTR ;
typedef int BOOL ;


 int FUNC_0 (int ,int ,int *,int) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static BOOL FUNC_2(LPWINE_MCIDRIVER VAR_2, LPCWSTR VAR_3, DWORD_PTR VAR_4)
{
    WCHAR VAR_5[128];

    if (!FUNC_0(VAR_3, VAR_1, VAR_5, sizeof(VAR_5)))
 return VAR_0;


    VAR_2->hDriver = (HDRVR)FUNC_1(VAR_5, VAR_4);
    return VAR_2->hDriver != ((void*)0);
}
