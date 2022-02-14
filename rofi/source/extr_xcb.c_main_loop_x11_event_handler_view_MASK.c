
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int xcb_selection_notify_event_t ;
struct TYPE_12__ {int event_y; int event_x; } ;
typedef TYPE_1__ xcb_motion_notify_event_t ;
struct TYPE_13__ {int* keys; } ;
typedef TYPE_2__ xcb_keymap_notify_event_t ;
struct TYPE_14__ {int detail; int time; } ;
typedef TYPE_3__ xcb_key_release_event_t ;
struct TYPE_15__ {int detail; int state; int time; } ;
typedef TYPE_4__ xcb_key_press_event_t ;
struct TYPE_16__ {int response_type; } ;
typedef TYPE_5__ xcb_generic_event_t ;
typedef int xcb_configure_notify_event_t ;
struct TYPE_17__ {int event; int time; int detail; } ;
typedef TYPE_6__ xcb_button_release_event_t ;
struct TYPE_18__ {int detail; int time; int event_y; int event_x; } ;
typedef TYPE_7__ xcb_button_press_event_t ;
typedef int gint8 ;
typedef int gint32 ;
typedef int gchar ;
struct TYPE_19__ {int bindings_seat; int last_timestamp; int mouse_seen; } ;
struct TYPE_11__ {int click_to_exit; } ;
typedef int RofiViewState ;
typedef int NkBindingsScrollAxis ;
typedef int NkBindingsMouseButton ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_10__ VAR_7 ;
 int FUNC_0 (int ,int *,int ,int ,int ) ;
 int FUNC_1 (int ,int *,int ,int ) ;
 int * FUNC_2 (int ,int *,int ,int ,int ) ;
 int FUNC_3 (int ,int *,int ,int) ;
 int FUNC_4 () ;
 int * FUNC_5 () ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *,int ) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int ,int *,int*) ;
 TYPE_8__* VAR_8 ;

__attribute__((used)) static void FUNC_14 ( xcb_generic_event_t *VAR_9 )
{
    RofiViewState *VAR_10 = FUNC_5 ();
    if ( VAR_10 == ((void*)0) ) {
        return;
    }

    switch ( VAR_9->response_type & ~0x80 )
    {
    case 133:
        FUNC_4 ();
        break;
    case 134:
    {
        xcb_configure_notify_event_t *VAR_11 = (xcb_configure_notify_event_t *) VAR_9;
        FUNC_11 ( VAR_10, VAR_11 );
        break;
    }
    case 129:
    {
        if ( VAR_7.click_to_exit == VAR_6 ) {
            VAR_8->mouse_seen = VAR_6;
        }
        xcb_motion_notify_event_t *VAR_12 = (xcb_motion_notify_event_t *) VAR_9;
        FUNC_6 ( VAR_10, VAR_12->event_x, VAR_12->event_y );
        break;
    }
    case 136:
    {
        xcb_button_press_event_t *VAR_13 = (xcb_button_press_event_t *) VAR_9;
        NkBindingsMouseButton VAR_14;
        NkBindingsScrollAxis VAR_15;
        gint32 VAR_16;

        VAR_8->last_timestamp = VAR_13->time;
        FUNC_6 ( VAR_10, VAR_13->event_x, VAR_13->event_y );
        if ( FUNC_12 ( VAR_13->detail, &VAR_14 ) ) {
            FUNC_0 ( VAR_8->bindings_seat, ((void*)0), VAR_14, VAR_1, VAR_13->time );
        }
        else if ( FUNC_13 ( VAR_13->detail, &VAR_15, &VAR_16 ) ) {
            FUNC_3 ( VAR_8->bindings_seat, ((void*)0), VAR_15, VAR_16 );
        }
        break;
    }
    case 135:
    {
        xcb_button_release_event_t *VAR_17 = (xcb_button_release_event_t *) VAR_9;
        NkBindingsMouseButton VAR_18;

        VAR_8->last_timestamp = VAR_17->time;
        if ( FUNC_12 ( VAR_17->detail, &VAR_18 ) ) {
            FUNC_0 ( VAR_8->bindings_seat, ((void*)0), VAR_18, VAR_2, VAR_17->time );
        }
        if ( VAR_7.click_to_exit == VAR_6 ) {
            if ( !VAR_8->mouse_seen ) {
                FUNC_10 ( VAR_10, VAR_17->event );
            }
            VAR_8->mouse_seen = VAR_0;
        }
        break;
    }

    case 128:
        FUNC_9 ( VAR_10, (xcb_selection_notify_event_t *) VAR_9 );
        break;
    case 132:
    {
        xcb_keymap_notify_event_t *VAR_19 = (xcb_keymap_notify_event_t *) VAR_9;
        for ( gint32 VAR_20 = 0; VAR_20 < 31; ++VAR_20 ) {
            for ( gint8 VAR_21 = 0; VAR_21 < 7; ++VAR_21 ) {
                if ( VAR_19->keys[VAR_20] & ( 1 << VAR_21 ) ) {

                    FUNC_1 ( VAR_8->bindings_seat, ((void*)0), ( 8 * VAR_20 + VAR_21 ) + 8, VAR_4 );
                }
            }
        }
        break;
    }
    case 131:
    {
        xcb_key_press_event_t *VAR_22 = (xcb_key_press_event_t *) VAR_9;
        gchar *VAR_23;

        VAR_8->last_timestamp = VAR_22->time;
        VAR_23 = FUNC_2 ( VAR_8->bindings_seat, ((void*)0), VAR_22->state, VAR_22->detail, VAR_3 );
        if ( VAR_23 != ((void*)0) ) {
            FUNC_7 ( VAR_10, VAR_23 );
        }
        break;
    }
    case 130:
    {
        xcb_key_release_event_t *VAR_24 = (xcb_key_release_event_t *) VAR_9;
        VAR_8->last_timestamp = VAR_24->time;
        FUNC_1 ( VAR_8->bindings_seat, ((void*)0), VAR_24->detail, VAR_5 );
        break;
    }
    default:
        break;
    }
    FUNC_8 ( VAR_10 );
}
