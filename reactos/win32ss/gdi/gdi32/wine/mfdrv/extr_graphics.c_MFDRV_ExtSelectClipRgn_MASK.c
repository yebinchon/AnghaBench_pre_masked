
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PHYSDEV ;
typedef int INT16 ;
typedef scalar_t__ INT ;
typedef int HRGN ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

INT FUNC_3( PHYSDEV VAR_5, HRGN VAR_6, INT VAR_7 )
{
    INT16 VAR_8;
    INT VAR_9;

    if (VAR_7 != VAR_4) return VAR_0;
    if (!VAR_6) return VAR_3;
    VAR_8 = FUNC_0( VAR_5, VAR_6 );
    if(VAR_8 == -1) return VAR_0;
    VAR_9 = FUNC_1( VAR_5, VAR_2, VAR_8 ) ? VAR_3 : VAR_0;
    FUNC_1( VAR_5, VAR_1, VAR_8 );
    FUNC_2( VAR_5, VAR_8 );
    return VAR_9;
}
