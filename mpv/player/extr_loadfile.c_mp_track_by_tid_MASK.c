
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct track {int type; int user_tid; } ;
struct MPContext {int num_tracks; struct track** tracks; struct track*** current_track; } ;
typedef enum stream_type { ____Placeholder_stream_type } stream_type ;



struct track *FUNC_0(struct MPContext *VAR_0, enum stream_type VAR_1,
                              int VAR_2)
{
    if (VAR_2 == -1)
        return VAR_0->current_track[0][VAR_1];
    for (int VAR_3 = 0; VAR_3 < VAR_0->num_tracks; VAR_3++) {
        struct track *VAR_4 = VAR_0->tracks[VAR_3];
        if (VAR_4->type == VAR_1 && VAR_4->user_tid == VAR_2)
            return VAR_4;
    }
    return ((void*)0);
}
