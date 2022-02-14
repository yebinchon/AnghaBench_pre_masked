
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ io_weight; scalar_t__ startup_io_weight; scalar_t__ io_device_limits; scalar_t__ io_device_latencies; scalar_t__ io_device_weights; scalar_t__ io_accounting; } ;
typedef TYPE_1__ CGroupContext ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(CGroupContext *VAR_1) {
        return VAR_1->io_accounting ||
                VAR_1->io_weight != VAR_0 ||
                VAR_1->startup_io_weight != VAR_0 ||
                VAR_1->io_device_weights ||
                VAR_1->io_device_latencies ||
                VAR_1->io_device_limits;
}
