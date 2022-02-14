
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* (* _get_display_value ) (TYPE_1__ const*,unsigned int,int*,int **,int) ;} ;
typedef TYPE_1__ Mode ;
typedef int GList ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (TYPE_1__ const*,unsigned int,int*,int **,int) ;

char * FUNC_2 ( const Mode *VAR_0, unsigned int VAR_1, int *VAR_2, GList **VAR_3, int VAR_4 )
{
    FUNC_0 ( VAR_0 != ((void*)0) );
    FUNC_0 ( VAR_2 != ((void*)0) );
    FUNC_0 ( VAR_0->_get_display_value != ((void*)0) );

    return VAR_0->_get_display_value ( VAR_0, VAR_1, VAR_2, VAR_3, VAR_4 );
}
