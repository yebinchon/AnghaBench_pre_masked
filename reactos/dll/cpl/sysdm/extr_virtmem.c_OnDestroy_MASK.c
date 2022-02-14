
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_6__ {struct TYPE_6__* szPagingFiles; TYPE_1__* Pagefile; } ;
struct TYPE_5__ {TYPE_2__* pszVolume; } ;
typedef TYPE_2__* PVIRTMEM ;
typedef int INT ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,TYPE_2__*) ;

__attribute__((used)) static VOID
FUNC_2(PVIRTMEM VAR_0)
{
    INT VAR_1;

    for (VAR_1 = 0; VAR_1 < 26; VAR_1++)
    {
        if (VAR_0->Pagefile[VAR_1].pszVolume != ((void*)0))
            FUNC_1(FUNC_0(), 0, VAR_0->Pagefile[VAR_1].pszVolume);
    }

    if (VAR_0->szPagingFiles)
        FUNC_1(FUNC_0(), 0, VAR_0->szPagingFiles);

    FUNC_1(FUNC_0(), 0, VAR_0);
}
