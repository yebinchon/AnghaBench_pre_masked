
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_6__ {scalar_t__ dwCurrentState; } ;
struct TYPE_7__ {int * lpDisplayName; int * lpServiceName; TYPE_1__ Status; } ;
typedef int SERVICE_STATUS ;
typedef int PVOID ;
typedef TYPE_2__* PSERVICE ;
typedef scalar_t__* LPDWORD ;
typedef int LPBYTE ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,int *,scalar_t__*,int *,int *,int *,int *) ;
 scalar_t__ FUNC_3 (int ,int *,int ,int ,int *) ;
 scalar_t__ FUNC_4 (int ,int *,int *,int *,scalar_t__*,int *,int *,int *,int *,int *,int *,int *) ;
 scalar_t__ FUNC_5 (int ,char*,int *,int *,int ,scalar_t__*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_2__* FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static DWORD
FUNC_9(HKEY VAR_8,
                           PSERVICE VAR_9,
                           DWORD VAR_10,
                           PSERVICE *VAR_11,
                           LPDWORD VAR_12,
                           LPDWORD VAR_13)
{
    DWORD VAR_14 = VAR_1;
    WCHAR VAR_15[VAR_3];
    WCHAR VAR_16[VAR_3];
    WCHAR *VAR_17 = VAR_15;
    WCHAR *VAR_18 = VAR_16;
    DWORD VAR_19;
    DWORD VAR_20;
    DWORD VAR_21;
    PSERVICE VAR_22;
    HKEY VAR_23;
    DWORD VAR_24 = VAR_4;
    DWORD VAR_25 = 0;
    DWORD VAR_26 = 0;


    VAR_14 = FUNC_4(VAR_8,
                               ((void*)0),
                               ((void*)0),
                               ((void*)0),
                               &VAR_20,
                               ((void*)0),
                               ((void*)0),
                               ((void*)0),
                               ((void*)0),
                               ((void*)0),
                               ((void*)0),
                               ((void*)0));
    if (VAR_14 != VAR_1)
    {
        FUNC_0("ERROR! Unable to get number of services keys.\n");
        return VAR_14;
    }


    for (VAR_21 = 0; VAR_21 < VAR_20; VAR_21++)
    {
        VAR_19 = VAR_3;
        VAR_14 = FUNC_2(VAR_8,
                                VAR_21,
                                VAR_17,
                                &VAR_19,
                                ((void*)0),
                                ((void*)0),
                                ((void*)0),
                                ((void*)0));
        if (VAR_14 != VAR_1)
            return VAR_14;


        VAR_14 = FUNC_3(VAR_8,
                                VAR_17,
                                0,
                                VAR_2,
                                &VAR_23);
        if (VAR_14 != VAR_1)
            return VAR_14;

        VAR_19 = VAR_3 * sizeof(WCHAR);


        VAR_14 = FUNC_5(VAR_23,
                                   L"DependOnService",
                                   ((void*)0),
                                   ((void*)0),
                                   (LPBYTE)VAR_18,
                                   &VAR_19);




        if (VAR_14 == VAR_1)
        {
            VAR_25 = 0;


            while (FUNC_8(VAR_18 + VAR_25) > 0)
            {
                if (FUNC_7(VAR_18 + VAR_25, VAR_9->lpServiceName) == 0)
                {

                    VAR_22 = FUNC_6(VAR_17);


                    if (!VAR_22)
                    {

                        FUNC_0("This should not happen at this point, report to Developer\n");
                        return VAR_0;
                    }


                    if (VAR_22->Status.dwCurrentState == VAR_7)
                        VAR_24 = VAR_5;


                    if ((VAR_24 == VAR_10) ||
                        (VAR_10 == VAR_6))
                    {

                        VAR_26 += sizeof(SERVICE_STATUS);
                        VAR_26 += (DWORD)((FUNC_8(VAR_22->lpServiceName) + 1) * sizeof(WCHAR));
                        VAR_26 += (DWORD)((FUNC_8(VAR_22->lpDisplayName) + 1) * sizeof(WCHAR));


                        VAR_26 += (2 * sizeof(PVOID));


                        *VAR_12 = *VAR_12 + VAR_26;





                        FUNC_9(VAR_8,
                                                   VAR_22,
                                                   VAR_10,
                                                   VAR_11,
                                                   VAR_12,
                                                   VAR_13);


                        if (VAR_11)
                            VAR_11[*VAR_13] = VAR_22;

                        *VAR_13 = *VAR_13 + 1;
                    }
                }

                VAR_25 += (DWORD)(FUNC_8(VAR_18 + VAR_25) + 1);
            }
        }
        else if (*VAR_12)
        {
            VAR_14 = VAR_1;
        }

        FUNC_1(VAR_23);
    }

    return VAR_14;
}
