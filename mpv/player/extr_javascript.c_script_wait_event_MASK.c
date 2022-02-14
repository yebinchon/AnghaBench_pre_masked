
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {char* prefix; char* level; char* text; int num_args; char** args; int const reason; scalar_t__ error; char* name; double id; int result; int * data; int format; } ;
typedef TYPE_1__ mpv_event_property ;
typedef TYPE_1__ mpv_event_log_message ;
typedef TYPE_1__ mpv_event_hook ;
typedef TYPE_1__ mpv_event_end_file ;
typedef TYPE_1__ mpv_event_command ;
typedef TYPE_1__ mpv_event_client_message ;
struct TYPE_10__ {int event_id; double reply_userdata; scalar_t__ error; TYPE_1__* data; } ;
typedef TYPE_7__ mpv_event ;
typedef int js_State ;
typedef double int64_t ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,double) ;
 int FUNC_9 (int *,char const*) ;
 int FUNC_10 (int *,int,int) ;
 int FUNC_11 (int *,int,char*) ;
 int FUNC_12 (int *,int) ;
 char* FUNC_13 (scalar_t__) ;
 char* FUNC_14 (int) ;
 TYPE_7__* FUNC_15 (int ,double) ;
 int FUNC_16 (int *,int *) ;

__attribute__((used)) static void FUNC_17(js_State *VAR_0)
{
    int VAR_1 = FUNC_2(VAR_0);
    double VAR_2 = FUNC_3(VAR_0, 1) ? FUNC_12(VAR_0, 1) : -1;
    mpv_event *VAR_3 = FUNC_15(FUNC_1(VAR_0), VAR_2);

    FUNC_5(VAR_0);
    FUNC_9(VAR_0, FUNC_14(VAR_3->event_id));
    FUNC_11(VAR_0, -2, "event");

    if (VAR_3->reply_userdata) {
        FUNC_8(VAR_0, VAR_3->reply_userdata);
        FUNC_11(VAR_0, -2, "id");
    }

    if (VAR_3->error < 0) {

        FUNC_9(VAR_0, FUNC_13(VAR_3->error));
        FUNC_11(VAR_0, -2, "error");
    }

    switch (VAR_3->event_id) {
    case 134: {
        mpv_event_log_message *VAR_4 = VAR_3->data;

        FUNC_9(VAR_0, VAR_4->prefix);
        FUNC_11(VAR_0, -2, "prefix");
        FUNC_9(VAR_0, VAR_4->level);
        FUNC_11(VAR_0, -2, "level");
        FUNC_9(VAR_0, VAR_4->text);
        FUNC_11(VAR_0, -2, "text");
        break;
    }

    case 138: {
        mpv_event_client_message *VAR_5 = VAR_3->data;

        FUNC_4(VAR_0);
        for (int VAR_6 = 0; VAR_6 < VAR_5->num_args; VAR_6++) {
            FUNC_9(VAR_0, VAR_5->args[VAR_6]);
            FUNC_10(VAR_0, -2, VAR_6);
        }
        FUNC_11(VAR_0, -2, "args");
        break;
    }

    case 136: {
        mpv_event_end_file *VAR_7 = VAR_3->data;
        const char *VAR_8;

        switch (VAR_7->reason) {
        case 143: VAR_8 = "eof"; break;
        case 139: VAR_8 = "stop"; break;
        case 141: VAR_8 = "quit"; break;
        case 142: VAR_8 = "error"; break;
        case 140: VAR_8 = "redirect"; break;
        default:
            VAR_8 = "unknown";
        }
        FUNC_9(VAR_0, VAR_8);
        FUNC_11(VAR_0, -2, "reason");

        if (VAR_7->reason == 142) {
            FUNC_9(VAR_0, FUNC_13(VAR_7->error));
            FUNC_11(VAR_0, -2, "error");
        }
        break;
    }

    case 133: {
        mpv_event_property *VAR_9 = VAR_3->data;
        FUNC_9(VAR_0, VAR_9->name);
        FUNC_11(VAR_0, -2, "name");

        switch (VAR_9->format) {
        case 129: FUNC_16(VAR_0, VAR_9->data); break;
        case 132: FUNC_8(VAR_0, *(double *)VAR_9->data); break;
        case 130: FUNC_8(VAR_0, *(int64_t *)VAR_9->data); break;
        case 131: FUNC_6(VAR_0, *(int *)VAR_9->data); break;
        case 128: FUNC_9(VAR_0, *(char **)VAR_9->data); break;
        default:
            FUNC_7(VAR_0);
        }
        FUNC_11(VAR_0, -2, "data");
        break;
    }

    case 135: {
        mpv_event_hook *VAR_10 = VAR_3->data;
        FUNC_8(VAR_0, VAR_10->id);
        FUNC_11(VAR_0, -2, "hook_id");
        break;
    }

    case 137: {
        mpv_event_command *VAR_11 = VAR_3->data;
        FUNC_16(VAR_0, &VAR_11->result);
        FUNC_11(VAR_0, -2, "result");
        break;
    }
    }

    FUNC_0(VAR_1 == FUNC_2(VAR_0) - 1);
}
