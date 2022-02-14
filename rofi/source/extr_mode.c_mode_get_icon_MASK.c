
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int cairo_surface_t ;
struct TYPE_4__ {int * (* _get_icon ) (TYPE_1__ const*,unsigned int,int) ;} ;
typedef TYPE_1__ Mode ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (TYPE_1__ const*,unsigned int,int) ;

cairo_surface_t * FUNC_2 ( const Mode *VAR_0, unsigned int VAR_1, int VAR_2 )
{
    FUNC_0 ( VAR_0 != ((void*)0) );

    if ( VAR_0->_get_icon != ((void*)0) ) {
        return VAR_0->_get_icon ( VAR_0, VAR_1, VAR_2 );
    }
    else {
        return ((void*)0);
    }
}
