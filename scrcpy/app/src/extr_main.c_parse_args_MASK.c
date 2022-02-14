
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct option {char* member_0; char member_3; int * member_2; int const member_1; } ;
struct args {int fullscreen; int help; int no_control; int no_display; int turn_screen_off; int show_touches; int always_on_top; int version; int render_expired_frames; void* record_filename; scalar_t__ record_format; void* push_target; void* window_title; void* serial; int port; int max_size; void* crop; int bit_rate; } ;


 int FUNC_0 (char*,...) ;



 int FUNC_1 (int,char**,char*,struct option const*,int *) ;
 scalar_t__ FUNC_2 (void*) ;

 void* VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (void*,int *) ;
 int FUNC_4 (void*,int *) ;
 int FUNC_5 (void*,int *) ;
 int FUNC_6 (void*,scalar_t__*) ;


__attribute__((used)) static bool
FUNC_7(struct args *VAR_2, int VAR_3, char *VAR_4[]) {
    static const struct option VAR_5[] = {
        {"always-on-top", 129, ((void*)0), 'T'},
        {"bit-rate", 128, ((void*)0), 'b'},
        {"crop", 128, ((void*)0), 'c'},
        {"fullscreen", 129, ((void*)0), 'f'},
        {"help", 129, ((void*)0), 'h'},
        {"max-size", 128, ((void*)0), 'm'},
        {"no-control", 129, ((void*)0), 'n'},
        {"no-display", 129, ((void*)0), 'N'},
        {"port", 128, ((void*)0), 'p'},
        {"push-target", 128, ((void*)0),
                                                 132},
        {"record", 128, ((void*)0), 'r'},
        {"record-format", 128, ((void*)0), 'F'},
        {"render-expired-frames", 129, ((void*)0),
                                                 131},
        {"serial", 128, ((void*)0), 's'},
        {"show-touches", 129, ((void*)0), 't'},
        {"turn-screen-off", 129, ((void*)0), 'S'},
        {"version", 129, ((void*)0), 'v'},
        {"window-title", 128, ((void*)0),
                                                 130},
        {((void*)0), 0, ((void*)0), 0 },
    };
    int VAR_6;
    while ((VAR_6 = FUNC_1(VAR_3, VAR_4, "b:c:fF:hm:nNp:r:s:StTv", VAR_5,
                            ((void*)0))) != -1) {
        switch (VAR_6) {
            case 'b':
                if (!FUNC_3(VAR_0, &VAR_2->bit_rate)) {
                    return 0;
                }
                break;
            case 'c':
                VAR_2->crop = VAR_0;
                break;
            case 'f':
                VAR_2->fullscreen = 1;
                break;
            case 'F':
                if (!FUNC_6(VAR_0, &VAR_2->record_format)) {
                    return 0;
                }
                break;
            case 'h':
                VAR_2->help = 1;
                break;
            case 'm':
                if (!FUNC_4(VAR_0, &VAR_2->max_size)) {
                    return 0;
                }
                break;
            case 'n':
                VAR_2->no_control = 1;
                break;
            case 'N':
                VAR_2->no_display = 1;
                break;
            case 'p':
                if (!FUNC_5(VAR_0, &VAR_2->port)) {
                    return 0;
                }
                break;
            case 'r':
                VAR_2->record_filename = VAR_0;
                break;
            case 's':
                VAR_2->serial = VAR_0;
                break;
            case 'S':
                VAR_2->turn_screen_off = 1;
                break;
            case 't':
                VAR_2->show_touches = 1;
                break;
            case 'T':
                VAR_2->always_on_top = 1;
                break;
            case 'v':
                VAR_2->version = 1;
                break;
            case 131:
                VAR_2->render_expired_frames = 1;
                break;
            case 130:
                VAR_2->window_title = VAR_0;
                break;
            case 132:
                VAR_2->push_target = VAR_0;
                break;
            default:

                return 0;
        }
    }

    if (VAR_2->no_display && !VAR_2->record_filename) {
        FUNC_0("-N/--no-display requires screen recording (-r/--record)");
        return 0;
    }

    if (VAR_2->no_display && VAR_2->fullscreen) {
        FUNC_0("-f/--fullscreen-window is incompatible with -N/--no-display");
        return 0;
    }

    int VAR_7 = VAR_1;
    if (VAR_7 < VAR_3) {
        FUNC_0("Unexpected additional argument: %s", VAR_4[VAR_7]);
        return 0;
    }

    if (VAR_2->record_format && !VAR_2->record_filename) {
        FUNC_0("Record format specified without recording");
        return 0;
    }

    if (VAR_2->record_filename && !VAR_2->record_format) {
        VAR_2->record_format = FUNC_2(VAR_2->record_filename);
        if (!VAR_2->record_format) {
            FUNC_0("No format specified for \"%s\" (try with -F mkv)",
                 VAR_2->record_filename);
            return 0;
        }
    }

    if (VAR_2->no_control && VAR_2->turn_screen_off) {
        FUNC_0("Could not request to turn screen off if control is disabled");
        return 0;
    }

    return 1;
}
