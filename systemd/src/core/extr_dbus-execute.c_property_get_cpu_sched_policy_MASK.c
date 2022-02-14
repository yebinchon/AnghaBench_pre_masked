
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ cpu_sched_policy; scalar_t__ cpu_sched_set; } ;
typedef TYPE_1__ sd_bus_message ;
typedef int sd_bus_error ;
typedef TYPE_1__ sd_bus ;
typedef scalar_t__ int32_t ;
typedef TYPE_1__ ExecContext ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_3(
                sd_bus *VAR_1,
                const char *VAR_2,
                const char *VAR_3,
                const char *VAR_4,
                sd_bus_message *VAR_5,
                void *VAR_6,
                sd_bus_error *VAR_7) {

        ExecContext *VAR_8 = VAR_6;
        int32_t VAR_9;

        FUNC_0(VAR_1);
        FUNC_0(VAR_5);
        FUNC_0(VAR_8);

        if (VAR_8->cpu_sched_set)
                VAR_9 = VAR_8->cpu_sched_policy;
        else {
                VAR_9 = FUNC_1(0);
                if (VAR_9 < 0)
                        VAR_9 = VAR_0;
        }

        return FUNC_2(VAR_5, "i", VAR_9);
}
