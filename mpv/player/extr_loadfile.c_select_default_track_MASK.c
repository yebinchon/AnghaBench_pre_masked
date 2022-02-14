
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct track {int type; int user_tid; scalar_t__ is_external; scalar_t__ attached_picture; int forced_track; int default_track; int lang; int no_default; scalar_t__ no_auto_select; } ;
struct MPOpts {int** stream_id; char*** stream_lang; int autoload_files; int audio_display; } ;
struct MPContext {int num_tracks; struct MPOpts* opts; struct track** tracks; } ;
typedef enum stream_type { ____Placeholder_stream_type } stream_type ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct track*,struct track*,char**,struct MPOpts*) ;
 scalar_t__ FUNC_1 (struct MPContext*,int,int,struct track*) ;
 int FUNC_2 (char**,int ) ;

struct track *FUNC_3(struct MPContext *VAR_2, int VAR_3,
                                   enum stream_type VAR_4)
{
    struct MPOpts *VAR_5 = VAR_2->opts;
    int VAR_6 = VAR_5->stream_id[VAR_3][VAR_4];
    char **VAR_7 = VAR_5->stream_lang[VAR_4];
    if (VAR_6 == -2)
        return ((void*)0);
    bool VAR_8 = VAR_4 == VAR_1 || VAR_4 == VAR_0;
    struct track *VAR_9 = ((void*)0);
    for (int VAR_10 = 0; VAR_10 < VAR_2->num_tracks; VAR_10++) {
        struct track *VAR_11 = VAR_2->tracks[VAR_10];
        if (VAR_11->type != VAR_4)
            continue;
        if (VAR_11->user_tid == VAR_6)
            return VAR_11;
        if (VAR_11->no_auto_select)
            continue;
        if (FUNC_1(VAR_2, VAR_3, VAR_4, VAR_11))
            continue;
        if (!VAR_9 || FUNC_0(VAR_11, VAR_9, VAR_7, VAR_2->opts))
            VAR_9 = VAR_11;
    }
    if (VAR_9 && !VAR_8 && !(VAR_9->is_external && !VAR_9->no_default)
        && !FUNC_2(VAR_7, VAR_9->lang) && !VAR_9->default_track
        && !VAR_9->forced_track)
        VAR_9 = ((void*)0);
    if (VAR_9 && VAR_9->attached_picture && !VAR_2->opts->audio_display)
        VAR_9 = ((void*)0);
    if (VAR_9 && !VAR_5->autoload_files && VAR_9->is_external)
        VAR_9 = ((void*)0);
    return VAR_9;
}
