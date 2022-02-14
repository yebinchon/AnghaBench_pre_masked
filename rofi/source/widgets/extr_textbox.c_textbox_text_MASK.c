
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int h; int w; int y; int x; } ;
struct TYPE_10__ {int flags; int cursor; void* text; TYPE_1__ widget; } ;
typedef TYPE_2__ textbox ;
typedef char gchar ;
struct TYPE_11__ {scalar_t__ parent; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int ) ;
 int VAR_0 ;
 TYPE_3__* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (char const*) ;
 void* FUNC_6 (char const*,int) ;
 scalar_t__ FUNC_7 (void*,int) ;
 scalar_t__ FUNC_8 (char const*,int,char const**) ;
 int FUNC_9 (TYPE_2__*,int ,int ,int ,int ) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (scalar_t__) ;

void FUNC_12 ( textbox *VAR_1, const char *VAR_2 )
{
    if ( VAR_1 == ((void*)0) ) {
        return;
    }
    FUNC_4 ( VAR_1->text );
    const gchar *VAR_3 = ((void*)0);

    if ( FUNC_8 ( VAR_2, -1, &VAR_3 ) ) {
        VAR_1->text = FUNC_5 ( VAR_2 );
    }
    else {
        if ( VAR_3 != ((void*)0) ) {

            VAR_1->text = FUNC_6 ( VAR_2, ( VAR_3 - VAR_2 ) );
        }
        else {
            VAR_1->text = FUNC_5 ( "Invalid UTF-8 string." );
        }
    }
    FUNC_3 ( VAR_1 );
    if ( VAR_1->flags & VAR_0 ) {
        FUNC_9 ( VAR_1, VAR_1->widget.x, VAR_1->widget.y, VAR_1->widget.w, VAR_1->widget.h );
        if ( FUNC_2 ( VAR_1 )->parent ) {
            FUNC_11 ( FUNC_2 ( VAR_1 )->parent );
        }
    }

    VAR_1->cursor = FUNC_0 ( 0, FUNC_1 ( ( int ) FUNC_7 ( VAR_1->text, -1 ), VAR_1->cursor ) );
    FUNC_10 ( FUNC_2 ( VAR_1 ) );
}
