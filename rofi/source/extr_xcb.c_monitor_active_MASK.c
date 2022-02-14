
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_8__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef void* xcb_drawable_t ;
struct TYPE_9__ {char* name; scalar_t__ primary; struct TYPE_9__* next; } ;
typedef TYPE_1__ workarea ;
typedef scalar_t__ gint64 ;
struct TYPE_11__ {char* monitor; } ;
struct TYPE_10__ {TYPE_1__* monitors; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_8__ VAR_2 ;
 void* FUNC_0 (char*,char**,int ) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (scalar_t__,TYPE_1__*) ;
 scalar_t__ FUNC_5 (void*,TYPE_1__*) ;
 int FUNC_6 (int ,int ,TYPE_1__*) ;
 scalar_t__ FUNC_7 (scalar_t__,TYPE_1__*) ;
 TYPE_2__* VAR_3 ;

int FUNC_8 ( workarea *VAR_4 )
{
    if ( VAR_2.monitor != ((void*)0) ) {
        for ( workarea *VAR_5 = VAR_3->monitors; VAR_5; VAR_5 = VAR_5->next ) {
            if ( FUNC_2 ( VAR_2.monitor, VAR_5->name ) == 0 ) {
                *VAR_4 = *VAR_5;
                return VAR_1;
            }
        }
    }

    if ( FUNC_2 ( VAR_2.monitor, "primary" ) == 0 ) {
        for ( workarea *VAR_6 = VAR_3->monitors; VAR_6; VAR_6 = VAR_6->next ) {
            if ( VAR_6->primary ) {
                *VAR_4 = *VAR_6;
                return VAR_1;
            }
        }
    }
    if ( FUNC_1 ( VAR_2.monitor, "wid:" ) ) {
        char *VAR_7 = ((void*)0);
        xcb_drawable_t VAR_8 = FUNC_0 ( VAR_2.monitor + 4, &VAR_7, 0 );
        if ( VAR_7 != VAR_2.monitor ) {
            if ( FUNC_5 ( VAR_8, VAR_4 ) ) {
                return VAR_1;
            }
        }
    }
    {

        char *VAR_9 = ((void*)0);
        gint64 VAR_10 = FUNC_0 ( VAR_2.monitor, &VAR_9, 0 );
        if ( VAR_9 != VAR_2.monitor ) {
            if ( VAR_10 >= 0 ) {
                if ( FUNC_7 ( VAR_10, VAR_4 ) ) {
                    return VAR_1;
                }
                FUNC_3 ( "Failed to find selected monitor." );
            }
            else {
                return FUNC_4 ( VAR_10, VAR_4 );
            }
        }
    }

    FUNC_6 ( 0, 0, VAR_4 );
    return VAR_0;
}
