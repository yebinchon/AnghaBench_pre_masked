
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef scalar_t__ UINT ;
typedef int Temp ;
typedef int TDI_STATUS ;
typedef int TDIEntityID ;
typedef int PVOID ;
typedef int PUINT ;
typedef int PNDIS_BUFFER ;
typedef int PCHAR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int,int ,int ) ;
 int VAR_4 ;

TDI_STATUS FUNC_1( UINT VAR_5,
      UINT VAR_6,
      UINT VAR_7,
      PVOID VAR_8,
      TDIEntityID *VAR_9,
      PNDIS_BUFFER VAR_10,
      PUINT VAR_11 ) {
    if( VAR_5 == VAR_2 &&
 VAR_6 == VAR_3 &&
 VAR_7 == VAR_1 ) {
 ULONG VAR_12 = VAR_0;
 return FUNC_0( (PCHAR)&VAR_12, sizeof(VAR_12), VAR_10, VAR_11 );
    }

    return VAR_4;
}
