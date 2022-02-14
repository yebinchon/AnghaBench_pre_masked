
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ slave_priority; scalar_t__ slave_repl_offset; char* runid; } ;
typedef TYPE_1__ sentinelRedisInstance ;


 int FUNC_0 (char*,char*) ;

int FUNC_1(const void *VAR_0, const void *VAR_1) {
    sentinelRedisInstance **VAR_2 = (sentinelRedisInstance **)VAR_0,
                          **VAR_3 = (sentinelRedisInstance **)VAR_1;
    char *VAR_4, *VAR_5;

    if ((*VAR_2)->slave_priority != (*VAR_3)->slave_priority)
        return (*VAR_2)->slave_priority - (*VAR_3)->slave_priority;



    if ((*VAR_2)->slave_repl_offset > (*VAR_3)->slave_repl_offset) {
        return -1;
    } else if ((*VAR_2)->slave_repl_offset < (*VAR_3)->slave_repl_offset) {
        return 1;
    }





    VAR_4 = (*VAR_2)->runid;
    VAR_5 = (*VAR_3)->runid;
    if (VAR_4 == ((void*)0) && VAR_5 == ((void*)0)) return 0;
    else if (VAR_4 == ((void*)0)) return 1;
    else if (VAR_5 == ((void*)0)) return -1;
    return FUNC_0(VAR_4, VAR_5);
}
