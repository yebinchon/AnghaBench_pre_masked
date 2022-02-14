
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int VOID ;
typedef scalar_t__ ULONG_PTR ;
typedef scalar_t__ ULONG ;
struct TYPE_4__ {scalar_t__ BytesInUse; } ;
typedef int * PUCHAR ;
typedef TYPE_1__* PFILE_RECORD_HEADER ;
typedef int PDEVICE_EXTENSION ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,TYPE_1__*) ;

VOID
FUNC_2(PDEVICE_EXTENSION VAR_0,
                   PFILE_RECORD_HEADER VAR_1)
{
    ULONG VAR_2, VAR_3;


    for (VAR_2 = 0; VAR_2 < VAR_1->BytesInUse; VAR_2 += 8)
    {

        FUNC_0("\t%03x\t", VAR_2);


        for (VAR_3 = 0; VAR_3 < 8; VAR_3++)
            FUNC_0("%02x ", *(PUCHAR)((ULONG_PTR)VAR_1 + VAR_2 + VAR_3));
        FUNC_0("\n");
    }

    FUNC_1(VAR_0, VAR_1);
}
