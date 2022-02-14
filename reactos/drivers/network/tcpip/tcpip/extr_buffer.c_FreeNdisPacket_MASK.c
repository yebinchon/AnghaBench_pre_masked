
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int UINT ;
typedef int PVOID ;
typedef int PNDIS_PACKET ;
typedef int * PNDIS_BUFFER ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int **) ;
 int FUNC_4 (int *,int *,int *) ;
 int FUNC_5 (int ,int *,int *,int **,int *) ;
 int VAR_1 ;
 int FUNC_6 (int ,char*) ;

VOID FUNC_7
( PNDIS_PACKET VAR_2 )





{
    PNDIS_BUFFER VAR_3, VAR_4;

    FUNC_6(VAR_0, ("Packet (0x%X)\n", VAR_2));


    FUNC_5(VAR_2, ((void*)0), ((void*)0), &VAR_3, ((void*)0));
    for (; VAR_3 != ((void*)0); VAR_3 = VAR_4) {
        PVOID VAR_5;
        UINT VAR_6;

        FUNC_3(VAR_3, &VAR_4);
        FUNC_4(VAR_3, &VAR_5, &VAR_6);
 FUNC_6(VAR_0, ("Freeing ndis buffer (0x%X)\n", VAR_3));
        FUNC_1(VAR_3);
 FUNC_6(VAR_0, ("Freeing exal buffer (0x%X)\n", VAR_5));
        FUNC_0(VAR_5, VAR_1);
    }


    FUNC_2(VAR_2);
}
