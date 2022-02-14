
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int PNDIS_PACKET ;
typedef int PNDIS_BUFFER ;
typedef scalar_t__ PCHAR ;
typedef scalar_t__ NDIS_STATUS ;
typedef scalar_t__ BOOLEAN ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__*,int *,int ,scalar_t__,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,scalar_t__,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

NDIS_STATUS FUNC_4( PNDIS_PACKET VAR_4, PCHAR VAR_5, UINT VAR_6,
      BOOLEAN VAR_7 ) {
    PNDIS_BUFFER VAR_8;
    NDIS_STATUS VAR_9;
    PCHAR VAR_10;

    if( VAR_7 ) {
 VAR_10 = FUNC_2( VAR_6 );
 if( !VAR_10 ) return VAR_2;
 FUNC_3( VAR_10, VAR_5, VAR_6 );
    } else VAR_10 = VAR_5;

    FUNC_0( &VAR_9, &VAR_8, VAR_0, VAR_5, VAR_6 );
    if( VAR_9 != VAR_1 ) return VAR_9;

    FUNC_1( VAR_4, VAR_8 );

    return VAR_3;
}
