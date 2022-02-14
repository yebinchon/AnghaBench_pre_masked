
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int fd; } ;
typedef TYPE_2__ redisContext ;
struct TYPE_6__ {TYPE_4__* data; int cleanup; int delWrite; int addWrite; int delRead; int addRead; } ;
struct TYPE_8__ {TYPE_1__ ev; TYPE_2__ c; } ;
typedef TYPE_3__ redisAsyncContext ;
struct TYPE_9__ {scalar_t__ writing; scalar_t__ reading; int fd; int * loop; TYPE_3__* context; } ;
typedef TYPE_4__ redisAeEvents ;
typedef int aeEventLoop ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(aeEventLoop *VAR_7, redisAsyncContext *VAR_8) {
    redisContext *VAR_9 = &(VAR_8->c);
    redisAeEvents *VAR_10;


    if (VAR_8->ev.data != ((void*)0))
        return VAR_0;


    VAR_10 = (redisAeEvents*)FUNC_0(sizeof(*VAR_10));
    VAR_10->context = VAR_8;
    VAR_10->loop = VAR_7;
    VAR_10->fd = VAR_9->fd;
    VAR_10->reading = VAR_10->writing = 0;


    VAR_8->ev.addRead = VAR_2;
    VAR_8->ev.delRead = VAR_5;
    VAR_8->ev.addWrite = VAR_3;
    VAR_8->ev.delWrite = VAR_6;
    VAR_8->ev.cleanup = VAR_4;
    VAR_8->ev.data = VAR_10;

    return VAR_1;
}
