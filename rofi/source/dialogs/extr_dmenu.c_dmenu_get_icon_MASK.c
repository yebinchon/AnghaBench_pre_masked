
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int cairo_surface_t ;
struct TYPE_4__ {TYPE_1__* cmd_list; } ;
struct TYPE_3__ {scalar_t__ icon_fetch_uid; int * icon_name; } ;
typedef int Mode ;
typedef TYPE_1__ DmenuScriptEntry ;
typedef TYPE_2__ DmenuModePrivateData ;


 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int const*) ;
 int * FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int *,int) ;

__attribute__((used)) static cairo_surface_t *FUNC_4 ( const Mode *VAR_0, unsigned int VAR_1, int VAR_2 )
{
    DmenuModePrivateData *VAR_3 = (DmenuModePrivateData *) FUNC_1 ( VAR_0 );
    FUNC_0 ( VAR_3->cmd_list != ((void*)0), ((void*)0) );
    DmenuScriptEntry *VAR_4 = &( VAR_3->cmd_list[VAR_1] );
    if ( VAR_4->icon_name == ((void*)0) ) {
        return ((void*)0);
    }
    if ( VAR_4->icon_fetch_uid > 0 ) {
        return FUNC_2 ( VAR_4->icon_fetch_uid );
    }
    VAR_4->icon_fetch_uid = FUNC_3 ( VAR_4->icon_name, VAR_2 );
    return FUNC_2 ( VAR_4->icon_fetch_uid );
}
