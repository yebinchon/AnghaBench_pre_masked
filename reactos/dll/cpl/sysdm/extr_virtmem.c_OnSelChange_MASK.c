
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int QuadPart; } ;
typedef TYPE_2__ ULARGE_INTEGER ;
typedef int UINT ;
struct TYPE_11__ {int dwLength; int ullTotalPhys; } ;
struct TYPE_10__ {size_t Count; TYPE_1__* Pagefile; int hSelf; } ;
struct TYPE_8__ {int FreeSize; int NewMinSize; int NewMaxSize; int InitialSize; int * szDrive; } ;
typedef int TCHAR ;
typedef TYPE_3__* PVIRTMEM ;
typedef TYPE_4__ MEMORYSTATUSEX ;
typedef size_t INT ;
typedef int HWND ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int *,int *,int *,TYPE_2__*) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (TYPE_4__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_5 (int ,int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ,int,int ) ;
 int FUNC_7 (int ,int ,int *) ;
 int VAR_15 ;
 int * FUNC_8 (char*) ;
 int FUNC_9 (int *,int *,int) ;
 int VAR_16 ;

__attribute__((used)) static BOOL
FUNC_10(HWND VAR_17, PVIRTMEM VAR_18)
{
    TCHAR VAR_19[64];
    MEMORYSTATUSEX VAR_20;
    ULARGE_INTEGER VAR_21;
    UINT VAR_22 ;
    INT VAR_23;

    VAR_23 = (INT)FUNC_5(VAR_17,
                                    VAR_9,
                                    VAR_13,
                                    0,
                                    0);
    if (VAR_23 >= 0 && VAR_23 < VAR_18->Count)
    {

        FUNC_7(VAR_17, VAR_4,
                       VAR_18->Pagefile[VAR_23].szDrive);


        if (FUNC_2(VAR_18->Pagefile[VAR_23].szDrive,
                               ((void*)0), ((void*)0), &VAR_21))
        {
            VAR_18->Pagefile[VAR_23].FreeSize = (UINT)(VAR_21.QuadPart / (1024 * 1024));
            FUNC_9(VAR_19, FUNC_8("%u MB"), VAR_18->Pagefile[VAR_23].FreeSize);
            FUNC_7(VAR_17, VAR_11, VAR_19);
        }

        if (VAR_18->Pagefile[VAR_23].NewMinSize == -1 &&
            VAR_18->Pagefile[VAR_23].NewMaxSize == -1)
        {


            FUNC_1(FUNC_3(VAR_18->hSelf, VAR_6), VAR_1);
            FUNC_1(FUNC_3(VAR_18->hSelf, VAR_5), VAR_1);

            FUNC_0(VAR_18->hSelf, VAR_8, VAR_0);
        }
        else if (VAR_18->Pagefile[VAR_23].NewMinSize == 0 &&
                 VAR_18->Pagefile[VAR_23].NewMaxSize == 0)
        {


            FUNC_1(FUNC_3(VAR_18->hSelf, VAR_6), VAR_1);
            FUNC_1(FUNC_3(VAR_18->hSelf, VAR_5), VAR_1);

            FUNC_0(VAR_18->hSelf, VAR_12, VAR_0);
        }
        else
        {



            FUNC_1(FUNC_3(VAR_18->hSelf, VAR_6), VAR_15);
            FUNC_1(FUNC_3(VAR_18->hSelf, VAR_5), VAR_15);

            FUNC_6(VAR_18->hSelf,
                          VAR_5,
                          VAR_18->Pagefile[VAR_23].NewMinSize,
                          VAR_1);

            FUNC_6(VAR_18->hSelf,
                          VAR_6,
                          VAR_18->Pagefile[VAR_23].NewMaxSize,
                          VAR_1);

            FUNC_0(VAR_18->hSelf,
                           VAR_3,
                           VAR_0);
        }


        FUNC_7(VAR_17, VAR_7, FUNC_8("16 MB"));


        VAR_20.dwLength = sizeof(MEMORYSTATUSEX);
        if (FUNC_4(&VAR_20))
        {
            VAR_22 = (UINT)(VAR_20.ullTotalPhys / (1024 * 1024));
            FUNC_9(VAR_19, FUNC_8("%u MB"), VAR_22 + (VAR_22 / 2));
            FUNC_7(VAR_17, VAR_10, VAR_19);
        }
    }

    return VAR_15;
}
