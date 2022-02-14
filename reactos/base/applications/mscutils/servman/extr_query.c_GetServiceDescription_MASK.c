
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_4__ {scalar_t__ lpDescription; } ;
typedef TYPE_1__ SERVICE_DESCRIPTIONW ;
typedef TYPE_1__ SERVICE_DESCRIPTION ;
typedef int * SC_HANDLE ;
typedef int * LPWSTR ;
typedef int * LPBYTE ;
typedef int DWORD ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int * FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,TYPE_1__*) ;
 int * FUNC_5 (int *,int *,int ) ;
 int * FUNC_6 (int *,int *,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_7 (int *,int ,int *,int,int*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (int *,int,scalar_t__) ;
 int FUNC_9 (scalar_t__) ;

LPWSTR
FUNC_10(LPWSTR VAR_5)
{
    SC_HANDLE VAR_6 = ((void*)0);
    SC_HANDLE VAR_7 = ((void*)0);
    SERVICE_DESCRIPTIONW *VAR_8 = ((void*)0);
    LPWSTR VAR_9 = ((void*)0);
    DWORD VAR_10 = 0;
    DWORD VAR_11;

    VAR_6 = FUNC_5(((void*)0),
                                ((void*)0),
                                VAR_2);
    if (VAR_6 == ((void*)0))
    {
        FUNC_1();
        return ((void*)0);
    }

    VAR_7 = FUNC_6(VAR_6,
                       VAR_5,
                       VAR_4);
    if (VAR_7)
    {
        if (!FUNC_7(VAR_7,
                                  VAR_3,
                                  ((void*)0),
                                  0,
                                  &VAR_10))
        {
            if (FUNC_2() == VAR_0)
            {
                VAR_8 = (SERVICE_DESCRIPTION *) FUNC_3(VAR_1,
                                                                        0,
                                                                        VAR_10);
                if (VAR_8 == ((void*)0))
                    goto cleanup;

                if (FUNC_7(VAR_7,
                                         VAR_3,
                                         (LPBYTE)VAR_8,
                                         VAR_10,
                                         &VAR_10))
                {
                    if (VAR_8->lpDescription)
                    {
                        VAR_11 = FUNC_9(VAR_8->lpDescription) + 1;
                        VAR_9 = FUNC_3(VAR_1,
                                                  0,
                                                  VAR_11 * sizeof(WCHAR));
                        if (VAR_9)
                        {
                            FUNC_8(VAR_9,
                                           VAR_11,
                                           VAR_8->lpDescription);
                        }
                    }
                }
            }
        }
    }

cleanup:
    if (VAR_8)
        FUNC_4(VAR_1,
                 0,
                 VAR_8);
    if (VAR_6 != ((void*)0))
        FUNC_0(VAR_6);
    if (VAR_7 != ((void*)0))
        FUNC_0(VAR_7);

    return VAR_9;
}
