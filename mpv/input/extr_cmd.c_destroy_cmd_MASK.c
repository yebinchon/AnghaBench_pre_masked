
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_cmd {int nargs; TYPE_1__* args; } ;
struct TYPE_2__ {int v; scalar_t__ type; } ;


 int FUNC_0 (scalar_t__,int *) ;

__attribute__((used)) static void FUNC_1(void *VAR_0)
{
    struct mp_cmd *VAR_1 = VAR_0;
    for (int VAR_2 = 0; VAR_2 < VAR_1->nargs; VAR_2++) {
        if (VAR_1->args[VAR_2].type)
            FUNC_0(VAR_1->args[VAR_2].type, &VAR_1->args[VAR_2].v);
    }
}
