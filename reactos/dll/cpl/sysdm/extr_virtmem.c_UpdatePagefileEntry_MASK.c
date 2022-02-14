
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int szSize ;
typedef int WPARAM ;
typedef int VOID ;
struct TYPE_5__ {int hListBox; TYPE_1__* Pagefile; } ;
struct TYPE_4__ {int NewMinSize; int NewMaxSize; char* pszVolume; int szDrive; } ;
typedef int TCHAR ;
typedef TYPE_2__* PVIRTMEM ;
typedef int LPARAM ;
typedef size_t INT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int *,int) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int ,int,...) ;
 int VAR_5 ;

__attribute__((used)) static VOID
FUNC_4(PVIRTMEM VAR_6,
                    INT VAR_7,
                    INT VAR_8)
{
    TCHAR VAR_9[256];
    TCHAR VAR_10[64];

    if ((VAR_6->Pagefile[VAR_8].NewMinSize == -1) &&
        (VAR_6->Pagefile[VAR_8].NewMaxSize == -1))
    {
        FUNC_0(VAR_5,
                   VAR_0,
                   VAR_10,
                   sizeof(VAR_10) / sizeof(VAR_10[0]));
    }
    else if ((VAR_6->Pagefile[VAR_8].NewMinSize == 0) &&
             (VAR_6->Pagefile[VAR_8].NewMaxSize == 0))
    {
        FUNC_0(VAR_5,
                   VAR_1,
                   VAR_10,
                   sizeof(VAR_10) / sizeof(VAR_10[0]));
    }
    else
    {
        FUNC_3(VAR_10,
                  FUNC_2("%d - %d"),
                  VAR_6->Pagefile[VAR_8].NewMinSize,
                  VAR_6->Pagefile[VAR_8].NewMaxSize);
    }

    FUNC_3(VAR_9,
              FUNC_2("%s  [%s]\t%s"),
              VAR_6->Pagefile[VAR_8].szDrive,
              VAR_6->Pagefile[VAR_8].pszVolume ? VAR_6->Pagefile[VAR_8].pszVolume : L"",
              VAR_10);

    FUNC_1(VAR_6->hListBox, VAR_2, (WPARAM)VAR_7, 0);
    FUNC_1(VAR_6->hListBox, VAR_3, (WPARAM)VAR_7, (LPARAM)VAR_9);
    FUNC_1(VAR_6->hListBox, VAR_4, (WPARAM)VAR_7, 0);
}
