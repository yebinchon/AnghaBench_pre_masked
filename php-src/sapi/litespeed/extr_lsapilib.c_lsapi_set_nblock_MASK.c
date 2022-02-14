
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ,int) ;

__attribute__((used)) static int FUNC_1( int VAR_3, int VAR_4 )
{
    int VAR_5 = FUNC_0( VAR_3, VAR_0, 0 );
    if ( VAR_4 )
    {
        if (!( VAR_5 & VAR_2 ))
        {
            return FUNC_0( VAR_3, VAR_1, VAR_5 | VAR_2 );
        }
    }
    else
    {
        if ( VAR_5 & VAR_2 )
        {
            return FUNC_0( VAR_3, VAR_1, VAR_5 &(~VAR_2) );
        }
    }
    return 0;
}
