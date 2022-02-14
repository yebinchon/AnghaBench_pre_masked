
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {int * list; } ;
struct TYPE_18__ {TYPE_1__ u; int format; } ;
typedef TYPE_2__ mpv_node ;
struct TYPE_19__ {char* prefix; char* level; char* text; int num_args; char* name; TYPE_2__* data; int format; int * args; } ;
typedef TYPE_3__ mpv_event_property ;
typedef TYPE_3__ mpv_event_log_message ;
typedef TYPE_3__ mpv_event_client_message ;
struct TYPE_20__ {int event_id; scalar_t__ error; TYPE_3__* data; scalar_t__ reply_userdata; } ;
typedef TYPE_6__ mpv_event ;
 int VAR_0 ;

 char* FUNC_0 (scalar_t__) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (void*,TYPE_2__*,int ) ;
 int FUNC_3 (void*,TYPE_2__*,char*,TYPE_2__*) ;
 int FUNC_4 (void*,TYPE_2__*,char*,double) ;
 int FUNC_5 (void*,TYPE_2__*,char*,int) ;
 int FUNC_6 (void*,TYPE_2__*,char*,scalar_t__) ;
 int FUNC_7 (void*,TYPE_2__*,char*) ;
 int FUNC_8 (void*,TYPE_2__*,char*,char*) ;

__attribute__((used)) static void FUNC_9(void *VAR_1, mpv_event *VAR_2, mpv_node *VAR_3)
{
    FUNC_8(VAR_1, VAR_3, "event", FUNC_1(VAR_2->event_id));

    if (VAR_2->reply_userdata)
        FUNC_6(VAR_1, VAR_3, "id", VAR_2->reply_userdata);

    if (VAR_2->error < 0)
        FUNC_8(VAR_1, VAR_3, "error", FUNC_0(VAR_2->error));

    switch (VAR_2->event_id) {
    case 133: {
        mpv_event_log_message *VAR_4 = VAR_2->data;

        FUNC_8(VAR_1, VAR_3, "prefix", VAR_4->prefix);
        FUNC_8(VAR_1, VAR_3, "level", VAR_4->level);
        FUNC_8(VAR_1, VAR_3, "text", VAR_4->text);

        break;
    }

    case 134: {
        mpv_event_client_message *VAR_5 = VAR_2->data;

        mpv_node VAR_6 = {.format = VAR_0, .u.list = ((void*)0)};
        for (int VAR_7 = 0; VAR_7 < VAR_5->num_args; VAR_7++)
            FUNC_2(VAR_1, &VAR_6, VAR_5->args[VAR_7]);
        FUNC_3(VAR_1, VAR_3, "args", &VAR_6);
        break;
    }

    case 132: {
        mpv_event_property *VAR_8 = VAR_2->data;

        FUNC_8(VAR_1, VAR_3, "name", VAR_8->name);

        switch (VAR_8->format) {
        case 129:
            FUNC_3(VAR_1, VAR_3, "data", VAR_8->data);
            break;
        case 131:
            FUNC_4(VAR_1, VAR_3, "data", *(double *)VAR_8->data);
            break;
        case 130:
            FUNC_5(VAR_1, VAR_3, "data", *(int *)VAR_8->data);
            break;
        case 128:
            FUNC_8(VAR_1, VAR_3, "data", *(char **)VAR_8->data);
            break;
        default:
            FUNC_7(VAR_1, VAR_3, "data");
        }
        break;
    }
    }
}
