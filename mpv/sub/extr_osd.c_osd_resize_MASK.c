
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct osd_state {int lock; int * objs; } ;
struct mp_osd_res {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct osd_state*,struct mp_osd_res,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct osd_state *VAR_3, struct mp_osd_res VAR_4)
{
    FUNC_1(&VAR_3->lock);
    int VAR_5[] = {VAR_2, VAR_0, VAR_1, -1};
    for (int VAR_6 = 0; VAR_5[VAR_6] >= 0; VAR_6++)
        FUNC_0(VAR_3, VAR_4, VAR_3->objs[VAR_5[VAR_6]]);
    FUNC_2(&VAR_3->lock);
}
