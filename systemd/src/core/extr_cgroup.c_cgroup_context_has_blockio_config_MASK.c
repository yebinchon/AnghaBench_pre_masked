
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ blockio_weight; scalar_t__ startup_blockio_weight; scalar_t__ blockio_device_bandwidths; scalar_t__ blockio_device_weights; scalar_t__ blockio_accounting; } ;
typedef TYPE_1__ CGroupContext ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(CGroupContext *VAR_1) {
        return VAR_1->blockio_accounting ||
                VAR_1->blockio_weight != VAR_0 ||
                VAR_1->startup_blockio_weight != VAR_0 ||
                VAR_1->blockio_device_weights ||
                VAR_1->blockio_device_bandwidths;
}
