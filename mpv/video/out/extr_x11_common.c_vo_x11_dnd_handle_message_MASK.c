
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct vo_x11_state {int window; int dnd_requested_action; int dnd_src_window; scalar_t__ dnd_requested_format; int display; } ;
struct vo {struct vo_x11_state* x11; } ;
struct TYPE_8__ {int* l; } ;
struct TYPE_9__ {int window; int format; TYPE_1__ data; void* message_type; int send_event; scalar_t__ serial; int type; } ;
struct TYPE_11__ {TYPE_2__ xclient; } ;
typedef TYPE_4__ XEvent ;
struct TYPE_10__ {int* l; } ;
struct TYPE_12__ {void* message_type; TYPE_3__ data; } ;
typedef TYPE_5__ XClientMessageEvent ;
typedef int Window ;
typedef int Atom ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (struct vo_x11_state*,int ) ;
 int VAR_4 ;
 int FUNC_1 (struct vo_x11_state*,int ) ;
 int FUNC_2 (int ,void*,scalar_t__,int ,int,int) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int ,int,int ,int ,TYPE_4__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (struct vo*) ;
 int FUNC_6 (struct vo_x11_state*,int*,int) ;
 int* FUNC_7 (struct vo_x11_state*,int,void*,int ,int,int*) ;

__attribute__((used)) static void FUNC_8(struct vo *VAR_13, XClientMessageEvent *VAR_14)
{
    struct vo_x11_state *VAR_15 = VAR_13->x11;

    if (!VAR_15->window)
        return;

    if (VAR_14->message_type == FUNC_0(VAR_15, VAR_7)) {
        VAR_15->dnd_requested_format = 0;

        Window VAR_16 = VAR_14->data.l[0];
        if (VAR_14->data.l[1] & 1) {
            int VAR_17;
            Atom *VAR_18 = FUNC_7(VAR_15, VAR_16, FUNC_0(VAR_15, VAR_12),
                                          VAR_4, 32, &VAR_17);
            if (VAR_18) {
                FUNC_6(VAR_15, VAR_18, VAR_17);
                FUNC_3(VAR_18);
            }
        } else {
            Atom VAR_19[3];
            for (int VAR_20 = 2; VAR_20 <= 4; VAR_20++)
                VAR_19[VAR_20 - 2] = VAR_14->data.l[VAR_20];
            FUNC_6(VAR_15, VAR_19, 3);
        }
    } else if (VAR_14->message_type == FUNC_0(VAR_15, VAR_9)) {
        VAR_15->dnd_requested_action = VAR_14->data.l[4];

        Window VAR_21 = VAR_14->data.l[0];
        XEvent VAR_22;

        VAR_22.xclient.type = VAR_0;
        VAR_22.xclient.serial = 0;
        VAR_22.xclient.send_event = VAR_3;
        VAR_22.xclient.message_type = FUNC_0(VAR_15, VAR_11);
        VAR_22.xclient.window = VAR_21;
        VAR_22.xclient.format = 32;
        VAR_22.xclient.data.l[0] = VAR_15->window;
        VAR_22.xclient.data.l[1] = VAR_15->dnd_requested_format ? 1 : 0;
        VAR_22.xclient.data.l[2] = 0;
        VAR_22.xclient.data.l[3] = 0;
        VAR_22.xclient.data.l[4] = FUNC_0(VAR_15, VAR_5);

        FUNC_4(VAR_15->display, VAR_21, VAR_2, 0, &VAR_22);
    } else if (VAR_14->message_type == FUNC_0(VAR_15, VAR_6)) {
        VAR_15->dnd_src_window = VAR_14->data.l[0];
        FUNC_2(VAR_15->display, FUNC_0(VAR_15, VAR_10),
                          VAR_15->dnd_requested_format, FUNC_1(VAR_15, VAR_1),
                          VAR_15->window, VAR_14->data.l[2]);
    } else if (VAR_14->message_type == FUNC_0(VAR_15, VAR_8)) {
        FUNC_5(VAR_13);
    }
}
