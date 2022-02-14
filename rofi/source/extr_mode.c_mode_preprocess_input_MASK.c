
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* (* _preprocess_input ) (TYPE_1__*,char const*) ;} ;
typedef TYPE_1__ Mode ;


 char* FUNC_0 (char const*) ;
 char* FUNC_1 (TYPE_1__*,char const*) ;

char * FUNC_2 ( Mode *VAR_0, const char *VAR_1 )
{
    if ( VAR_0->_preprocess_input ) {
        return VAR_0->_preprocess_input ( VAR_0, VAR_1 );
    }
    return FUNC_0 ( VAR_1 );
}
