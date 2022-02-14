
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int xcb_get_property_cookie_t ;
typedef int * gpointer ;
struct TYPE_5__ {int last_timestamp; int ewmh; int screen_nbr; int sndisplay; } ;
struct TYPE_4__ {int command; int * wmclass; int * app_id; int * icon; int * binary; int description; int name; } ;
typedef int SnLauncherContext ;
typedef TYPE_1__ RofiHelperExecuteContext ;
typedef scalar_t__ GSpawnChildSetupFunc ;


 int FUNC_0 (int *,char*,int ,int ) ;
 int * FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,unsigned int) ;
 scalar_t__ VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_9 (int *,int ) ;
 scalar_t__ FUNC_10 (int *,int ,unsigned int*,int *) ;

void FUNC_11 ( RofiHelperExecuteContext *VAR_2, GSpawnChildSetupFunc *VAR_3, gpointer *VAR_4 )
{
    if ( VAR_2 == ((void*)0) ) {
        return;
    }

    SnLauncherContext *VAR_5;

    VAR_5 = FUNC_1 ( VAR_1->sndisplay, VAR_1->screen_nbr );

    FUNC_6 ( VAR_5, VAR_2->name );
    FUNC_4 ( VAR_5, VAR_2->description );
    if ( VAR_2->binary != ((void*)0) ) {
        FUNC_3 ( VAR_5, VAR_2->binary );
    }
    if ( VAR_2->icon != ((void*)0) ) {
        FUNC_5 ( VAR_5, VAR_2->icon );
    }
    if ( VAR_2->app_id != ((void*)0) ) {
        FUNC_2 ( VAR_5, VAR_2->app_id );
    }
    if ( VAR_2->wmclass != ((void*)0) ) {
        FUNC_7 ( VAR_5, VAR_2->wmclass );
    }

    xcb_get_property_cookie_t VAR_6;
    unsigned int VAR_7 = 0;

    VAR_6 = FUNC_9 ( &VAR_1->ewmh, VAR_1->screen_nbr );
    if ( FUNC_10 ( &VAR_1->ewmh, VAR_6, &VAR_7, ((void*)0) ) ) {
        FUNC_8 ( VAR_5, VAR_7 );
    }

    FUNC_0 ( VAR_5, "rofi", VAR_2->command, VAR_1->last_timestamp );

    *VAR_3 = (GSpawnChildSetupFunc) VAR_0;
    *VAR_4 = VAR_5;
}
