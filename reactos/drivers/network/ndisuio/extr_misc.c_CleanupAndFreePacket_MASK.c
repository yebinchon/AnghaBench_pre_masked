
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int ULONG ;
typedef int PVOID ;
typedef int PNDIS_PACKET ;
typedef int PNDIS_BUFFER ;
typedef scalar_t__ BOOLEAN ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ VAR_0 ;

VOID
FUNC_5(PNDIS_PACKET VAR_1, BOOLEAN VAR_2)
{
    PNDIS_BUFFER VAR_3;
    PVOID VAR_4;
    ULONG VAR_5;


    while (VAR_0)
    {

        FUNC_4(VAR_1, &VAR_3);
        if (!VAR_3)
            break;


        FUNC_3(VAR_3, &VAR_4, &VAR_5);


        FUNC_1(VAR_3);

        if (VAR_2)
        {

            FUNC_0(VAR_4);
        }
    }


    FUNC_2(VAR_1);
}
