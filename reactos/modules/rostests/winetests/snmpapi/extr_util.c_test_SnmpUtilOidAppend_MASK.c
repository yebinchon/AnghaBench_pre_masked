
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_5__ {int member_0; int* member_1; int idLength; int* ids; } ;
typedef int INT ;
typedef TYPE_1__ AsnObjectIdentifier ;


 int* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int*,int*,int) ;
 int FUNC_4 (int,char*) ;

__attribute__((used)) static void FUNC_5(void)
{
    INT VAR_0;
    UINT *VAR_1;
    static UINT VAR_2[] = { 4, 5, 6 };
    static AsnObjectIdentifier VAR_3;
    static AsnObjectIdentifier VAR_4 = { 3, VAR_2 };

    VAR_1 = FUNC_0(3 * sizeof(UINT));
    VAR_1[0] = 1;
    VAR_1[1] = 2;
    VAR_1[2] = 3;

    VAR_3 = 3;
    VAR_3 = VAR_1;


    if(0)
    {
        VAR_0 = FUNC_1(((void*)0), ((void*)0));
        FUNC_4(!VAR_0, "SnmpUtilOidAppend succeeded\n");

        VAR_0 = FUNC_1(&VAR_3, ((void*)0));
        FUNC_4(VAR_0, "SnmpUtilOidAppend failed\n");

        VAR_0 = FUNC_1(((void*)0), &VAR_4);
        FUNC_4(!VAR_0, "SnmpUtilOidAppend succeeded\n");
    }

    VAR_0 = FUNC_1(&VAR_3, &VAR_4);
    FUNC_4(VAR_0, "SnmpUtilOidAppend failed\n");
    FUNC_4(VAR_3 == 6, "SnmpUtilOidAppend failed\n");
    FUNC_4(!FUNC_3(&VAR_3[3], VAR_2, 3 * sizeof(UINT)),
       "SnmpUtilOidAppend failed\n");

    FUNC_2(&VAR_3);
}
