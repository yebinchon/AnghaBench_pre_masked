
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int szSize ;
typedef int WPARAM ;
typedef int VOID ;
struct TYPE_6__ {int hSelf; int hListBox; TYPE_1__* Pagefile; } ;
struct TYPE_5__ {int NewMinSize; int NewMaxSize; int pszVolume; int szDrive; scalar_t__ bUsed; } ;
typedef int TCHAR ;
typedef TYPE_2__* PVIRTMEM ;
typedef int LPARAM ;
typedef int INT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int *,int) ;
 int FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int ,int ,int,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int,int,int,...) ;
 int VAR_5 ;

__attribute__((used)) static VOID
FUNC_5(PVIRTMEM VAR_6)
{
    TCHAR VAR_7[256];
    TCHAR VAR_8[64];
    INT VAR_9;
    INT VAR_10;

    for (VAR_10 = 0; VAR_10 < 26; VAR_10++)
    {
        if (VAR_6->Pagefile[VAR_10].bUsed)
        {
            if ((VAR_6->Pagefile[VAR_10].NewMinSize == -1) &&
                (VAR_6->Pagefile[VAR_10].NewMaxSize == -1))
            {
                FUNC_0(VAR_5,
                           VAR_0,
                           VAR_8,
                           sizeof(VAR_8) / sizeof(VAR_8[0]));
            }
            else if ((VAR_6->Pagefile[VAR_10].NewMinSize == 0) &&
                     (VAR_6->Pagefile[VAR_10].NewMaxSize == 0))
            {
                FUNC_0(VAR_5,
                           VAR_1,
                           VAR_8,
                           sizeof(VAR_8) / sizeof(VAR_8[0]));
            }
            else
            {
                FUNC_4(VAR_8, FUNC_3("%d - %d"),
                          VAR_6->Pagefile[VAR_10].NewMinSize,
                          VAR_6->Pagefile[VAR_10].NewMaxSize);
            }

            FUNC_4(VAR_7,
                      FUNC_3("%s  [%s]\t%s"),
                      VAR_6->Pagefile[VAR_10].szDrive,
                      VAR_6->Pagefile[VAR_10].pszVolume ? VAR_6->Pagefile[VAR_10].pszVolume : FUNC_3(""),
                      VAR_8);

            VAR_9 = FUNC_2(VAR_6->hListBox, VAR_2, (WPARAM)0, (LPARAM)VAR_7);
            FUNC_2(VAR_6->hListBox, VAR_4, VAR_9, VAR_10);
        }
    }

    FUNC_2(VAR_6->hListBox, VAR_3, (WPARAM)0, (LPARAM)0);

    FUNC_1(VAR_6->hSelf, VAR_6);
}
