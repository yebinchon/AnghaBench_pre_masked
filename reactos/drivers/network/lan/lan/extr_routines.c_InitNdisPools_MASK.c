
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int NDIS_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *,int *,int,int ) ;
 int FUNC_3 (int ) ;

NDIS_STATUS FUNC_4() {
    NDIS_STATUS VAR_2;

    FUNC_2( &VAR_2, &VAR_1, 100, 0 );
    if( !FUNC_0(VAR_2) ) return VAR_2;

    FUNC_1( &VAR_2, &VAR_0, 100 );
    if( !FUNC_0(VAR_2) )
 FUNC_3(VAR_1);

    return VAR_2;
}
