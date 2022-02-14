
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int PrivilegeCount; TYPE_1__* Privileges; } ;
struct TYPE_4__ {int Attributes; int Luid; } ;
typedef TYPE_2__ TOKEN_PRIVILEGES ;
typedef int LUID ;
typedef int LPCWSTR ;
typedef int HANDLE ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int ,int ,TYPE_2__*,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int *,int ,int *) ;
 scalar_t__ FUNC_4 (int ,int,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

BOOL FUNC_5(LPCWSTR VAR_4, BOOL VAR_5)
{
    HANDLE VAR_6;
    LUID VAR_7;
    TOKEN_PRIVILEGES VAR_8;
    BOOL VAR_9;

    VAR_9 = FUNC_4(FUNC_2(),
                           VAR_2 | VAR_3,
                           &VAR_6);
    if (!VAR_9)
        return VAR_9;

    VAR_9 = FUNC_3(((void*)0), VAR_4, &VAR_7);
    if (VAR_9)
    {
        VAR_8.PrivilegeCount = 1;
        VAR_8.Privileges[0].Luid = VAR_7;
        VAR_8.Privileges[0].Attributes = VAR_5 ? VAR_1 : 0;

        VAR_9 = FUNC_0(VAR_6, VAR_0, &VAR_8, 0, 0, 0);
    }

    FUNC_1(VAR_6);
    return VAR_9;
}
