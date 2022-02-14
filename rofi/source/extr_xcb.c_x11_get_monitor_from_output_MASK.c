
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int xcb_randr_output_t ;
struct TYPE_11__ {scalar_t__ crtc; int mm_height; int mm_width; int height; int width; int y; int x; } ;
typedef TYPE_1__ xcb_randr_get_output_info_reply_t ;
typedef int xcb_randr_get_output_info_cookie_t ;
typedef TYPE_1__ xcb_randr_get_crtc_info_reply_t ;
typedef int xcb_randr_get_crtc_info_cookie_t ;
struct TYPE_12__ {void* name; int mh; int mw; int h; int w; int y; int x; } ;
typedef TYPE_3__ workarea ;
struct TYPE_13__ {int connection; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (void*,char*,int) ;
 TYPE_8__* VAR_2 ;
 int FUNC_3 (int ,scalar_t__,int ) ;
 TYPE_1__* FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ,int ,int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 TYPE_1__* FUNC_8 (int ,int ,int *) ;

__attribute__((used)) static workarea * FUNC_9 ( xcb_randr_output_t VAR_3 )
{
    xcb_randr_get_output_info_reply_t *VAR_4;
    xcb_randr_get_crtc_info_reply_t *VAR_5;
    xcb_randr_get_output_info_cookie_t VAR_6 = FUNC_5 ( VAR_2->connection, VAR_3, VAR_0 );
    VAR_4 = FUNC_8 ( VAR_2->connection, VAR_6, ((void*)0) );
    if ( VAR_4->crtc == VAR_1 ) {
        FUNC_0 ( VAR_4 );
        return ((void*)0);
    }
    xcb_randr_get_crtc_info_cookie_t VAR_7 = FUNC_3 ( VAR_2->connection, VAR_4->crtc, VAR_0 );
    VAR_5 = FUNC_4 ( VAR_2->connection, VAR_7, ((void*)0) );
    if ( !VAR_5 ) {
        FUNC_0 ( VAR_4 );
        return ((void*)0);
    }
    workarea *VAR_8 = FUNC_1 ( sizeof ( workarea ) );
    VAR_8->x = VAR_5->x;
    VAR_8->y = VAR_5->y;
    VAR_8->w = VAR_5->width;
    VAR_8->h = VAR_5->height;

    VAR_8->mw = VAR_4->mm_width;
    VAR_8->mh = VAR_4->mm_height;

    char *VAR_9 = (char *) FUNC_6 ( VAR_4 );
    int VAR_10 = FUNC_7 ( VAR_4 );

    VAR_8->name = FUNC_1 ( ( VAR_10 + 1 ) * sizeof ( char ) );
    FUNC_2 ( VAR_8->name, VAR_9, VAR_10 );

    FUNC_0 ( VAR_5 );
    FUNC_0 ( VAR_4 );
    return VAR_8;
}
