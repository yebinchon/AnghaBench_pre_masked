
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct osd_state {int lock; TYPE_1__** objs; } ;
struct mp_osd_res {int dummy; } ;
struct TYPE_2__ {struct mp_osd_res vo_res; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

struct mp_osd_res FUNC_2(struct osd_state *VAR_1)
{
    FUNC_0(&VAR_1->lock);

    struct mp_osd_res VAR_2 = VAR_1->objs[VAR_0]->vo_res;
    FUNC_1(&VAR_1->lock);
    return VAR_2;
}
