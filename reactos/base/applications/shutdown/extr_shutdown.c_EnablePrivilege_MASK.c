
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int PrivilegeCount; TYPE_1__* Privileges; } ;
struct TYPE_4__ {int Luid; int Attributes; } ;
typedef TYPE_2__ TOKEN_PRIVILEGES ;
typedef int LPCWSTR ;
typedef int * HANDLE ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int *,int ,TYPE_2__*,int ,int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 (int *,int ,int *) ;
 scalar_t__ FUNC_6 (int ,int ,int **) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static DWORD
FUNC_7(LPCWSTR VAR_5, BOOL VAR_6)
{
    DWORD VAR_7 = VAR_1;
    HANDLE VAR_8 = ((void*)0);

    if (FUNC_6(FUNC_3(),
                         VAR_4,
                         &VAR_8))
    {
        TOKEN_PRIVILEGES VAR_9;

        VAR_9.PrivilegeCount = 1;
        VAR_9.Privileges[0].Attributes = (VAR_6 ? VAR_3 : 0);

        if (FUNC_5(((void*)0),
                                  VAR_5,
                                  &VAR_9.Privileges[0].Luid))
        {
            if (FUNC_0(VAR_8, VAR_2, &VAR_9, 0, ((void*)0), ((void*)0)))
            {
                if (FUNC_4() == VAR_0)
                    VAR_7 = VAR_0;
            }
            else
            {
                VAR_7 = FUNC_4();
            }
        }
        else
        {
            VAR_7 = FUNC_4();
        }

        FUNC_1(VAR_8);
    }
    else
    {
        VAR_7 = FUNC_4();
    }


    if (VAR_7 != VAR_1) FUNC_2(VAR_7);

    return VAR_7;
}
