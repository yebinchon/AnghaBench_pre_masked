
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG_PTR ;
typedef scalar_t__ ULONG ;
typedef int * PUCHAR ;


 int FUNC_0 (char*,...) ;

void
FUNC_1(ULONG_PTR VAR_0, ULONG VAR_1)
{
    ULONG VAR_2, VAR_3;


    for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2 += 8)
    {

        FUNC_0("\t%03x\t", VAR_2);


        for (VAR_3 = 0; VAR_3 < 8; VAR_3++)
            FUNC_0("%02x ", *(PUCHAR)(VAR_0 + VAR_2 + VAR_3));
        FUNC_0("\n");
    }
}
