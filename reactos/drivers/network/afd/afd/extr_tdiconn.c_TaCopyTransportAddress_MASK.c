
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int * PTRANSPORT_ADDRESS ;


 int * FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;

PTRANSPORT_ADDRESS FUNC_3( PTRANSPORT_ADDRESS VAR_2 ) {
    UINT VAR_3;
    PTRANSPORT_ADDRESS VAR_4;

    VAR_3 = FUNC_2( VAR_2 );
    if (!VAR_3)
        return ((void*)0);

    VAR_4 = FUNC_0(VAR_0,
                              VAR_3,
                              VAR_1);

    if( VAR_4 )
        FUNC_1( VAR_4, VAR_2 );

    return VAR_4;
}
