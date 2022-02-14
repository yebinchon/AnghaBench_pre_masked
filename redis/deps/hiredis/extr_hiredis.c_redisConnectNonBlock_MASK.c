
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int options; int member_0; } ;
typedef TYPE_1__ redisOptions ;
typedef int redisContext ;


 int FUNC_0 (TYPE_1__*,char const*,int) ;
 int VAR_0 ;
 int * FUNC_1 (TYPE_1__*) ;

redisContext *FUNC_2(const char *VAR_1, int VAR_2) {
    redisOptions VAR_3 = {0};
    FUNC_0(&VAR_3, VAR_1, VAR_2);
    VAR_3.options |= VAR_0;
    return FUNC_1(&VAR_3);
}
