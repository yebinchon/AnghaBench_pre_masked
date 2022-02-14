
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cmd_bind_section {int num_binds; TYPE_1__* binds; } ;
struct TYPE_2__ {int is_builtin; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(struct cmd_bind_section *VAR_0, bool VAR_1)
{
    for (int VAR_2 = VAR_0->num_binds - 1; VAR_2 >= 0; VAR_2--) {
        if (VAR_0->binds[VAR_2].is_builtin == VAR_1) {
            FUNC_1(&VAR_0->binds[VAR_2]);
            FUNC_0(VAR_0->num_binds >= 1);
            VAR_0->binds[VAR_2] = VAR_0->binds[VAR_0->num_binds - 1];
            VAR_0->num_binds--;
        }
    }
}
