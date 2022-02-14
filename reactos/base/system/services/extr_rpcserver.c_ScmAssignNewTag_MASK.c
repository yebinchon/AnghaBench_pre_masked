
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int pdwGroupTags ;
struct TYPE_9__ {struct TYPE_9__* Flink; } ;
struct TYPE_8__ {scalar_t__ dwTag; int lpServiceName; TYPE_1__* lpGroup; TYPE_3__ ServiceListEntry; } ;
struct TYPE_7__ {int szGroupName; } ;
typedef TYPE_2__* PSERVICE ;
typedef TYPE_3__* PLIST_ENTRY ;
typedef scalar_t__* PDWORD ;
typedef int * LPBYTE ;
typedef int INT ;
typedef int * HKEY ;
typedef scalar_t__ DWORD ;
typedef int BOOLEAN ;


 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (TYPE_3__*,int ,int ) ;
 int FUNC_2 (char*,scalar_t__,int ,int ) ;
 int FUNC_3 (char*,int ,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_4 () ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__* FUNC_5 (int ,int ,scalar_t__) ;
 int FUNC_6 (int ,int ,scalar_t__*) ;
 int VAR_6 ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ,char*,int ,int ,int **) ;
 scalar_t__ FUNC_9 (int *,int ,int *,int *,int *,scalar_t__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__) ;

DWORD
FUNC_11(PSERVICE VAR_11)
{
    HKEY VAR_12 = ((void*)0);
    DWORD VAR_13;
    DWORD VAR_14 = 0;
    PDWORD VAR_15 = ((void*)0);
    DWORD VAR_16 = 0;
    DWORD VAR_17 = 1;
    BOOLEAN VAR_18[VAR_9];
    INT VAR_19;
    DWORD VAR_20;
    DWORD VAR_21;
    PLIST_ENTRY VAR_22;
    PSERVICE VAR_23;

    FUNC_0(VAR_11 != ((void*)0));
    FUNC_0(VAR_11->lpGroup != ((void*)0));

    VAR_13 = FUNC_8(VAR_5,
                            L"System\\CurrentControlSet\\Control\\GroupOrderList",
                            0,
                            VAR_6,
                            &VAR_12);

    if (VAR_13 != VAR_2)
        goto findFreeTag;


    VAR_21 = 0;
    VAR_13 = FUNC_9(VAR_12,
                               VAR_11->lpGroup->szGroupName,
                               ((void*)0),
                               ((void*)0),
                               ((void*)0),
                               &VAR_21);

    if (VAR_13 != VAR_2 && VAR_13 != VAR_0)
        goto findFreeTag;

    VAR_15 = FUNC_5(FUNC_4(), VAR_4, VAR_21);
    if (!VAR_15)
    {
        VAR_13 = VAR_1;
        goto cleanup;
    }

    VAR_13 = FUNC_9(VAR_12,
                               VAR_11->lpGroup->szGroupName,
                               ((void*)0),
                               ((void*)0),
                               (LPBYTE)VAR_15,
                               &VAR_21);

    if (VAR_13 != VAR_2)
        goto findFreeTag;

    if (VAR_21 < sizeof(VAR_15[0]))
        goto findFreeTag;

    VAR_14 = FUNC_10(VAR_15[0], VAR_21 / sizeof(VAR_15[0]) - 1);

findFreeTag:
    do
    {

        for (VAR_20 = 0; VAR_20 < VAR_9; VAR_20++)
            VAR_18[VAR_20] = VAR_3;


        for (VAR_20 = 1; VAR_20 <= VAR_14; VAR_20++)
        {
            VAR_19 = VAR_15[VAR_20] - VAR_17;
            if (VAR_19 >= 0 && VAR_19 < VAR_9)
                VAR_18[VAR_19] = VAR_10;
        }


        VAR_22 = VAR_11->ServiceListEntry.Flink;
        while (VAR_22 != &VAR_11->ServiceListEntry)
        {
            FUNC_0(VAR_22 != ((void*)0));
            VAR_23 = FUNC_1(VAR_22, VAR_7, VAR_8);
            if (VAR_23->lpGroup == VAR_11->lpGroup)
            {
                VAR_19 = VAR_23->dwTag - VAR_17;
                if (VAR_19 >= 0 && VAR_19 < VAR_9)
                    VAR_18[VAR_19] = VAR_10;
            }

            VAR_22 = VAR_22->Flink;
        }


        for (VAR_20 = 0; VAR_20 < VAR_9; VAR_20++)
        {
            if (!VAR_18[VAR_20])
            {
                VAR_16 = VAR_17 + VAR_20;
                break;
            }
        }

        VAR_17 += VAR_9;
    } while (!VAR_16);

cleanup:
    if (VAR_15)
        FUNC_6(FUNC_4(), 0, VAR_15);

    if (VAR_12)
        FUNC_7(VAR_12);

    if (VAR_16)
    {
        VAR_11->dwTag = VAR_16;
        FUNC_2("Assigning new tag %lu to service %S in group %S\n",
               VAR_11->dwTag, VAR_11->lpServiceName, VAR_11->lpGroup->szGroupName);
        VAR_13 = VAR_2;
    }
    else
    {
        FUNC_3("Failed to assign new tag to service %S, error=%lu\n",
                VAR_11->lpServiceName, VAR_13);
    }

    return VAR_13;
}
