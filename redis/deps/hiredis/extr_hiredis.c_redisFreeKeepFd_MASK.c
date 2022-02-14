
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int redisFD ;
struct TYPE_4__ {int fd; } ;
typedef TYPE_1__ redisContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

redisFD FUNC_1(redisContext *VAR_1) {
    redisFD VAR_2 = VAR_1->fd;
    VAR_1->fd = VAR_0;
    FUNC_0(VAR_1);
    return VAR_2;
}
