
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int sec; } ;
struct index_state {TYPE_1__ timestamp; int alloc; int cache_nr; } ;



int FUNC_0(struct index_state *VAR_0)
{
    return (!VAR_0->cache_nr && !VAR_0->alloc && !VAR_0->timestamp.sec);
}
