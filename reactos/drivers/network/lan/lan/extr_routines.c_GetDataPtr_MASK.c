
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int PUINT ;
typedef int PNDIS_PACKET ;
typedef int PNDIS_BUFFER ;
typedef int PCHAR ;


 int FUNC_0 (int ,int *,int *,int *,int *) ;
 int FUNC_1 (int ,int ,int *,int ) ;

void FUNC_2( PNDIS_PACKET VAR_0,
   UINT VAR_1,
   PCHAR *VAR_2,
   PUINT VAR_3 ) {
    PNDIS_BUFFER VAR_4;

    FUNC_0(VAR_0, ((void*)0), ((void*)0), &VAR_4, ((void*)0));
    if( !VAR_4 ) return;
    FUNC_1( VAR_4, VAR_1, VAR_2, VAR_3 );
}
