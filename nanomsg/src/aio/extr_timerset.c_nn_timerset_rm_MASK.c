
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nn_timerset_hndl {int list; } ;
struct nn_timerset {int timeouts; } ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;

int FUNC_3 (struct nn_timerset *VAR_0, struct nn_timerset_hndl *VAR_1)
{
    int VAR_2;


    if (!FUNC_2 (&VAR_1->list))
        return 0;



    VAR_2 = FUNC_0 (&VAR_0->timeouts) == &VAR_1->list ? 1 : 0;
    FUNC_1 (&VAR_0->timeouts, &VAR_1->list);
    return VAR_2;
}
