
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int sd_bus_message ;
typedef int sd_bus_error ;
struct TYPE_3__ {int polkit_registry; } ;
typedef TYPE_1__ Manager ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*,int *,int,int ,int *,int *) ;

int FUNC_1(Manager *VAR_2, sd_bus_message *VAR_3, sd_bus_error *VAR_4) {
        return FUNC_0(VAR_3, VAR_0, "org.freedesktop.systemd1.manage-units", ((void*)0), 0, VAR_1, &VAR_2->polkit_registry, VAR_4);
}
