
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_9__ {int edit_surf; int edit_draw; int edit_pixmap; int main_window; } ;
struct TYPE_8__ {int depth; } ;
struct TYPE_7__ {int connection; } ;
struct TYPE_6__ {int height; int width; int main_window; int y; int x; } ;
typedef TYPE_1__ RofiViewState ;


 TYPE_5__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ,int ,int ) ;
 TYPE_4__* VAR_5 ;
 int FUNC_5 (char*,int ,int ) ;
 int VAR_6 ;
 int FUNC_6 (int ,int ,int ) ;
 TYPE_2__* VAR_7 ;
 int FUNC_7 (int ,int ,int,int *) ;
 int FUNC_8 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11 ( RofiViewState * VAR_8 )
{
    uint16_t VAR_9 = VAR_3 | VAR_4 | VAR_2 | VAR_1;
    uint32_t VAR_10[] = { VAR_8->x, VAR_8->y, VAR_8->width, VAR_8->height };


    FUNC_7 ( VAR_7->connection, VAR_0.main_window, VAR_9, VAR_10 );
    FUNC_2 ( VAR_0.edit_draw );
    FUNC_3 ( VAR_0.edit_surf );

    FUNC_9 ( VAR_7->connection, VAR_0.edit_pixmap );
    VAR_0.edit_pixmap = FUNC_10 ( VAR_7->connection );
    FUNC_8 ( VAR_7->connection, VAR_5->depth,
                        VAR_0.edit_pixmap, VAR_0.main_window, VAR_8->width, VAR_8->height );

    VAR_0.edit_surf = FUNC_4 ( VAR_7->connection, VAR_0.edit_pixmap, VAR_6, VAR_8->width, VAR_8->height );
    VAR_0.edit_draw = FUNC_1 ( VAR_0.edit_surf );

    FUNC_5 ( "Re-size window based internal request: %dx%d.", VAR_8->width, VAR_8->height );

    FUNC_6 ( FUNC_0 ( VAR_8->main_window ), VAR_8->width, VAR_8->height );
}
