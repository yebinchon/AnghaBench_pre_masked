
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* client ;
typedef int aeEventLoop ;
struct TYPE_9__ {int pipeline; } ;
struct TYPE_8__ {int pending; scalar_t__ written; TYPE_1__* context; } ;
struct TYPE_7__ {int fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,int ,int ,int ,TYPE_2__*) ;
 int FUNC_2 (int *,int ,int ) ;
 TYPE_4__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_3(client VAR_4) {
    aeEventLoop *VAR_5 = FUNC_0(VAR_4);
    FUNC_2(VAR_5,VAR_4->context->fd,VAR_1);
    FUNC_2(VAR_5,VAR_4->context->fd,VAR_0);
    FUNC_1(VAR_5,VAR_4->context->fd,VAR_1,VAR_3,VAR_4);
    VAR_4->written = 0;
    VAR_4->pending = VAR_2.pipeline;
}
