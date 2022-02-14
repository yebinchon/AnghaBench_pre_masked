
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stream_open_args {int flags; int url; TYPE_1__* global; int cancel; scalar_t__ sinfo; } ;
struct stream {int dummy; } ;
struct mp_log {int dummy; } ;
struct TYPE_2__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct mp_log*,char*,...) ;
 struct mp_log* FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (scalar_t__,struct stream_open_args*,struct stream**) ;
 scalar_t__* VAR_5 ;
 int FUNC_5 (struct mp_log*) ;

int FUNC_6(struct stream_open_args *VAR_6, struct stream **VAR_7)

{
    FUNC_0(VAR_6->url);

    int VAR_8 = VAR_0;
    *VAR_7 = ((void*)0);


    if (VAR_6->sinfo) {
        VAR_8 = FUNC_4(VAR_6->sinfo, VAR_6, VAR_7);
    } else {
        for (int VAR_9 = 0; VAR_5[VAR_9]; VAR_9++) {
            VAR_8 = FUNC_4(VAR_5[VAR_9], VAR_6, VAR_7);
            if (VAR_8 == VAR_1)
                break;
            if (VAR_8 == VAR_0 || VAR_8 == VAR_4)
                continue;
            if (VAR_8 == VAR_3)
                continue;
            break;
        }
    }

    if (!*VAR_7 && !(VAR_6->flags & VAR_2) && !FUNC_1(VAR_6->cancel))
    {
        struct mp_log *VAR_10 = FUNC_3(((void*)0), VAR_6->global->log, "!stream");

        if (VAR_8 == VAR_3) {
            FUNC_2(VAR_10, "\nRefusing to load potentially unsafe URL from a playlist.\n"
                   "Use --playlist=file or the --load-unsafe-playlists option to "
                   "load it anyway.\n\n");
        } else if (VAR_8 == VAR_0 || VAR_8 == VAR_4) {
            FUNC_2(VAR_10, "No protocol handler found to open URL %s\n", VAR_6->url);
            FUNC_2(VAR_10, "The protocol is either unsupported, or was disabled "
                        "at compile-time.\n");
        } else {
            FUNC_2(VAR_10, "Failed to open %s.\n", VAR_6->url);
        }

        FUNC_5(VAR_10);
    }

    return VAR_8;
}
