
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct track {int user_tid; char* lang; int title; } ;
struct m_property_switch_arg {int inc; } ;
struct m_property {int dummy; } ;
typedef enum stream_type { ____Placeholder_stream_type } stream_type ;
struct TYPE_11__ {TYPE_1__* opts; int playback_initialized; struct track*** current_track; } ;
struct TYPE_10__ {int** stream_id; } ;
typedef TYPE_2__ MPContext ;


 int VAR_0 ;

 int VAR_1 ;



 int FUNC_0 (TYPE_2__*,struct m_property*,int,void*) ;
 int FUNC_1 (TYPE_2__*,int,int,struct track*,int ) ;
 struct track* FUNC_2 (TYPE_2__*,int,int) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,char*) ;
 char* FUNC_5 (int *,char*,int,char*,...) ;
 char* FUNC_6 (int *,char const*) ;
 struct track* FUNC_7 (TYPE_2__*,int,int,struct track*) ;

__attribute__((used)) static int FUNC_8(struct m_property *VAR_2, int VAR_3, void *VAR_4,
                                 MPContext *VAR_5, int VAR_6,
                                 enum stream_type VAR_7)
{
    struct track *VAR_8 = VAR_5->current_track[VAR_6][VAR_7];

    switch (VAR_3) {
    case 131:
        if (VAR_5->playback_initialized) {
            *(int *)VAR_4 = VAR_8 ? VAR_8->user_tid : -2;
        } else {
            *(int *)VAR_4 = VAR_5->opts->stream_id[VAR_6][VAR_7];
        }
        return VAR_1;
    case 130:
        if (VAR_8) {
            char *VAR_9 = VAR_8->lang;
            if (!VAR_9)
                VAR_9 = "unknown";

            if (VAR_8->title) {
                *(char **)VAR_4 = FUNC_5(((void*)0), "(%d) %s (\"%s\")",
                                           VAR_8->user_tid, VAR_9, VAR_8->title);
            } else {
                *(char **)VAR_4 = FUNC_5(((void*)0), "(%d) %s",
                                                VAR_8->user_tid, VAR_9);
            }
        } else {
            const char *VAR_10 = "no";
            if (!VAR_5->playback_initialized &&
                VAR_5->opts->stream_id[VAR_6][VAR_7] == -1)
                VAR_10 = "auto";
            *(char **) VAR_4 = FUNC_6(((void*)0), VAR_10);
        }
        return VAR_1;

    case 128: {
        if (VAR_5->playback_initialized) {
            struct m_property_switch_arg *VAR_11 = VAR_4;
            do {
                VAR_8 = FUNC_7(VAR_5, VAR_7, VAR_11->inc >= 0 ? +1 : -1, VAR_8);
                FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8, VAR_0);
            } while (VAR_5->current_track[VAR_6][VAR_7] != VAR_8);
            FUNC_4(VAR_5, "Track switched:");
        } else {


            VAR_5->opts->stream_id[VAR_6][VAR_7] =
                VAR_5->opts->stream_id[VAR_6][VAR_7] == -1 ? -2 : -1;
        }
        return VAR_1;
    }
    case 129:
        if (VAR_5->playback_initialized) {
            VAR_8 = FUNC_2(VAR_5, VAR_7, *(int *)VAR_4);
            FUNC_1(VAR_5, VAR_6, VAR_7, VAR_8, VAR_0);
            FUNC_4(VAR_5, "Track switched:");
            FUNC_3(VAR_5);
        } else {
            VAR_5->opts->stream_id[VAR_6][VAR_7] = *(int *)VAR_4;
        }
        return VAR_1;
    }
    return FUNC_0(VAR_5, VAR_2, VAR_3, VAR_4);
}
