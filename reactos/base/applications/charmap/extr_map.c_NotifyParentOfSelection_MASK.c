
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WORD ;
typedef int WCHAR ;
typedef scalar_t__ UINT ;
struct TYPE_3__ {int * hParent; int hMapWnd; } ;
typedef TYPE_1__* PMAP ;
typedef int LRESULT ;
typedef int LPARAM ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static
LRESULT
FUNC_4(PMAP VAR_2,
                        UINT VAR_3,
                        WCHAR VAR_4)
{
    LRESULT VAR_5 = 0;

    if (VAR_2->hParent != ((void*)0))
    {
        DWORD VAR_6 = FUNC_0(VAR_2->hMapWnd, VAR_0);





        VAR_5 = FUNC_3(VAR_2->hParent,
                          VAR_1,
                          FUNC_2((WORD)VAR_6, (WORD)VAR_3),
                          (LPARAM)FUNC_1(VAR_4));
    }

    return VAR_5;
}
