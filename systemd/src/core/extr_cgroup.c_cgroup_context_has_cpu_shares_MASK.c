
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ cpu_shares; scalar_t__ startup_cpu_shares; } ;
typedef TYPE_1__ CGroupContext ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(CGroupContext *VAR_1) {
        return VAR_1->cpu_shares != VAR_0 ||
                VAR_1->startup_cpu_shares != VAR_0;
}
