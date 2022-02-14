
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int Revision; } ;
struct TYPE_4__ {int member_0; } ;
typedef TYPE_1__ SID_IDENTIFIER_AUTHORITY ;
typedef TYPE_2__ SID ;
typedef int PSID ;
typedef int BOOL ;


 int FUNC_0 (TYPE_1__*,int,int ,int ,int ,int ,int ,int ,int ,int ,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,char*,...) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void FUNC_9(void)
{
    PSID VAR_8, VAR_9;
    BOOL VAR_10;
    SID_IDENTIFIER_AUTHORITY VAR_11 = { VAR_6 };
    SID_IDENTIFIER_AUTHORITY VAR_12 = { VAR_4 };

    FUNC_4(0xdeadbeef);
    VAR_10 = FUNC_0(&VAR_12, 2, VAR_3,
        VAR_0, 0, 0, 0, 0, 0, 0, &VAR_8);
    if (!VAR_10 && FUNC_3() == VAR_1)
    {
        FUNC_8("AllocateAndInitializeSid is not implemented\n");
        return;
    }
    FUNC_7(VAR_10, "AllocateAndInitializeSid failed with error %d\n", FUNC_3());
    FUNC_7(FUNC_3() == 0xdeadbeef,
       "AllocateAndInitializeSid shouldn't have set last error to %d\n",
       FUNC_3());

    VAR_10 = FUNC_0(&VAR_11, 1, VAR_5,
        0, 0, 0, 0, 0, 0, 0, &VAR_9);
    FUNC_7(VAR_10, "AllocateAndInitializeSid failed with error %d\n", FUNC_3());

    FUNC_4(0xdeadbeef);
    VAR_10 = FUNC_1(VAR_8, VAR_9);
    FUNC_7(!VAR_10, "World and domain admins sids shouldn't have been equal\n");
    FUNC_7(FUNC_3() == VAR_2 ||
       FUNC_5(FUNC_3() == 0xdeadbeef),
       "EqualSid should have set last error to ERROR_SUCCESS instead of %d\n",
       FUNC_3());

    FUNC_4(0xdeadbeef);
    VAR_9 = FUNC_2(VAR_9);
    FUNC_7(!VAR_9, "FreeSid should have returned NULL instead of %p\n", VAR_9);
    FUNC_7(FUNC_3() == 0xdeadbeef,
       "FreeSid shouldn't have set last error to %d\n",
       FUNC_3());

    VAR_10 = FUNC_0(&VAR_12, 2, VAR_3,
        VAR_0, 0, 0, 0, 0, 0, 0, &VAR_9);
    FUNC_7(VAR_10, "AllocateAndInitializeSid failed with error %d\n", FUNC_3());

    FUNC_4(0xdeadbeef);
    VAR_10 = FUNC_1(VAR_8, VAR_9);
    FUNC_7(VAR_10, "Same sids should have been equal %s != %s\n",
       FUNC_6(VAR_8), FUNC_6(VAR_9));
    FUNC_7(FUNC_3() == VAR_2 ||
       FUNC_5(FUNC_3() == 0xdeadbeef),
       "EqualSid should have set last error to ERROR_SUCCESS instead of %d\n",
       FUNC_3());

    ((SID *)VAR_9)->Revision = 2;
    FUNC_4(0xdeadbeef);
    VAR_10 = FUNC_1(VAR_8, VAR_9);
    FUNC_7(!VAR_10, "EqualSid with invalid sid should have returned FALSE\n");
    FUNC_7(FUNC_3() == VAR_2 ||
       FUNC_5(FUNC_3() == 0xdeadbeef),
       "EqualSid should have set last error to ERROR_SUCCESS instead of %d\n",
       FUNC_3());
    ((SID *)VAR_9)->Revision = VAR_7;

    FUNC_2(VAR_8);
    FUNC_2(VAR_9);
}
