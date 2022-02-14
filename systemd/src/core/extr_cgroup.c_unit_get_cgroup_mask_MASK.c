
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ set; } ;
struct TYPE_14__ {scalar_t__ set; } ;
struct TYPE_16__ {scalar_t__ cpu_quota_per_sec_usec; scalar_t__ memory_limit; scalar_t__ device_policy; scalar_t__ tasks_max; scalar_t__ tasks_accounting; scalar_t__ device_allow; scalar_t__ memory_accounting; TYPE_2__ cpuset_mems; TYPE_1__ cpuset_cpus; scalar_t__ cpu_accounting; } ;
typedef TYPE_3__ Unit ;
typedef int CGroupMask ;
typedef TYPE_3__ CGroupContext ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;
 int FUNC_6 () ;
 TYPE_3__* FUNC_7 (TYPE_3__*) ;
 scalar_t__ FUNC_8 (TYPE_3__*) ;

__attribute__((used)) static CGroupMask FUNC_9(Unit *VAR_11) {
        CGroupMask VAR_12 = 0;
        CGroupContext *VAR_13;

        FUNC_1(VAR_11);

        VAR_13 = FUNC_7(VAR_11);

        FUNC_1(VAR_13);



        if (VAR_13->cpu_accounting)
                VAR_12 |= FUNC_6();

        if (FUNC_4(VAR_13) ||
            FUNC_3(VAR_13) ||
            VAR_13->cpu_quota_per_sec_usec != VAR_10)
                VAR_12 |= VAR_4;

        if (VAR_13->cpuset_cpus.set || VAR_13->cpuset_mems.set)
                VAR_12 |= VAR_5;

        if (FUNC_5(VAR_13) || FUNC_2(VAR_13))
                VAR_12 |= VAR_7 | VAR_2;

        if (VAR_13->memory_accounting ||
            VAR_13->memory_limit != VAR_1 ||
            FUNC_8(VAR_11))
                VAR_12 |= VAR_8;

        if (VAR_13->device_allow ||
            VAR_13->device_policy != VAR_0)
                VAR_12 |= VAR_6 | VAR_3;

        if (VAR_13->tasks_accounting ||
            VAR_13->tasks_max != VAR_1)
                VAR_12 |= VAR_9;

        return FUNC_0(VAR_12);
}
