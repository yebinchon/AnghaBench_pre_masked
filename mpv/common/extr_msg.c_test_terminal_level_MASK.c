
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_log {int terminal_level; TYPE_1__* root; } ;
struct TYPE_2__ {scalar_t__ use_terminal; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;

__attribute__((used)) static bool FUNC_1(struct mp_log *VAR_1, int VAR_2)
{
    return VAR_2 <= VAR_1->terminal_level && VAR_1->root->use_terminal &&
           !(VAR_2 == VAR_0 && FUNC_0());
}
