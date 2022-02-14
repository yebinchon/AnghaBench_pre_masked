
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sd_bus ;
typedef size_t UnitType ;
struct TYPE_2__ {scalar_t__ cgroup_context_offset; scalar_t__ exec_context_offset; scalar_t__ kill_context_offset; int bus_vtable; } ;
typedef int Manager ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (int,char*,...) ;
 int VAR_17 ;
 int FUNC_3 (int *,int *,char*,char const*,int ,int ,int *) ;
 int FUNC_4 (int *,int *,int ,int *) ;
 int FUNC_5 (int *,int *,char*,int ,int *) ;
 int FUNC_6 (int *,int *,char*,char*,int ,int *) ;
 char* FUNC_7 (size_t) ;
 TYPE_1__** VAR_18 ;

__attribute__((used)) static int FUNC_8(Manager *VAR_19, sd_bus *VAR_20) {
        UnitType VAR_21;
        int VAR_22;

        FUNC_0(VAR_19);
        FUNC_0(VAR_20);







        VAR_22 = FUNC_6(VAR_20, ((void*)0), "/org/freedesktop/systemd1", "org.freedesktop.systemd1.Manager", VAR_10, VAR_19);
        if (VAR_22 < 0)
                return FUNC_2(VAR_22, "Failed to register Manager vtable: %m");

        VAR_22 = FUNC_3(VAR_20, ((void*)0), "/org/freedesktop/systemd1/job", "org.freedesktop.systemd1.Job", VAR_7, VAR_6, VAR_19);
        if (VAR_22 < 0)
                return FUNC_2(VAR_22, "Failed to register Job vtable: %m");

        VAR_22 = FUNC_5(VAR_20, ((void*)0), "/org/freedesktop/systemd1/job", VAR_5, VAR_19);
        if (VAR_22 < 0)
                return FUNC_2(VAR_22, "Failed to add job enumerator: %m");

        VAR_22 = FUNC_3(VAR_20, ((void*)0), "/org/freedesktop/systemd1/unit", "org.freedesktop.systemd1.Unit", VAR_16, VAR_14, VAR_19);
        if (VAR_22 < 0)
                return FUNC_2(VAR_22, "Failed to register Unit vtable: %m");

        VAR_22 = FUNC_5(VAR_20, ((void*)0), "/org/freedesktop/systemd1/unit", VAR_13, VAR_19);
        if (VAR_22 < 0)
                return FUNC_2(VAR_22, "Failed to add job enumerator: %m");

        for (VAR_21 = 0; VAR_21 < VAR_0; VAR_21++) {
                const char *VAR_23;

                FUNC_1(VAR_23 = FUNC_7(VAR_21));

                VAR_22 = FUNC_3(VAR_20, ((void*)0), "/org/freedesktop/systemd1/unit", VAR_23, VAR_18[VAR_21]->bus_vtable, VAR_15, VAR_19);
                if (VAR_22 < 0)
                        return FUNC_2(VAR_22, "Failed to register type specific vtable for %s: %m", VAR_23);

                if (VAR_18[VAR_21]->cgroup_context_offset > 0) {
                        VAR_22 = FUNC_3(VAR_20, ((void*)0), "/org/freedesktop/systemd1/unit", VAR_23, VAR_12, VAR_11, VAR_19);
                        if (VAR_22 < 0)
                                return FUNC_2(VAR_22, "Failed to register control group unit vtable for %s: %m", VAR_23);

                        VAR_22 = FUNC_3(VAR_20, ((void*)0), "/org/freedesktop/systemd1/unit", VAR_23, VAR_2, VAR_1, VAR_19);
                        if (VAR_22 < 0)
                                return FUNC_2(VAR_22, "Failed to register control group vtable for %s: %m", VAR_23);
                }

                if (VAR_18[VAR_21]->exec_context_offset > 0) {
                        VAR_22 = FUNC_3(VAR_20, ((void*)0), "/org/freedesktop/systemd1/unit", VAR_23, VAR_4, VAR_3, VAR_19);
                        if (VAR_22 < 0)
                                return FUNC_2(VAR_22, "Failed to register execute vtable for %s: %m", VAR_23);
                }

                if (VAR_18[VAR_21]->kill_context_offset > 0) {
                        VAR_22 = FUNC_3(VAR_20, ((void*)0), "/org/freedesktop/systemd1/unit", VAR_23, VAR_9, VAR_8, VAR_19);
                        if (VAR_22 < 0)
                                return FUNC_2(VAR_22, "Failed to register kill vtable for %s: %m", VAR_23);
                }
        }

        return 0;
}
