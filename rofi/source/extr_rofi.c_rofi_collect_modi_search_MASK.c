
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int name; } ;
typedef TYPE_1__ Mode ;


 TYPE_1__** VAR_0 ;
 scalar_t__ FUNC_0 (char const*,int ) ;
 unsigned int VAR_1 ;

Mode * FUNC_1 ( const char *VAR_2 )
{
    for ( unsigned int VAR_3 = 0; VAR_3 < VAR_1; VAR_3++ ) {
        if ( FUNC_0 ( VAR_2, VAR_0[VAR_3]->name ) == 0 ) {
            return VAR_0[VAR_3];
        }
    }
    return ((void*)0);
}
