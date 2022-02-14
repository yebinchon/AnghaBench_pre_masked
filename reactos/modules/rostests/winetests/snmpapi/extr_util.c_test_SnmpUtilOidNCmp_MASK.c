
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_4__ {int member_0; int* member_1; int idLength; int ids; } ;
typedef scalar_t__ INT ;
typedef TYPE_1__ AsnObjectIdentifier ;


 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int,char*,...) ;

__attribute__((used)) static void FUNC_3(void)
{
    INT VAR_0;
    static UINT VAR_1[] = { 1, 2, 3, 4 };
    static UINT VAR_2[] = { 5, 6, 7, 8 };
    static AsnObjectIdentifier VAR_3 = { 4, VAR_1 };
    static AsnObjectIdentifier VAR_4 = { 4, VAR_2 };


    if(0)
    {
        VAR_0 = FUNC_0(((void*)0), ((void*)0), 0);
        FUNC_2(!VAR_0, "SnmpUtilOidNCmp succeeded\n");

        VAR_0 = FUNC_0(((void*)0), ((void*)0), 1);
        FUNC_2(!VAR_0, "SnmpUtilOidNCmp succeeded\n");

        VAR_0 = FUNC_0(&VAR_3, ((void*)0), 0);
        FUNC_2(!VAR_0, "SnmpUtilOidNCmp succeeded\n");

        VAR_0 = FUNC_0(&VAR_3, ((void*)0), 1);
        FUNC_2(!VAR_0, "SnmpUtilOidNCmp succeeded\n");

        VAR_0 = FUNC_0(((void*)0), &VAR_4, 0);
        FUNC_2(!VAR_0, "SnmpUtilOidNCmp succeeded\n");

        VAR_0 = FUNC_0(((void*)0), &VAR_4, 1);
        FUNC_2(!VAR_0, "SnmpUtilOidNCmp succeeded\n");
    }

    VAR_0 = FUNC_0(&VAR_3, &VAR_3, 0);
    FUNC_2(!VAR_0, "SnmpUtilOidNCmp failed\n");

    VAR_0 = FUNC_0(&VAR_3, &VAR_3, 4);
    FUNC_2(!VAR_0, "SnmpUtilOidNCmp failed\n");

    VAR_0 = FUNC_0(&VAR_3, &VAR_4, 4);
    FUNC_2(VAR_0 < 0, "SnmpUtilOidNCmp failed: %d\n", VAR_0);

    VAR_0 = FUNC_0(&VAR_4, &VAR_3, 4);
    FUNC_2(VAR_0 > 0, "SnmpUtilOidNCmp failed: %d\n", VAR_0);

    VAR_3 = 3;
    FUNC_1(VAR_3, VAR_4, sizeof(UINT) * 4);
    VAR_0 = FUNC_0(&VAR_3, &VAR_3, 4);
    FUNC_2(!VAR_0, "SnmpUtilOidNCmp failed: %d\n", VAR_0);
    VAR_0 = FUNC_0(&VAR_4, &VAR_3, 4);
    FUNC_2(VAR_0 > 0, "SnmpUtilOidNCmp failed: %d\n", VAR_0);
    VAR_0 = FUNC_0(&VAR_3, &VAR_4, 4);
    FUNC_2(VAR_0 < 0, "SnmpUtilOidNCmp failed: %d\n", VAR_0);

    VAR_0 = FUNC_0(&VAR_3, &VAR_4, 2);
    FUNC_2(!VAR_0, "SnmpUtilOidNCmp failed: %d\n", VAR_0);
    VAR_0 = FUNC_0(&VAR_4, &VAR_3, 2);
    FUNC_2(!VAR_0, "SnmpUtilOidNCmp failed: %d\n", VAR_0);
}
