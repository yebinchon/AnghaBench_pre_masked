
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
typedef scalar_t__ HANDLE ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,TYPE_2__*,int ,int *,int *) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_4 (int *,int ,int *) ;
 scalar_t__ FUNC_5 (int ,int ,scalar_t__*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static BOOL FUNC_7(LPCWSTR VAR_8, BOOL VAR_9)
{
    HANDLE VAR_10 = VAR_4;
    TOKEN_PRIVILEGES VAR_11;
    DWORD VAR_12 = VAR_2;

    if (FUNC_5(FUNC_2(), VAR_6, &VAR_10))
    {
        VAR_11.PrivilegeCount = 1;
        VAR_11.Privileges[0].Attributes = (VAR_9 ? VAR_5 : 0);

        if (FUNC_4(((void*)0), VAR_8, &VAR_11.Privileges[0].Luid))
        {
            if (FUNC_0(VAR_10, VAR_3, &VAR_11, 0, ((void*)0), ((void*)0)))
            {
                if (FUNC_3() == VAR_1)
                {
                    VAR_12 = VAR_1;
                    goto fail;
                }
            }
            else
            {
                VAR_12 = FUNC_3();
                goto fail;
            }
        }
        else
        {
            VAR_12 = FUNC_3();
            goto fail;
        }
    }
    else
    {
        VAR_12 = FUNC_3();
        goto fail;
    }

    FUNC_1(VAR_10);
    return VAR_7;

fail:


    if (VAR_12 == VAR_2) VAR_12 = VAR_0;
    if (VAR_10 != VAR_4) FUNC_1(VAR_10);

    FUNC_6(VAR_12);
    return VAR_3;
}
