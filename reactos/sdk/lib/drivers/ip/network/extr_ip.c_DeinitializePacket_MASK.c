
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_4__ {int Type; scalar_t__ Header; int MappedHeader; int * NdisPacket; scalar_t__ ReturnPacket; } ;
typedef TYPE_1__* PVOID ;
typedef TYPE_1__* PIP_PACKET ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int **,int) ;
 int VAR_1 ;
 int FUNC_4 (int ,char*) ;

VOID FUNC_5(
    PVOID VAR_2)





{
    PIP_PACKET VAR_3 = VAR_2;

    FUNC_4(VAR_0, ("Freeing object: 0x%p\n", VAR_2));


    FUNC_0(VAR_3->Type != 0xFF);
    VAR_3->Type = 0xFF;


    if (VAR_3->NdisPacket != ((void*)0))
    {
        if (VAR_3->ReturnPacket)
        {

            FUNC_4(VAR_0, ("Returning packet 0x%p\n",
                                    VAR_3->NdisPacket));
            FUNC_3(&VAR_3->NdisPacket, 1);
        }
        else
        {

            FUNC_4(VAR_0, ("Freeing packet 0x%p\n",
                                    VAR_3->NdisPacket));
            FUNC_2(VAR_3->NdisPacket);
        }
    }


    if (!VAR_3->MappedHeader && VAR_3->Header)
    {

        FUNC_4(VAR_0, ("Freeing header: 0x%p\n",
                                VAR_3->Header));
        FUNC_1(VAR_3->Header,
                          VAR_1);
    }
}
