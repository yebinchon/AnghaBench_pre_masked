
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ao_pull_state {int * buffers; } ;
struct ao {struct ao_pull_state* api_priv; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(struct ao *VAR_0)
{
    struct ao_pull_state *VAR_1 = VAR_0->api_priv;


    return FUNC_0(VAR_1->buffers[0]) == 0;
}
