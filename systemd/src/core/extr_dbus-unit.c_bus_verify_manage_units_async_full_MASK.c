
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sd_bus_message ;
typedef int sd_bus_error ;
struct TYPE_5__ {char* id; TYPE_1__* manager; } ;
typedef TYPE_2__ Unit ;
struct TYPE_4__ {int polkit_registry; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,char*,char const**,int,int ,int *,int *) ;

__attribute__((used)) static int FUNC_1(
                Unit *VAR_2,
                const char *VAR_3,
                int VAR_4,
                const char *VAR_5,
                bool VAR_6,
                sd_bus_message *VAR_7,
                sd_bus_error *VAR_8) {

        const char *VAR_9[9] = {
                "unit", VAR_2->id,
                "verb", VAR_3,
        };

        if (VAR_5) {
                VAR_9[4] = "polkit.message";
                VAR_9[5] = VAR_5;
                VAR_9[6] = "polkit.gettext_domain";
                VAR_9[7] = VAR_0;
        }

        return FUNC_0(
                        VAR_7,
                        VAR_4,
                        "org.freedesktop.systemd1.manage-units",
                        VAR_9,
                        VAR_6,
                        VAR_1,
                        &VAR_2->manager->polkit_registry,
                        VAR_8);
}
