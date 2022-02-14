
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct track {int dummy; } ;
struct MPContext {struct track*** current_track; } ;


 int VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static int FUNC_0(struct MPContext *VAR_2, struct track *VAR_3)
{
    for (int VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
        if (VAR_2->current_track[VAR_4][VAR_1] == VAR_3)
            return VAR_4;
    }
    return -1;
}
