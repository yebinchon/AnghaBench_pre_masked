
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int PrivilegeCount; TYPE_1__* Privileges; } ;
struct TYPE_4__ {scalar_t__ Attributes; void* Luid; } ;
typedef TYPE_2__ TOKEN_PRIVILEGES ;
typedef void* LUID ;
typedef int HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ,int ,TYPE_2__*,int,int *,int*) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (int *,int ,void**) ;
 int FUNC_4 (int ,int ,int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int,char*,int) ;

__attribute__((used)) static void FUNC_6(void)
{
    TOKEN_PRIVILEGES VAR_4;
    HANDLE VAR_5;
    DWORD VAR_6;
    LUID VAR_7;
    BOOL VAR_8;

    if (!FUNC_4(FUNC_2(), VAR_3, &VAR_5))
        return;

    if (!FUNC_3(((void*)0), VAR_1, &VAR_7))
    {
        FUNC_1(VAR_5);
        return;
    }

    VAR_4.PrivilegeCount = 1;
    VAR_4.Privileges[0].Luid = VAR_7;
    VAR_4.Privileges[0].Attributes = VAR_2;

    VAR_6 = 0xdeadbeef;
    VAR_8 = FUNC_0(VAR_5, VAR_0, &VAR_4, sizeof(TOKEN_PRIVILEGES), ((void*)0), &VAR_6);
    FUNC_5(VAR_8, "got %d\n", VAR_8);
    FUNC_5(VAR_6 == 0xdeadbeef, "got length %d\n", VAR_6);


    VAR_4.PrivilegeCount = 1;
    VAR_4.Privileges[0].Luid = VAR_7;
    VAR_4.Privileges[0].Attributes = 0;
    VAR_8 = FUNC_0(VAR_5, VAR_0, &VAR_4, sizeof(TOKEN_PRIVILEGES), ((void*)0), ((void*)0));
    FUNC_5(VAR_8, "got %d\n", VAR_8);

    FUNC_1(VAR_5);
}
