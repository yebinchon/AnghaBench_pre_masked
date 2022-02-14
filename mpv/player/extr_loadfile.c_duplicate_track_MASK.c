
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct track {int dummy; } ;
struct MPContext {struct track*** current_track; } ;
typedef enum stream_type { ____Placeholder_stream_type } stream_type ;



__attribute__((used)) static bool FUNC_0(struct MPContext *VAR_0, int VAR_1,
                            enum stream_type VAR_2, struct track *VAR_3)
{
    for (int VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
        if (VAR_0->current_track[VAR_4][VAR_2] == VAR_3)
            return 1;
    }
    return 0;
}
