
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_refqueue {int second_field; int flags; size_t pos; TYPE_1__** queue; } ;
struct TYPE_2__ {double pts; } ;


 int VAR_0 ;
 double VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct mp_refqueue*) ;

__attribute__((used)) static bool FUNC_2(struct mp_refqueue *VAR_2)
{
    if (VAR_2->second_field)
        return 0;
    if (!(VAR_2->flags & VAR_0))
        return 0;
    if (!FUNC_1(VAR_2))
        return 0;

    FUNC_0(VAR_2->pos >= 0);


    if (VAR_2->pos == 0)
        return 0;

    double VAR_3 = VAR_2->queue[VAR_2->pos]->pts;
    double VAR_4 = VAR_2->queue[VAR_2->pos - 1]->pts;
    if (VAR_3 == VAR_1 || VAR_4 == VAR_1)
        return 0;

    double VAR_5 = VAR_4 - VAR_3;
    if (VAR_5 <= 0.0 || VAR_5 >= 1.0)
        return 0;

    VAR_2->queue[VAR_2->pos]->pts = VAR_3 + VAR_5 / 2;
    VAR_2->second_field = 1;
    return 1;
}
