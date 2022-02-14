
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int widget ;
struct TYPE_6__ {int get_desired_width; int get_desired_height; int resize; int free; int draw; } ;
struct TYPE_7__ {int size; void* xalign; void* yalign; int icon_fetch_id; TYPE_1__ widget; } ;
typedef TYPE_2__ icon ;
typedef int RofiDistance ;


 void* FUNC_0 (int ,int ) ;
 int FUNC_1 (double,void*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;
 TYPE_2__* FUNC_4 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (char const*,int) ;
 int FUNC_6 (int ,char*,int) ;
 void* FUNC_7 (int ,char*,double) ;
 char* FUNC_8 (int ,char*,int *) ;
 int FUNC_9 (int ,int *,int ,char const*) ;

icon * FUNC_10 ( widget *VAR_7, const char *VAR_8 )
{
    icon *VAR_9 = FUNC_4 ( sizeof ( icon ) );

    VAR_9->size = 16;

    FUNC_9 ( FUNC_2 ( VAR_9 ), VAR_7, VAR_1, VAR_8 );
    VAR_9->widget.draw = VAR_2;
    VAR_9->widget.free = VAR_3;
    VAR_9->widget.resize = VAR_6;
    VAR_9->widget.get_desired_height = VAR_4;
    VAR_9->widget.get_desired_width = VAR_5;

    RofiDistance VAR_10 = FUNC_6 ( FUNC_2 (VAR_9), "size" , VAR_9->size );
    VAR_9->size = FUNC_3 ( VAR_10, VAR_0 );

    const char * VAR_11 = FUNC_8 ( FUNC_2 ( VAR_9 ), "filename", ((void*)0) );
    if ( VAR_11 ) {
        VAR_9->icon_fetch_id = FUNC_5 ( VAR_11, VAR_9->size );
    }
    VAR_9->yalign = FUNC_7 ( FUNC_2 ( VAR_9 ), "vertical-align", 0.5 );
    VAR_9->yalign = FUNC_0 ( 0, FUNC_1 ( 1.0, VAR_9->yalign ) );
    VAR_9->xalign = FUNC_7 ( FUNC_2 ( VAR_9 ), "horizontal-align", 0.5 );
    VAR_9->xalign = FUNC_0 ( 0, FUNC_1 ( 1.0, VAR_9->xalign ) );

    return VAR_9;
}
