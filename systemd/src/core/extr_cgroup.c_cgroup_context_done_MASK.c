
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int cpuset_mems; int cpuset_cpus; void* ip_filters_egress; void* ip_filters_ingress; void* ip_address_deny; void* ip_address_allow; scalar_t__ device_allow; scalar_t__ blockio_device_bandwidths; scalar_t__ blockio_device_weights; scalar_t__ io_device_limits; scalar_t__ io_device_latencies; scalar_t__ io_device_weights; } ;
typedef TYPE_1__ CGroupContext ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;
 int FUNC_3 (TYPE_1__*,scalar_t__) ;
 int FUNC_4 (TYPE_1__*,scalar_t__) ;
 int FUNC_5 (TYPE_1__*,scalar_t__) ;
 int FUNC_6 (TYPE_1__*,scalar_t__) ;
 int FUNC_7 (int *) ;
 void* FUNC_8 (void*) ;
 void* FUNC_9 (void*) ;

void FUNC_10(CGroupContext *VAR_0) {
        FUNC_0(VAR_0);

        while (VAR_0->io_device_weights)
                FUNC_6(VAR_0, VAR_0->io_device_weights);

        while (VAR_0->io_device_latencies)
                FUNC_4(VAR_0, VAR_0->io_device_latencies);

        while (VAR_0->io_device_limits)
                FUNC_5(VAR_0, VAR_0->io_device_limits);

        while (VAR_0->blockio_device_weights)
                FUNC_2(VAR_0, VAR_0->blockio_device_weights);

        while (VAR_0->blockio_device_bandwidths)
                FUNC_1(VAR_0, VAR_0->blockio_device_bandwidths);

        while (VAR_0->device_allow)
                FUNC_3(VAR_0, VAR_0->device_allow);

        VAR_0->ip_address_allow = FUNC_8(VAR_0->ip_address_allow);
        VAR_0->ip_address_deny = FUNC_8(VAR_0->ip_address_deny);

        VAR_0->ip_filters_ingress = FUNC_9(VAR_0->ip_filters_ingress);
        VAR_0->ip_filters_egress = FUNC_9(VAR_0->ip_filters_egress);

        FUNC_7(&VAR_0->cpuset_cpus);
        FUNC_7(&VAR_0->cpuset_mems);
}
