
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {int lParam; int (* lpfn ) (int ,int ,int ,int ) ;} ;
typedef TYPE_1__* LPBROWSEINFOW ;
typedef int LPARAM ;
typedef int HWND ;


 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1( LPBROWSEINFOW VAR_0, HWND VAR_1,
                                   UINT VAR_2, LPARAM VAR_3 )
{
    if (!VAR_0->lpfn)
        return;
    VAR_0->lpfn( VAR_1, VAR_2, VAR_3, VAR_0->lParam );
}
