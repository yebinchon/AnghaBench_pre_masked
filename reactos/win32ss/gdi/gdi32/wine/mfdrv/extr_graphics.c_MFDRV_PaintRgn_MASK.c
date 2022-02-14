
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PHYSDEV ;
typedef int INT16 ;
typedef int HRGN ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;

BOOL FUNC_2( PHYSDEV VAR_2, HRGN VAR_3 )
{
    INT16 VAR_4;
    VAR_4 = FUNC_0( VAR_2, VAR_3 );
    if(VAR_4 == -1)
        return VAR_0;
    return FUNC_1( VAR_2, VAR_1, VAR_4 );
}
