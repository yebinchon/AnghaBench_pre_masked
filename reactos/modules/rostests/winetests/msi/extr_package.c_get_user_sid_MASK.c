
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int Sid; } ;
struct TYPE_7__ {TYPE_1__ User; } ;
typedef TYPE_2__ TOKEN_USER ;
typedef int HANDLE ;
typedef int DWORD ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,TYPE_2__*,int ,int *) ;
 TYPE_2__* FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,TYPE_2__*) ;
 int FUNC_6 (int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_7 (int ,char**) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static char *FUNC_9(void)
{
    HANDLE VAR_2;
    DWORD VAR_3 = 0;
    TOKEN_USER *VAR_4;
    char *VAR_5 = ((void*)0);

    if (!&FUNC_7)
    {
        FUNC_8("ConvertSidToStringSidA is not available\n");
        return ((void*)0);
    }
    FUNC_6(FUNC_1(), VAR_0, &VAR_2);
    FUNC_3(VAR_2, VAR_1, ((void*)0), VAR_3, &VAR_3);

    VAR_4 = FUNC_4(FUNC_2(), 0, VAR_3);
    FUNC_3(VAR_2, VAR_1, VAR_4, VAR_3, &VAR_3);
    FUNC_7(VAR_4->User.Sid, &VAR_5);
    FUNC_5(FUNC_2(), 0, VAR_4);

    FUNC_0(VAR_2);
    return VAR_5;
}
