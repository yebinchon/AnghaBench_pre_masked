
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev {scalar_t__ chart_family; scalar_t__ chart_id_net_packets; scalar_t__ chart_id_net_fifo; scalar_t__ chart_id_net_events; scalar_t__ chart_id_net_errors; scalar_t__ chart_id_net_drops; scalar_t__ chart_id_net_compressed; scalar_t__ chart_id_net_bytes; scalar_t__ chart_type_net_packets; scalar_t__ chart_type_net_fifo; scalar_t__ chart_type_net_events; scalar_t__ chart_type_net_errors; scalar_t__ chart_type_net_drops; scalar_t__ chart_type_net_compressed; scalar_t__ chart_type_net_bytes; } ;


 int FUNC_0 (void*) ;

__attribute__((used)) static void FUNC_1(struct netdev *VAR_0) {
    FUNC_0((void *)VAR_0->chart_type_net_bytes);
    FUNC_0((void *)VAR_0->chart_type_net_compressed);
    FUNC_0((void *)VAR_0->chart_type_net_drops);
    FUNC_0((void *)VAR_0->chart_type_net_errors);
    FUNC_0((void *)VAR_0->chart_type_net_events);
    FUNC_0((void *)VAR_0->chart_type_net_fifo);
    FUNC_0((void *)VAR_0->chart_type_net_packets);

    FUNC_0((void *)VAR_0->chart_id_net_bytes);
    FUNC_0((void *)VAR_0->chart_id_net_compressed);
    FUNC_0((void *)VAR_0->chart_id_net_drops);
    FUNC_0((void *)VAR_0->chart_id_net_errors);
    FUNC_0((void *)VAR_0->chart_id_net_events);
    FUNC_0((void *)VAR_0->chart_id_net_fifo);
    FUNC_0((void *)VAR_0->chart_id_net_packets);

    FUNC_0((void *)VAR_0->chart_family);
}
