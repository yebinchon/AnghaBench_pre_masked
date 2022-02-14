
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int UINT ;
typedef int PVOID ;
typedef int * PNDIS_PACKET ;
typedef int * PNDIS_BUFFER ;
typedef int PCHAR ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int **) ;
 int FUNC_3 (int *,int *,int *,int **,int *) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int *,int *,int *) ;
 int FUNC_7 (int ) ;

VOID FUNC_8
( PNDIS_PACKET VAR_1,
  PCHAR VAR_2,
  UINT VAR_3 )





{
    PNDIS_BUFFER VAR_4, VAR_5;

    FUNC_4(VAR_0, ("Packet (0x%X)\n", VAR_1));


    FUNC_3(VAR_1, ((void*)0), ((void*)0), &VAR_4, ((void*)0));
    for (; VAR_4 != ((void*)0); VAR_4 = VAR_5) {
        PVOID VAR_6;
        UINT VAR_7;

        FUNC_2(VAR_4, &VAR_5);
        FUNC_6(VAR_4, &VAR_6, &VAR_7);
 FUNC_5(VAR_2,VAR_3,VAR_4);
        FUNC_0(VAR_4);
        FUNC_7(VAR_6);
    }


    FUNC_5(VAR_2,VAR_3,VAR_1);
    FUNC_1(VAR_1);
}
