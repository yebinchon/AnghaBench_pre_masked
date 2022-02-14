
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct track {int type; int user_tid; } ;
struct MPContext {int num_tracks; struct track** tracks; } ;
typedef enum stream_type { ____Placeholder_stream_type } stream_type ;


 int FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(struct MPContext *VAR_0, enum stream_type VAR_1)
{
    int VAR_2 = 0;
    for (int VAR_3 = 0; VAR_3 < VAR_0->num_tracks; VAR_3++) {
        struct track *VAR_4 = VAR_0->tracks[VAR_3];
        if (VAR_4->type == VAR_1)
            VAR_2 = FUNC_0(VAR_2, VAR_4->user_tid);
    }
    return VAR_2 + 1;
}
