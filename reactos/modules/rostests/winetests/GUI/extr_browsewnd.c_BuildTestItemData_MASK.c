
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int szRunCmd; int szName; } ;
typedef int TEST_ITEM ;
typedef TYPE_1__* PTEST_ITEM ;
typedef int LPWSTR ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static PTEST_ITEM
FUNC_3(LPWSTR VAR_2,
                  LPWSTR VAR_3)
{
    PTEST_ITEM VAR_4;

    VAR_4 = (PTEST_ITEM)FUNC_1(FUNC_0(),
                                  0,
                                  sizeof(TEST_ITEM));
    if (VAR_4)
    {
        if (VAR_2)
        {
            FUNC_2(VAR_4->szName, VAR_2, VAR_0);
        }
        if (VAR_3)
        {
            FUNC_2(VAR_4->szRunCmd, VAR_3, VAR_1);
        }
    }

    return VAR_4;
}
