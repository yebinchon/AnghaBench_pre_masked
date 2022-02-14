
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* jsonsl_t ;
struct TYPE_8__ {int levels_max; int max_callback_level; TYPE_1__* stack; } ;
struct TYPE_7__ {unsigned int level; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;

jsonsl_t FUNC_3(jsonsl_t VAR_0, int VAR_1)
{
    unsigned int VAR_2;

    FUNC_2(VAR_0, 0, FUNC_0(VAR_1));
    VAR_0->levels_max = VAR_1;
    VAR_0->max_callback_level = -1;
    FUNC_1(VAR_0);
    for (VAR_2 = 0; VAR_2 < VAR_0->levels_max; VAR_2++) {
        VAR_0->stack[VAR_2].level = VAR_2;
    }
    return VAR_0;
}
