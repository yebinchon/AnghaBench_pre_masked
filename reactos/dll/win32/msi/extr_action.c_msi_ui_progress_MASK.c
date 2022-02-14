
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int hdr; } ;
typedef TYPE_1__ MSIRECORD ;
typedef int MSIPACKAGE ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (int *,int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5( MSIPACKAGE *VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5 )
{
    MSIRECORD *VAR_6;

    VAR_6 = FUNC_0( 4 );
    FUNC_2( VAR_6, 1, VAR_2 );
    FUNC_2( VAR_6, 2, VAR_3 );
    FUNC_2( VAR_6, 3, VAR_4 );
    FUNC_2( VAR_6, 4, VAR_5 );
    FUNC_1( VAR_1, VAR_0, VAR_6 );
    FUNC_4( &VAR_6->hdr );

    FUNC_3( ((void*)0) );
}
