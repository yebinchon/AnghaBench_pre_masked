
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int PrivilegeCount; TYPE_1__* Privileges; } ;
struct TYPE_4__ {scalar_t__ Attributes; int Luid; } ;
typedef TYPE_2__ TOKEN_PRIVILEGES ;
typedef int LUID ;
typedef int HANDLE ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ,scalar_t__,TYPE_2__*,int,int *,int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (int *,int ,int *) ;
 int FUNC_5 (int ,int ,int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static BOOL
FUNC_6(BOOL VAR_6)
{
    TOKEN_PRIVILEGES VAR_7;
    HANDLE VAR_8;
    LUID VAR_9;

    if (!FUNC_5(FUNC_2(),
                          VAR_4,
                          &VAR_8))
    {
        return VAR_1;
    }

    if(!FUNC_4(((void*)0),
                             VAR_2,
                             &VAR_9))
    {
        FUNC_1(VAR_8);
        return VAR_1;
    }

    VAR_7.PrivilegeCount = 1;
    VAR_7.Privileges[0].Luid = VAR_9;

    if (VAR_6)
    {
        VAR_7.Privileges[0].Attributes = VAR_3;
    }
    else
    {
        VAR_7.Privileges[0].Attributes = 0;
    }

    FUNC_0(VAR_8,
                          VAR_1,
                          &VAR_7,
                          sizeof(TOKEN_PRIVILEGES),
                          ((void*)0),
                          ((void*)0));
    if (FUNC_3() != VAR_0)
    {
        FUNC_1(VAR_8);
        return VAR_1;
    }

    FUNC_1(VAR_8);

    return VAR_5;
}
