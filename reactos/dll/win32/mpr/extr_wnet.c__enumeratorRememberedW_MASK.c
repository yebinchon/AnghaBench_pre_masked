
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef char WCHAR ;
typedef scalar_t__ ULONG_PTR ;
struct TYPE_9__ {int dwType; char* lpLocalName; char* lpProvider; char* lpRemoteName; int * lpComment; int dwUsage; int dwDisplayType; int dwScope; } ;
struct TYPE_6__ {int index; int registry; } ;
struct TYPE_7__ {TYPE_1__ remembered; } ;
struct TYPE_8__ {int dwType; TYPE_2__ specific; } ;
typedef TYPE_3__* PWNetEnumerator ;
typedef TYPE_4__ NETRESOURCEW ;
typedef scalar_t__ LONG ;
typedef int HKEY ;
typedef int DWORD ;
typedef int BYTE ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,char*,int*,int *,int *,int *,int *) ;
 int FUNC_5 (int ,char*,int ,int ,int *) ;
 int FUNC_6 (int ,int ,int *,int *,int *,int*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 char* FUNC_7 (int ,int ,int*) ;
 int FUNC_8 (char*,char*) ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static DWORD FUNC_9(PWNetEnumerator VAR_13, DWORD* VAR_14,
                                    void* VAR_15, DWORD* VAR_16)
{
    HKEY VAR_17, VAR_18;
    WCHAR VAR_19[255];
    LONG VAR_20;
    DWORD VAR_21, VAR_22, VAR_23, VAR_24, VAR_25, VAR_26, VAR_27 = 0, VAR_28;
    NETRESOURCEW * VAR_29 = VAR_15;
    WCHAR * VAR_30, * VAR_31;





    VAR_20 = *VAR_16;
    VAR_28 = 0;
    VAR_23 = VAR_13->dwType;
    VAR_17 = VAR_13->specific.remembered.registry;
    VAR_30 = (WCHAR *)((ULONG_PTR)VAR_15 + *VAR_16 - sizeof(WCHAR));
    for (VAR_21 = VAR_13->specific.remembered.index; ; ++VAR_21)
    {
        VAR_13->specific.remembered.index = VAR_21;

        if (*VAR_14 != -1 && VAR_28 == *VAR_14)
        {
            VAR_22 = VAR_9;
            break;
        }

        VAR_24 = FUNC_0(VAR_19);
        VAR_22 = FUNC_4(VAR_17, VAR_21, VAR_19, &VAR_24, ((void*)0), ((void*)0), ((void*)0), ((void*)0));
        if (VAR_22 != VAR_1)
        {
            if (VAR_22 == VAR_0) VAR_22 = VAR_9;
            break;
        }

        if (FUNC_5(VAR_17, VAR_19, 0, VAR_2, &VAR_18) != VAR_1)
        {
            continue;
        }

        VAR_27 = sizeof(NETRESOURCEW);
        VAR_20 -= sizeof(NETRESOURCEW);

        if (VAR_20 > 0)
        {
            VAR_25 = sizeof(DWORD);
            FUNC_6(VAR_18, VAR_10, ((void*)0), ((void*)0), (BYTE *)&VAR_29->dwType, &VAR_25);
            if (VAR_23 != VAR_4 && VAR_29->dwType != VAR_23)
            {
                VAR_20 += sizeof(NETRESOURCEW);
                FUNC_3(VAR_18);
                continue;
            }

            VAR_29->dwScope = VAR_6;
            VAR_29->dwDisplayType = VAR_3;
            VAR_29->dwUsage = VAR_5;
        }
        else
            VAR_22 = VAR_7;


        VAR_27 += 3 * sizeof(WCHAR);
        VAR_20 -= 3 * sizeof(WCHAR);
        if (VAR_20 > 0)
        {
            VAR_30 -= 3;
            VAR_30[0] = VAR_19[0];
            VAR_30[1] = ':';
            VAR_30[2] = 0;
            VAR_29->lpLocalName = VAR_30;
        }

        VAR_26 = 0;
        VAR_31 = FUNC_7(VAR_18, VAR_11, &VAR_26);
        if (VAR_31)
        {
            VAR_27 += VAR_26;
            VAR_20 -= VAR_26;

            if (VAR_20 > 0)
            {
                VAR_30 -= (VAR_26 / sizeof(WCHAR));
                FUNC_8(VAR_30, VAR_31);
                VAR_29->lpProvider = VAR_30;
            }
            else
                VAR_22 = VAR_7;

            FUNC_2(FUNC_1(), 0, VAR_31);
        }

        VAR_26 = 0;
        VAR_31 = FUNC_7(VAR_18, VAR_12, &VAR_26);
        if (VAR_31)
        {
            VAR_27 += VAR_26;
            VAR_20 -= VAR_26;

            if (VAR_20 > 0)
            {
                VAR_30 -= (VAR_26 / sizeof(WCHAR));
                FUNC_8(VAR_30, VAR_31);
                VAR_29->lpRemoteName = VAR_30;
            }
            else
                VAR_22 = VAR_7;

            FUNC_2(FUNC_1(), 0, VAR_31);
        }

        FUNC_3(VAR_18);

        VAR_29->lpComment = ((void*)0);

        if (VAR_20 < 0)
            break;

        ++VAR_28;
        ++VAR_29;
    }

    if (VAR_28 == 0)
        VAR_22 = VAR_8;

    *VAR_14 = VAR_28;

    if (VAR_22 != VAR_7 && VAR_22 != VAR_8)
        VAR_22 = VAR_9;

    if (VAR_22 == VAR_7)
        *VAR_16 = *VAR_16 + VAR_27;

    return VAR_22;
}
