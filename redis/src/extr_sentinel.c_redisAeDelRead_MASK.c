
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fd; scalar_t__ reading; int * loop; } ;
typedef TYPE_1__ redisAeEvents ;
typedef int aeEventLoop ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_1(void *VAR_1) {
    redisAeEvents *VAR_2 = (redisAeEvents*)VAR_1;
    aeEventLoop *VAR_3 = VAR_2->loop;
    if (VAR_2->reading) {
        VAR_2->reading = 0;
        FUNC_0(VAR_3,VAR_2->fd,VAR_0);
    }
}
