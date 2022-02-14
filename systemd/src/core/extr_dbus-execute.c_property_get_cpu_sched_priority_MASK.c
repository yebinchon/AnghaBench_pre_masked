
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct sched_param {int sched_priority; } ;
struct TYPE_8__ {int cpu_sched_priority; scalar_t__ cpu_sched_set; } ;
typedef TYPE_1__ sd_bus_message ;
typedef int sd_bus_error ;
typedef TYPE_1__ sd_bus ;
typedef int int32_t ;
typedef TYPE_1__ ExecContext ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ,struct sched_param*) ;
 int FUNC_2 (TYPE_1__*,char*,int ) ;

__attribute__((used)) static int FUNC_3(
                sd_bus *VAR_0,
                const char *VAR_1,
                const char *VAR_2,
                const char *VAR_3,
                sd_bus_message *VAR_4,
                void *VAR_5,
                sd_bus_error *VAR_6) {

        ExecContext *VAR_7 = VAR_5;
        int32_t VAR_8;

        FUNC_0(VAR_0);
        FUNC_0(VAR_4);
        FUNC_0(VAR_7);

        if (VAR_7->cpu_sched_set)
                VAR_8 = VAR_7->cpu_sched_priority;
        else {
                struct sched_param VAR_9 = {};

                if (FUNC_1(0, &VAR_9) >= 0)
                        VAR_8 = VAR_9.sched_priority;
                else
                        VAR_8 = 0;
        }

        return FUNC_2(VAR_4, "i", VAR_8);
}
