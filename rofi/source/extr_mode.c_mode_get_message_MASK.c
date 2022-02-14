
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* (* _get_message ) (TYPE_1__ const*) ;} ;
typedef TYPE_1__ Mode ;


 char* FUNC_0 (TYPE_1__ const*) ;

char *FUNC_1 ( const Mode *VAR_0 )
{
    if ( VAR_0->_get_message ) {
        return VAR_0->_get_message ( VAR_0 );
    }
    return ((void*)0);
}
