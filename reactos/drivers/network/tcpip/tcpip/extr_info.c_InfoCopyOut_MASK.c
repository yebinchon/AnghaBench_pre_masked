
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int TDI_STATUS ;
typedef scalar_t__* PUINT ;
typedef int PNDIS_BUFFER ;
typedef scalar_t__ PCHAR ;


 int FUNC_0 (int ,int ,scalar_t__,scalar_t__) ;
 int VAR_0 ;

TDI_STATUS FUNC_1( PCHAR VAR_1, UINT VAR_2,
   PNDIS_BUFFER VAR_3, PUINT VAR_4 ) {
    UINT VAR_5 = *VAR_4;
    *VAR_4 = VAR_2;



    if( VAR_5 < VAR_2 || !VAR_3 )
 return VAR_0;
    else {
 FUNC_0( VAR_3, 0, (PCHAR)VAR_1, VAR_2 );
 return VAR_0;
    }
}
