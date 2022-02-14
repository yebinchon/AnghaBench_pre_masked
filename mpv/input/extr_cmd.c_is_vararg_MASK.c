
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_cmd_def {TYPE_1__* args; scalar_t__ vararg; } ;
struct TYPE_2__ {int type; } ;


 int VAR_0 ;

__attribute__((used)) static bool FUNC_0(const struct mp_cmd_def *VAR_1, int VAR_2)
{
    return VAR_1->vararg && (VAR_2 + 1 >= VAR_0 || !VAR_1->args[VAR_2 + 1].type);
}
