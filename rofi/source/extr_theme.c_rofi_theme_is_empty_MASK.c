
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int gboolean ;
struct TYPE_2__ {scalar_t__ num_widgets; int * properties; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

gboolean FUNC_0 ( void )
{
    if ( VAR_2 == ((void*)0) ) {
        return VAR_1;
    }
    if ( VAR_2->properties == ((void*)0) && VAR_2->num_widgets == 0 ) {
        return VAR_1;
    }

    return VAR_0;
}
