
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef char gchar ;
struct TYPE_5__ {char const* icon_theme; } ;
struct TYPE_4__ {int icon_cache; int icon_cache_uid; int xdg_context; } ;
typedef int IconFetcher ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int *,int ) ;
 TYPE_1__* FUNC_3 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (char const* const*,int *) ;
 int FUNC_5 (int ,char const**) ;
 int VAR_5 ;
 TYPE_1__* VAR_6 ;

void FUNC_6 ( void )
{
    FUNC_0 ( VAR_6 == ((void*)0) );

    static const gchar * const VAR_7[] = {
        "Adwaita",
        "gnome",
        ((void*)0)
    };
    const char *VAR_8[2] = { VAR_0.icon_theme, ((void*)0) };

    VAR_6 = FUNC_3 ( sizeof ( IconFetcher ) );

    VAR_6->xdg_context = FUNC_4 ( VAR_7, ((void*)0) );
    FUNC_5 ( VAR_6->xdg_context, VAR_8 );

    VAR_6->icon_cache_uid = FUNC_1 ( VAR_2, VAR_1 );
    VAR_6->icon_cache = FUNC_2 ( VAR_4, VAR_3, ((void*)0), VAR_5 );
}
