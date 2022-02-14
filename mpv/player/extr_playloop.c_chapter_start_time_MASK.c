
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct MPContext {int num_chapters; TYPE_1__* chapters; } ;
struct TYPE_2__ {double pts; } ;


 double VAR_0 ;

double FUNC_0(struct MPContext *VAR_1, int VAR_2)
{
    if (VAR_2 == -1)
        return 0;
    if (VAR_2 >= 0 && VAR_2 < VAR_1->num_chapters)
        return VAR_1->chapters[VAR_2].pts;
    return VAR_0;
}
