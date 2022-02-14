
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int PNDIS_PACKET ;
typedef int PNDIS_BUFFER ;
typedef int PCHAR ;
typedef scalar_t__ NDIS_STATUS ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (scalar_t__*,int *,int ,int ,int ) ;
 int FUNC_4 (scalar_t__*,int *,int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int ,int ,int ) ;

NDIS_STATUS FUNC_7( PNDIS_PACKET *VAR_6,
          PCHAR VAR_7, UINT VAR_8 ) {
    PNDIS_PACKET VAR_9;
    PNDIS_BUFFER VAR_10;
    NDIS_STATUS VAR_11;
    PCHAR VAR_12;

    VAR_12 = FUNC_0( VAR_4, VAR_8, VAR_5 );
    if( !VAR_12 ) return VAR_2;

    if( VAR_7 ) FUNC_6(VAR_12, VAR_7, VAR_8);

    FUNC_4( &VAR_11, &VAR_9, VAR_1 );
    if( VAR_11 != VAR_3 ) {
 FUNC_1( VAR_12, VAR_5 );
 return VAR_11;
    }

    FUNC_3( &VAR_11, &VAR_10, VAR_0, VAR_12, VAR_8 );
    if( VAR_11 != VAR_3 ) {
 FUNC_1( VAR_12, VAR_5 );
 FUNC_2( VAR_9 );
 return VAR_11;
    }

    FUNC_5( VAR_9, VAR_10 );
    *VAR_6 = VAR_9;

    return VAR_3;
}
