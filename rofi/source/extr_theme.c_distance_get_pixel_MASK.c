
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; int distance; } ;
typedef scalar_t__ RofiOrientation ;
typedef TYPE_1__ RofiDistance ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int*,int*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

int FUNC_3 ( RofiDistance VAR_4, RofiOrientation VAR_5 )
{
    if ( VAR_4.type == VAR_2 ) {
        return VAR_4.distance * FUNC_2 ();
    }
    else if ( VAR_4.type == VAR_1 ) {
        return VAR_4.distance * FUNC_1 ();
    }
    else if ( VAR_4.type == VAR_3 ) {
        if ( VAR_5 == VAR_0 ) {
            int VAR_6 = 0;
            FUNC_0 ( ((void*)0), &VAR_6 );
            return ( VAR_4.distance * VAR_6 ) / ( 100.0 );
        }
        else {
            int VAR_7 = 0;
            FUNC_0 ( &VAR_7, ((void*)0) );
            return ( VAR_4.distance * VAR_7 ) / ( 100.0 );
        }
    }
    return VAR_4.distance;
}
