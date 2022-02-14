
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int o_num; int * o_props; } ;
typedef TYPE_1__ AMFObject ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;

void
FUNC_2(AMFObject *VAR_1)
{
    int VAR_2;
    FUNC_1(VAR_0, "(object begin)");
    for (VAR_2 = 0; VAR_2 < VAR_1->o_num; VAR_2++)
    {
        FUNC_0(&VAR_1->o_props[VAR_2]);
    }
    FUNC_1(VAR_0, "(object end)");
}
