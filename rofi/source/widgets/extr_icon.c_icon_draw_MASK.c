
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int widget ;
struct TYPE_4__ {int w; int h; } ;
struct TYPE_5__ {scalar_t__ icon_fetch_id; int xalign; int yalign; int * icon; TYPE_1__ widget; scalar_t__ size; } ;
typedef TYPE_2__ icon ;
typedef int cairo_t ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,double,double) ;
 int FUNC_8 (int *,int *,int ,int ) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int,int) ;
 int * FUNC_11 (scalar_t__) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static void FUNC_16 ( widget *VAR_0, cairo_t *VAR_1 )
{
    icon *VAR_2 = (icon *) VAR_0;

    if ( VAR_2->icon == ((void*)0) && VAR_2->icon_fetch_id > 0 ) {
        VAR_2->icon = FUNC_11 ( VAR_2->icon_fetch_id );
        if ( VAR_2->icon ) {
            FUNC_9 ( VAR_2->icon );
        }
    }
    if ( VAR_2->icon == ((void*)0) ) {
        return;
    }
    int VAR_3 = FUNC_2 ( VAR_2->icon );
    int VAR_4 = FUNC_3 ( VAR_2->icon );
    int VAR_5 = FUNC_0 ( VAR_3, VAR_4 );
    double VAR_6 = (double) VAR_2->size / VAR_5;

    int VAR_7 = FUNC_13 ( FUNC_1 ( VAR_2 ) ) ;
    int VAR_8 = FUNC_14 ( FUNC_1 ( VAR_2 ) ) ;
    int VAR_9 = FUNC_15 ( FUNC_1 ( VAR_2 ) ) ;
    int VAR_10 = FUNC_12 ( FUNC_1 ( VAR_2 ) ) ;

    FUNC_6 ( VAR_1 );

    FUNC_10 ( VAR_1,
            VAR_7 + ( VAR_2->widget.w - VAR_4 * VAR_6 - VAR_7 -VAR_8 )*VAR_2->xalign,
            VAR_9 + ( VAR_2->widget.h- VAR_3 * VAR_6 -VAR_9 - VAR_10 )*VAR_2->yalign );
    FUNC_7 ( VAR_1, VAR_6, VAR_6 );
    FUNC_8 ( VAR_1, VAR_2->icon, 0, 0 );
    FUNC_4 ( VAR_1 );
    FUNC_5 ( VAR_1 );
}
