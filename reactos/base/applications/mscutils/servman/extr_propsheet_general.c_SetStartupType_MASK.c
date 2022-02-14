
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int VOID ;
typedef scalar_t__ UINT ;
struct TYPE_4__ {int dwStartType; } ;
typedef scalar_t__ LPWSTR ;
typedef TYPE_1__* LPQUERY_SERVICE_CONFIG ;
typedef int LPARAM ;
typedef int HWND ;
typedef int DWORD ;


 scalar_t__ FUNC_0 (scalar_t__*,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;
 TYPE_1__* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int ,TYPE_1__*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (scalar_t__) ;
 int VAR_5 ;



 int FUNC_5 (int ,int ,int,int ) ;
 int VAR_6 ;

__attribute__((used)) static VOID
FUNC_6(LPWSTR VAR_7,
               HWND VAR_8)
{
    HWND VAR_9;
    LPQUERY_SERVICE_CONFIG VAR_10;
    LPWSTR VAR_11;
    DWORD VAR_12 = 0;
    UINT VAR_13;

    VAR_9 = FUNC_1(VAR_8, VAR_2);

    for (VAR_13 = VAR_3; VAR_13 <= VAR_4; VAR_13++)
    {
        if (FUNC_0(&VAR_11,
                               VAR_6,
                               VAR_13))
        {
            FUNC_5(VAR_9,
                         VAR_0,
                         0,
                         (LPARAM)VAR_11);
            FUNC_4(VAR_11);
        }
    }

    VAR_10 = FUNC_2(VAR_7);

    if (VAR_10)
    {
        switch (VAR_10->dwStartType)
        {
            case 130: VAR_12 = 0; break;
            case 129: VAR_12 = 1; break;
            case 128: VAR_12 = 2; break;
        }

        FUNC_5(VAR_9,
                     VAR_1,
                     VAR_12,
                     0);

        FUNC_3(VAR_5,
                 0,
                 VAR_10);
    }
}
