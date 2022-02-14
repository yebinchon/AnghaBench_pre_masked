
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int hSelf; int * szPagingFiles; } ;
typedef TYPE_1__* PVIRTMEM ;
typedef int * PBYTE ;
typedef int * LPTSTR ;
typedef int * HKEY ;
typedef int DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int *,int ,int ,int *,int **,int *) ;
 scalar_t__ FUNC_4 (int *,int ,int *,int *,int *,int *) ;
 int FUNC_5 (int ) ;
 int VAR_5 ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (char*) ;
 int VAR_6 ;

__attribute__((used)) static BOOL
FUNC_8(PVIRTMEM VAR_7)
{
    HKEY VAR_8 = ((void*)0);
    DWORD VAR_9;
    DWORD VAR_10;
    BOOL VAR_11 = VAR_1;

    if (FUNC_3(VAR_2,
                       VAR_6,
                       0,
                       ((void*)0),
                       VAR_4,
                       VAR_3,
                       ((void*)0),
                       &VAR_8,
                       ((void*)0)) == VAR_0)
    {
        if (FUNC_4(VAR_8,
                            FUNC_7("PagingFiles"),
                            ((void*)0),
                            &VAR_9,
                            ((void*)0),
                            &VAR_10) == VAR_0)
        {
            VAR_7->szPagingFiles = (LPTSTR)FUNC_1(FUNC_0(),
                                                        0,
                                                        VAR_10);
            if (VAR_7->szPagingFiles != ((void*)0))
            {
                FUNC_6(VAR_7->szPagingFiles,
                           VAR_10);
                if (FUNC_4(VAR_8,
                                    FUNC_7("PagingFiles"),
                                    ((void*)0),
                                    &VAR_9,
                                    (PBYTE)VAR_7->szPagingFiles,
                                    &VAR_10) == VAR_0)
                {
                    VAR_11 = VAR_5;
                }
            }
        }
    }

    if (!VAR_11)
        FUNC_5(VAR_7->hSelf);

    if (VAR_8 != ((void*)0))
        FUNC_2(VAR_8);

    return VAR_11;
}
