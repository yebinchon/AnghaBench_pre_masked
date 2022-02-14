
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct track {int type; int selected; } ;
struct MPContext {int num_tracks; struct track** tracks; } ;
typedef enum stream_type { ____Placeholder_stream_type } stream_type ;


 int FUNC_0 (int) ;

__attribute__((used)) static struct track* FUNC_1(struct MPContext *VAR_0, enum stream_type VAR_1,
                                int VAR_2, struct track *VAR_3)
{
    FUNC_0(VAR_2 == -1 || VAR_2 == +1);
    struct track *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);
    bool VAR_6 = VAR_3 == ((void*)0);
    for (int VAR_7 = 0; VAR_7 < VAR_0->num_tracks; VAR_7++) {
        struct track *VAR_8 = VAR_0->tracks[VAR_7];
        if (VAR_8->type == VAR_1) {
            if (VAR_8 == VAR_3) {
                VAR_6 = 1;
            } else if (!VAR_8->selected) {
                if (VAR_6 && !VAR_5) {
                    VAR_5 = VAR_8;
                }
                if (!VAR_6 || !VAR_3) {
                    VAR_4 = VAR_8;
                }
            }
        }
    }
    return VAR_2 > 0 ? VAR_5 : VAR_4;
}
