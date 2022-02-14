
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct MPContext {int num_chapters; int last_chapter_seek; TYPE_1__* chapters; } ;
struct TYPE_2__ {double pts; } ;


 int FUNC_0 (int ,int) ;
 double FUNC_1 (struct MPContext*) ;

int FUNC_2(struct MPContext *VAR_0)
{
    if (!VAR_0->num_chapters)
        return -2;
    double VAR_1 = FUNC_1(VAR_0);
    int VAR_2;
    for (VAR_2 = 0; VAR_2 < VAR_0->num_chapters; VAR_2++)
        if (VAR_1 < VAR_0->chapters[VAR_2].pts)
            break;
    return FUNC_0(VAR_0->last_chapter_seek, VAR_2 - 1);
}
