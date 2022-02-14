
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_4__ {scalar_t__ lpDisplayName; } ;
typedef int* LPWSTR ;
typedef TYPE_1__* LPQUERY_SERVICE_CONFIG ;
typedef int LPARAM ;
typedef int HWND ;


 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int*) ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ,int ,int ) ;

__attribute__((used)) static VOID
FUNC_4(HWND VAR_1,
                      LPWSTR VAR_2)
{
    LPQUERY_SERVICE_CONFIG VAR_3;
    LPWSTR VAR_4;

    VAR_4 = VAR_2;


    for (;;)
    {

        if (*VAR_4 == L'\0' && *(VAR_4 + 1) == L'\0')
            break;



        if (*VAR_4 == L'\0')
            VAR_4++;


        VAR_3 = FUNC_1(VAR_4);
        if (VAR_3)
        {

            FUNC_3(VAR_1,
                         VAR_0,
                         0,
                         (LPARAM)VAR_3->lpDisplayName);

            FUNC_2(FUNC_0(), 0, VAR_3);
        }


        while (*VAR_4 != L'\0')
            VAR_4++;
    }
}
