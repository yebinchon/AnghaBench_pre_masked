
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_3__ {int member_0; } ;
typedef TYPE_1__ FILETIME ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int *,int *) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char*,...) ;

__attribute__((used)) static void FUNC_4(void)
{
    FILETIME VAR_1 = { 0 };
    WORD VAR_2, VAR_3;
    BOOL VAR_4;

    if (0)
    {

        FUNC_0(((void*)0), ((void*)0), ((void*)0));
    }

    FUNC_2(0xdeadbeef);
    VAR_4 = FUNC_0(&VAR_1, ((void*)0), ((void*)0));
    FUNC_3(!VAR_4, "expected failure\n");
    FUNC_3(FUNC_1() == VAR_0,
       "expected ERROR_INVALID_PARAMETER, got %d\n", FUNC_1());

    FUNC_2(0xdeadbeef);
    VAR_4 = FUNC_0(&VAR_1, &VAR_2, ((void*)0));
    FUNC_3(!VAR_4, "expected failure\n");
    FUNC_3(FUNC_1() == VAR_0,
       "expected ERROR_INVALID_PARAMETER, got %d\n", FUNC_1());

    FUNC_2(0xdeadbeef);
    VAR_4 = FUNC_0(&VAR_1, ((void*)0), &VAR_3);
    FUNC_3(!VAR_4, "expected failure\n");
    FUNC_3(FUNC_1() == VAR_0,
       "expected ERROR_INVALID_PARAMETER, got %d\n", FUNC_1());

    FUNC_2(0xdeadbeef);
    VAR_4 = FUNC_0(&VAR_1, &VAR_2, &VAR_3);
    FUNC_3(!VAR_4, "expected failure\n");
    FUNC_3(FUNC_1() == VAR_0,
       "expected ERROR_INVALID_PARAMETER, got %d\n", FUNC_1());
}
