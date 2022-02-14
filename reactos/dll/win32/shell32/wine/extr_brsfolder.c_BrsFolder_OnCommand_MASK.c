
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int hWnd; int * pidlRet; TYPE_2__* lpBrowseInfo; } ;
typedef TYPE_1__ browse_info ;
typedef int UINT ;
struct TYPE_6__ {int pszDisplayName; } ;
typedef TYPE_2__* LPBROWSEINFOW ;
typedef int BOOL ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;



 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int VAR_1 ;
 int * FUNC_4 () ;
 int FUNC_5 (int *) ;

__attribute__((used)) static BOOL FUNC_6( browse_info *VAR_2, UINT VAR_3 )
{
    LPBROWSEINFOW VAR_4 = VAR_2->lpBrowseInfo;

    switch (VAR_3)
    {
    case 128:




        if (VAR_2->pidlRet == ((void*)0))
            VAR_2->pidlRet = FUNC_4();
        FUNC_5( VAR_2->pidlRet );
        if (VAR_4->pszDisplayName)
            FUNC_3( VAR_2->pidlRet, VAR_4->pszDisplayName );
        FUNC_1( VAR_2->hWnd, 1 );
        return VAR_1;

    case 130:
        FUNC_1( VAR_2->hWnd, 0 );
        return VAR_1;

    case 129:
        FUNC_0(VAR_2);
        return VAR_1;
    }
    return VAR_0;
}
