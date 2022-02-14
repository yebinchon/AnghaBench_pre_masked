
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_5__ {int Address; } ;
typedef int* PUCHAR ;
typedef TYPE_1__* PIP_ADDRESS ;
typedef int BOOLEAN ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int VAR_2 ;

BOOLEAN FUNC_2(
    PIP_ADDRESS VAR_3,
    PIP_ADDRESS VAR_4,
    UINT VAR_5)
{
    PUCHAR VAR_6 = (PUCHAR)&VAR_3->Address;
    PUCHAR VAR_7 = (PUCHAR)&VAR_4->Address;

    FUNC_1(VAR_0, ("Called. Address (0x%X)  Prefix (0x%X)  Length (%d).\n", VAR_3, VAR_4, VAR_5));







    if (VAR_5 == 0) {
        return VAR_1;
    }


    while (VAR_5 > 8) {
        if (*VAR_6++ != *VAR_7++)
            return VAR_1;
        VAR_5 -= 8;
    }


    if ((VAR_5 > 0) && ((*VAR_6 >> (8 - VAR_5)) != (*VAR_7 >> (8 - VAR_5))))
        return VAR_1;

    return VAR_2;
}
