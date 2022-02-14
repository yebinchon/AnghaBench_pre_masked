
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int previouspriv ;
struct TYPE_6__ {int PrivilegeCount; TYPE_1__* Privileges; } ;
struct TYPE_5__ {int Luid; int Attributes; } ;
typedef TYPE_2__ TOKEN_PRIVILEGES ;
typedef int LPSYSTEMTIME ;
typedef int HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int ,int ,TYPE_2__*,int,TYPE_2__*,int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (int *,int ,int *) ;
 scalar_t__ FUNC_5 (int ,int,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int ) ;
 int VAR_4 ;
 int VAR_5 ;

BOOL
FUNC_7(LPSYSTEMTIME VAR_6)
{
    HANDLE VAR_7;
    DWORD VAR_8;
    TOKEN_PRIVILEGES VAR_9, VAR_10;
    BOOL VAR_11 = VAR_1;





    if (FUNC_5(FUNC_2(),
                         VAR_4 | VAR_5,
                         &VAR_7))
    {
        VAR_9.PrivilegeCount = 1;
        VAR_9.Privileges[0].Attributes = VAR_2;

        if (FUNC_4(((void*)0),
                                  VAR_3,
                                  &VAR_9.Privileges[0].Luid))
        {
            if (FUNC_0(VAR_7,
                                      VAR_1,
                                      &VAR_9,
                                      sizeof(VAR_10),
                                      &VAR_10,
                                      &VAR_8) &&
                FUNC_3() == VAR_0)
            {



                VAR_11 = FUNC_6(VAR_6);




                if (VAR_10.PrivilegeCount > 0)
                {
                    FUNC_0(VAR_7,
                                          VAR_1,
                                          &VAR_10,
                                          0,
                                          ((void*)0),
                                          0);
                }
            }
        }
        FUNC_1(VAR_7);
    }

    return VAR_11;
}
