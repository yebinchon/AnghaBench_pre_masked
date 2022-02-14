
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int fd; } ;
struct TYPE_5__ {TYPE_1__ endpoint; int type; int member_0; } ;
typedef TYPE_2__ redisOptions ;
typedef int redisFD ;
typedef int redisContext ;


 int VAR_0 ;
 int * FUNC_0 (TYPE_2__*) ;

redisContext *FUNC_1(redisFD VAR_1) {
    redisOptions VAR_2 = {0};
    VAR_2.type = VAR_0;
    VAR_2.endpoint.fd = VAR_1;
    return FUNC_0(&VAR_2);
}
