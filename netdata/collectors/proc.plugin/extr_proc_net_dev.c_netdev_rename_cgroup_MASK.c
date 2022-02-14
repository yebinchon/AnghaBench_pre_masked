
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_rename {int container_device; int container_name; int host_device; } ;
struct netdev {int flipped; int priority; void* chart_family; void* chart_id_net_packets; void* chart_id_net_fifo; void* chart_id_net_events; void* chart_id_net_errors; void* chart_id_net_drops; void* chart_id_net_compressed; void* chart_id_net_bytes; void* chart_type_net_packets; void* chart_type_net_fifo; void* chart_type_net_events; void* chart_type_net_errors; void* chart_type_net_drops; void* chart_type_net_compressed; void* chart_type_net_bytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (struct netdev*) ;
 int FUNC_2 (struct netdev*) ;
 int FUNC_3 (char*,int ,char*,int ) ;
 void* FUNC_4 (char*) ;

__attribute__((used)) static inline void FUNC_5(struct netdev *VAR_2, struct netdev_rename *VAR_3) {
    FUNC_0("CGROUP: renaming network interface '%s' as '%s' under '%s'", VAR_3->host_device, VAR_3->container_device, VAR_3->container_name);

    FUNC_1(VAR_2);
    FUNC_2(VAR_2);

    char VAR_4[VAR_1 + 1];

    FUNC_3(VAR_4, VAR_1, "cgroup_%s", VAR_3->container_name);
    VAR_2->chart_type_net_bytes = FUNC_4(VAR_4);
    VAR_2->chart_type_net_compressed = FUNC_4(VAR_4);
    VAR_2->chart_type_net_drops = FUNC_4(VAR_4);
    VAR_2->chart_type_net_errors = FUNC_4(VAR_4);
    VAR_2->chart_type_net_events = FUNC_4(VAR_4);
    VAR_2->chart_type_net_fifo = FUNC_4(VAR_4);
    VAR_2->chart_type_net_packets = FUNC_4(VAR_4);

    FUNC_3(VAR_4, VAR_1, "net_%s", VAR_3->container_device);
    VAR_2->chart_id_net_bytes = FUNC_4(VAR_4);

    FUNC_3(VAR_4, VAR_1, "net_compressed_%s", VAR_3->container_device);
    VAR_2->chart_id_net_compressed = FUNC_4(VAR_4);

    FUNC_3(VAR_4, VAR_1, "net_drops_%s", VAR_3->container_device);
    VAR_2->chart_id_net_drops = FUNC_4(VAR_4);

    FUNC_3(VAR_4, VAR_1, "net_errors_%s", VAR_3->container_device);
    VAR_2->chart_id_net_errors = FUNC_4(VAR_4);

    FUNC_3(VAR_4, VAR_1, "net_events_%s", VAR_3->container_device);
    VAR_2->chart_id_net_events = FUNC_4(VAR_4);

    FUNC_3(VAR_4, VAR_1, "net_fifo_%s", VAR_3->container_device);
    VAR_2->chart_id_net_fifo = FUNC_4(VAR_4);

    FUNC_3(VAR_4, VAR_1, "net_packets_%s", VAR_3->container_device);
    VAR_2->chart_id_net_packets = FUNC_4(VAR_4);

    FUNC_3(VAR_4, VAR_1, "net %s", VAR_3->container_device);
    VAR_2->chart_family = FUNC_4(VAR_4);

    VAR_2->priority = VAR_0;
    VAR_2->flipped = 1;
}
