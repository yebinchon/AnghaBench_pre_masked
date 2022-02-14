
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int cairo_surface_t ;
struct TYPE_5__ {int icon_cache_uid; } ;
struct TYPE_4__ {int * surface; } ;
typedef TYPE_1__ IconFetcherEntry ;


 int FUNC_0 (int const) ;
 TYPE_1__* FUNC_1 (int ,int ) ;
 TYPE_2__* VAR_0 ;

cairo_surface_t * FUNC_2 ( const uint32_t VAR_1 )
{
    IconFetcherEntry *VAR_2 = FUNC_1 ( VAR_0->icon_cache_uid, FUNC_0 ( VAR_1 ) );
    if ( VAR_2 ) {
        return VAR_2->surface;
    }
    return ((void*)0);
}
