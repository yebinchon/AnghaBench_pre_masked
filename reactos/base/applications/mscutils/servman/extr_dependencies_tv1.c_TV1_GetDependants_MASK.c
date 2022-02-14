
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_4__ {char* lpDependencies; } ;
typedef int SC_HANDLE ;
typedef char* LPWSTR ;
typedef TYPE_1__* LPQUERY_SERVICE_CONFIG ;
typedef int DWORD ;


 int FUNC_0 (char*,char*,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 void* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,TYPE_1__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (int ,TYPE_1__*,int,int*) ;

LPWSTR
FUNC_6(SC_HANDLE VAR_2)
{
    LPQUERY_SERVICE_CONFIG VAR_3;
    LPWSTR VAR_4 = ((void*)0);
    DWORD VAR_5;
    DWORD VAR_6;


    if (!FUNC_5(VAR_2,
                             ((void*)0),
                             0,
                             &VAR_5) &&
        FUNC_1() == VAR_0)
    {
        VAR_3 = FUNC_3(VAR_1,
                                    0,
                                    VAR_5);
        if (VAR_3)
        {
            if (FUNC_5(VAR_2,
                                    VAR_3,
                                    VAR_5,
                                    &VAR_5))
            {

                if (VAR_3->lpDependencies &&
                    *VAR_3->lpDependencies != '\0')
                {
                    VAR_4 = VAR_3->lpDependencies;
                    VAR_6 = 0;


                    for (;;)
                    {
                        VAR_6++;

                        if (!*VAR_4 && !*(VAR_4 + 1))
                        {
                            VAR_6++;
                            break;
                        }

                        VAR_4++;
                    }


                    VAR_6 *= sizeof(WCHAR);
                    VAR_4 = FUNC_3(VAR_1,
                                      0,
                                      VAR_6);
                    if (VAR_4)
                    {
                        FUNC_0(VAR_4,
                                   VAR_3->lpDependencies,
                                   VAR_6);
                    }
                }
            }

            FUNC_4(FUNC_2(),
                     0,
                     VAR_3);
        }
    }

    return VAR_4;
}
