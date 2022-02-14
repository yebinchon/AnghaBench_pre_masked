
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct timeval {int dummy; } ;
struct TYPE_4__ {struct timeval const* timeout; int member_0; } ;
typedef TYPE_1__ redisOptions ;
typedef int redisContext ;


 int FUNC_0 (TYPE_1__*,char const*,int) ;
 int * FUNC_1 (TYPE_1__*) ;

redisContext *FUNC_2(const char *VAR_0, int VAR_1, const struct timeval VAR_2) {
    redisOptions VAR_3 = {0};
    FUNC_0(&VAR_3, VAR_0, VAR_1);
    VAR_3.timeout = &VAR_2;
    return FUNC_1(&VAR_3);
}
