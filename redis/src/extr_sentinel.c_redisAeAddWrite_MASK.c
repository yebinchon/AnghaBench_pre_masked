
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int writing; int fd; int * loop; } ;
typedef TYPE_1__ redisAeEvents ;
typedef int aeEventLoop ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ,TYPE_1__*) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(void *VAR_2) {
    redisAeEvents *VAR_3 = (redisAeEvents*)VAR_2;
    aeEventLoop *VAR_4 = VAR_3->loop;
    if (!VAR_3->writing) {
        VAR_3->writing = 1;
        FUNC_0(VAR_4,VAR_3->fd,VAR_0,VAR_1,VAR_3);
    }
}
