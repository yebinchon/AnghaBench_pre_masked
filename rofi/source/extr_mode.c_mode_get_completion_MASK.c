
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* (* _get_completion ) (TYPE_1__ const*,unsigned int) ;char* (* _get_display_value ) (TYPE_1__ const*,unsigned int,int*,int *,int ) ;} ;
typedef TYPE_1__ Mode ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (TYPE_1__ const*,unsigned int) ;
 char* FUNC_2 (TYPE_1__ const*,unsigned int,int*,int *,int ) ;

char * FUNC_3 ( const Mode *VAR_1, unsigned int VAR_2 )
{
    FUNC_0 ( VAR_1 != ((void*)0) );
    if ( VAR_1->_get_completion != ((void*)0) ) {
        return VAR_1->_get_completion ( VAR_1, VAR_2 );
    }
    else {
        int VAR_3;
        FUNC_0 ( VAR_1->_get_display_value != ((void*)0) );
        return VAR_1->_get_display_value ( VAR_1, VAR_2, &VAR_3, ((void*)0), VAR_0 );
    }
}
