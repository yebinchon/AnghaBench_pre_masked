
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ dwVersion; scalar_t__ Reserved3; scalar_t__ EncryptMessage; scalar_t__ Reserved4; scalar_t__ DecryptMessage; int Reserved2; } ;
struct TYPE_5__ {scalar_t__ dwVersion; scalar_t__ Reserved3; scalar_t__ EncryptMessage; scalar_t__ Reserved4; scalar_t__ DecryptMessage; int Reserved2; } ;
typedef TYPE_1__* PSecurityFunctionTableW ;
typedef TYPE_2__* PSecurityFunctionTableA ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*,...) ;
 TYPE_2__* FUNC_1 () ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(void)
{
    PSecurityFunctionTableA VAR_1;
    PSecurityFunctionTableW VAR_2;

    VAR_1 = FUNC_1();
    FUNC_0(VAR_1 != ((void*)0), "pInitSecurityInterfaceA failed\n");
    FUNC_0(VAR_1->dwVersion == VAR_0, "wrong dwVersion %d in security function table\n", VAR_1->dwVersion);
    FUNC_0(!VAR_1->Reserved2,
       "Reserved2 should be NULL instead of %p in security function table\n",
       VAR_1->Reserved2);
    FUNC_0(VAR_1->Reserved3 == VAR_1->EncryptMessage,
       "Reserved3 should be equal to EncryptMessage in the security function table\n");
    FUNC_0(VAR_1->Reserved4 == VAR_1->DecryptMessage,
       "Reserved4 should be equal to DecryptMessage in the security function table\n");

    if (!&FUNC_2)
    {
        FUNC_3("InitSecurityInterfaceW not exported by secur32.dll\n");
        return;
    }

    VAR_2 = FUNC_2();
    FUNC_0(VAR_2 != ((void*)0), "pInitSecurityInterfaceW failed\n");
    FUNC_0(VAR_2->dwVersion == VAR_0, "wrong dwVersion %d in security function table\n", VAR_2->dwVersion);
    FUNC_0(!VAR_2->Reserved2, "Reserved2 should be NULL instead of %p in security function table\n", VAR_2->Reserved2);
    FUNC_0(VAR_2->Reserved3 == VAR_2->EncryptMessage, "Reserved3 should be equal to EncryptMessage in the security function table\n");
    FUNC_0(VAR_2->Reserved4 == VAR_2->DecryptMessage, "Reserved4 should be equal to DecryptMessage in the security function table\n");
}
