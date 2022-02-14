
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* pbData; } ;
typedef TYPE_1__* PCRYPT_DATA_BLOB ;
typedef size_t DWORD ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(DWORD VAR_0, PCRYPT_DATA_BLOB VAR_1)
{
    DWORD VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
        FUNC_0(VAR_1[VAR_2].pbData);
    FUNC_0(VAR_1);
}
