
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int PNDIS_PACKET ;
typedef int PNDIS_BUFFER ;
typedef int PCHAR ;
typedef scalar_t__ NDIS_STATUS ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (scalar_t__*,int *,int ,int ,int ) ;
 int FUNC_2 (scalar_t__*,int *,int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_6 ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;

NDIS_STATUS FUNC_8( PNDIS_PACKET *VAR_7,
           PCHAR VAR_8, UINT VAR_9,
           PCHAR VAR_10, UINT VAR_11 ) {
    PNDIS_PACKET VAR_12;
    PNDIS_BUFFER VAR_13;
    NDIS_STATUS VAR_14;
    PCHAR VAR_15;

    VAR_15 = FUNC_6( VAR_6, VAR_9 );
    if( !VAR_15 ) return VAR_4;

    if( VAR_8 )
 FUNC_4(VAR_15, VAR_8, VAR_9);

    FUNC_2( &VAR_14, &VAR_12, VAR_1 );
    if( VAR_14 != VAR_5 ) {
 FUNC_7( VAR_15 );
 return VAR_14;
    }
    FUNC_5(VAR_3, VAR_12, VAR_10, VAR_11);

    FUNC_1( &VAR_14, &VAR_13, VAR_0, VAR_15, VAR_9 );
    if( VAR_14 != VAR_5 ) {
 FUNC_7( VAR_15 );
 FUNC_0( VAR_12 );
    }
    FUNC_5(VAR_2, VAR_13, VAR_10, VAR_11);

    FUNC_3( VAR_12, VAR_13 );
    *VAR_7 = VAR_12;

    return VAR_5;
}
