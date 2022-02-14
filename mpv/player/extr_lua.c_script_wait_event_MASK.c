
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct script_ctx {int client; } ;
struct TYPE_9__ {char* prefix; char* level; char* text; int num_args; char** args; int const reason; scalar_t__ error; char* name; int id; int result; int * data; int format; } ;
typedef TYPE_1__ mpv_event_property ;
typedef TYPE_1__ mpv_event_log_message ;
typedef TYPE_1__ mpv_event_hook ;
typedef TYPE_1__ mpv_event_end_file ;
typedef TYPE_1__ mpv_event_command ;
typedef TYPE_1__ mpv_event_client_message ;
struct TYPE_10__ {int event_id; double reply_userdata; scalar_t__ error; TYPE_1__* data; } ;
typedef TYPE_7__ mpv_event ;
typedef int lua_State ;
 struct script_ctx* FUNC_0 (int *) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,double) ;
 int FUNC_7 (int *,char const*) ;
 int FUNC_8 (int *,int,char*) ;
 int FUNC_9 (int *,int) ;
 char* FUNC_10 (scalar_t__) ;
 char* FUNC_11 (int) ;
 TYPE_7__* FUNC_12 (int ,int ) ;
 int FUNC_13 (int *,int *) ;

__attribute__((used)) static int FUNC_14(lua_State *VAR_0)
{
    struct script_ctx *VAR_1 = FUNC_0(VAR_0);

    mpv_event *VAR_2 = FUNC_12(VAR_1->client, FUNC_1(VAR_0, 1, 1e20));

    FUNC_2(VAR_0);
    FUNC_7(VAR_0, FUNC_11(VAR_2->event_id));
    FUNC_8(VAR_0, -2, "event");

    if (VAR_2->reply_userdata) {
        FUNC_6(VAR_0, VAR_2->reply_userdata);
        FUNC_8(VAR_0, -2, "id");
    }

    if (VAR_2->error < 0) {
        FUNC_7(VAR_0, FUNC_10(VAR_2->error));
        FUNC_8(VAR_0, -2, "error");
    }

    switch (VAR_2->event_id) {
    case 133: {
        mpv_event_log_message *VAR_3 = VAR_2->data;

        FUNC_7(VAR_0, VAR_3->prefix);
        FUNC_8(VAR_0, -2, "prefix");
        FUNC_7(VAR_0, VAR_3->level);
        FUNC_8(VAR_0, -2, "level");
        FUNC_7(VAR_0, VAR_3->text);
        FUNC_8(VAR_0, -2, "text");
        break;
    }
    case 137: {
        mpv_event_client_message *VAR_4 = VAR_2->data;

        FUNC_2(VAR_0);
        for (int VAR_5 = 0; VAR_5 < VAR_4->num_args; VAR_5++) {
            FUNC_4(VAR_0, VAR_5 + 1);
            FUNC_7(VAR_0, VAR_4->args[VAR_5]);
            FUNC_9(VAR_0, -3);
        }
        FUNC_8(VAR_0, -2, "args");
        break;
    }
    case 135: {
        mpv_event_end_file *VAR_6 = VAR_2->data;
        const char *VAR_7;
        switch (VAR_6->reason) {
        case 142: VAR_7 = "eof"; break;
        case 138: VAR_7 = "stop"; break;
        case 140: VAR_7 = "quit"; break;
        case 141: VAR_7 = "error"; break;
        case 139: VAR_7 = "redirect"; break;
        default:
            VAR_7 = "unknown";
        }
        FUNC_7(VAR_0, VAR_7);
        FUNC_8(VAR_0, -2, "reason");

        if (VAR_6->reason == 141) {
            FUNC_7(VAR_0, FUNC_10(VAR_6->error));
            FUNC_8(VAR_0, -2, "error");
        }
        break;
    }
    case 132: {
        mpv_event_property *VAR_8 = VAR_2->data;
        FUNC_7(VAR_0, VAR_8->name);
        FUNC_8(VAR_0, -2, "name");
        switch (VAR_8->format) {
        case 129:
            FUNC_13(VAR_0, VAR_8->data);
            break;
        case 131:
            FUNC_6(VAR_0, *(double *)VAR_8->data);
            break;
        case 130:
            FUNC_3(VAR_0, *(int *)VAR_8->data);
            break;
        case 128:
            FUNC_7(VAR_0, *(char **)VAR_8->data);
            break;
        default:
            FUNC_5(VAR_0);
        }
        FUNC_8(VAR_0, -2, "data");
        break;
    }
    case 134: {
        mpv_event_hook *VAR_9 = VAR_2->data;
        FUNC_4(VAR_0, VAR_9->id);
        FUNC_8(VAR_0, -2, "hook_id");
        break;
    }
    case 136: {
        mpv_event_command *VAR_10 = VAR_2->data;
        FUNC_13(VAR_0, &VAR_10->result);
        FUNC_8(VAR_0, -2, "result");
        break;
    }
    default: ;
    }


    return 1;
}
