
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; scalar_t__ style; scalar_t__ distance; } ;
typedef TYPE_1__ RofiDistance ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_3 ( RofiDistance VAR_5 )
{
    if ( VAR_5.type == VAR_3 ) {
        FUNC_1 ( "%upx ", (unsigned int) VAR_5.distance );
    }
    else if ( VAR_5.type == VAR_2 ) {
        FUNC_2 ( VAR_5.distance );
        FUNC_0 ( "%% ", VAR_4 );
    }
    else if ( VAR_5.type == VAR_1 ) {
        FUNC_2 ( VAR_5.distance );
        FUNC_0 ( "ch ", VAR_4 );
    }
    else {
        FUNC_2 ( VAR_5.distance );
        FUNC_0 ( "em ", VAR_4 );
    }
    if ( VAR_5.style == VAR_0 ) {
        FUNC_1 ( "dash " );
    }
}
