
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int o_num; int * o_props; } ;
typedef TYPE_1__ AMFObject ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void
FUNC_2(AMFObject *VAR_0)
{
    int VAR_1;
    for (VAR_1 = 0; VAR_1 < VAR_0->o_num; VAR_1++)
    {
        FUNC_0(&VAR_0->o_props[VAR_1]);
    }
    FUNC_1(VAR_0->o_props);
    VAR_0->o_props = ((void*)0);
    VAR_0->o_num = 0;
}
