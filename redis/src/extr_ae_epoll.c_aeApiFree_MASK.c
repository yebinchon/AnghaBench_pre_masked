
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* apidata; } ;
typedef TYPE_1__ aeEventLoop ;
struct TYPE_6__ {struct TYPE_6__* events; int epfd; } ;
typedef TYPE_2__ aeApiState ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(aeEventLoop *VAR_0) {
    aeApiState *VAR_1 = VAR_0->apidata;

    FUNC_0(VAR_1->epfd);
    FUNC_1(VAR_1->events);
    FUNC_1(VAR_1);
}
