
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int sd_bus ;
struct TYPE_5__ {int private_listen_fd; int private_listen_event_source; int private_buses; } ;
typedef TYPE_1__ Manager ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int **) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int ) ;

void FUNC_6(Manager *VAR_0) {
        sd_bus *VAR_1;

        FUNC_0(VAR_0);

        while ((VAR_1 = FUNC_5(VAR_0->private_buses)))
                FUNC_1(VAR_0, &VAR_1);

        VAR_0->private_buses = FUNC_4(VAR_0->private_buses);

        VAR_0->private_listen_event_source = FUNC_3(VAR_0->private_listen_event_source);
        VAR_0->private_listen_fd = FUNC_2(VAR_0->private_listen_fd);
}
