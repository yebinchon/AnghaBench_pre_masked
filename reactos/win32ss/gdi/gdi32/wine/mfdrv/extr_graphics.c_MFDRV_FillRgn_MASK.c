
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PHYSDEV ;
typedef int INT16 ;
typedef int HRGN ;
typedef int HBRUSH ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int,int) ;

BOOL FUNC_3( PHYSDEV VAR_2, HRGN VAR_3, HBRUSH VAR_4 )
{
    INT16 VAR_5, VAR_6;
    VAR_5 = FUNC_1( VAR_2, VAR_3 );
    if(VAR_5 == -1)
        return VAR_0;
    VAR_6 = FUNC_0( VAR_2, VAR_4 );
    if(!VAR_6)
        return VAR_0;
    return FUNC_2( VAR_2, VAR_1, VAR_5, VAR_6 );
}
