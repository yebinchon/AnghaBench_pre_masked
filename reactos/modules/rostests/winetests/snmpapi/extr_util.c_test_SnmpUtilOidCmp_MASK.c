
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_4__ {int member_0; int* member_1; } ;
typedef scalar_t__ INT ;
typedef TYPE_1__ AsnObjectIdentifier ;


 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (int,char*) ;

__attribute__((used)) static void FUNC_2(void)
{
    INT VAR_0;
    static UINT VAR_1[] = { 1, 2, 3 };
    static UINT VAR_2[] = { 1, 2, 3, 4 };
    static AsnObjectIdentifier VAR_3 = { 3, VAR_1 };
    static AsnObjectIdentifier VAR_4 = { 4, VAR_2 };

    if (0) {
    VAR_0 = FUNC_0(((void*)0), ((void*)0));
    FUNC_1(!VAR_0, "SnmpUtilOidCmp succeeded\n");

    VAR_0 = FUNC_0(&VAR_3, ((void*)0));
    FUNC_1(!VAR_0, "SnmpUtilOidCmp succeeded\n");

    VAR_0 = FUNC_0(((void*)0), &VAR_4);
    FUNC_1(!VAR_0, "SnmpUtilOidCmp succeeded\n");
    }

    VAR_0 = FUNC_0(&VAR_4, &VAR_3);
    FUNC_1(VAR_0 > 0, "SnmpUtilOidCmp failed\n");

    VAR_0 = FUNC_0(&VAR_3, &VAR_4);
    FUNC_1(VAR_0 < 0, "SnmpUtilOidCmp failed\n");
}
