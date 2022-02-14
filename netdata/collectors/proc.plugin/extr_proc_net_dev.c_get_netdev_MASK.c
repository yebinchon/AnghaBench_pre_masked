
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct netdev {scalar_t__ hash; char const* name; struct netdev* next; int priority; void* chart_family; void* chart_id_net_packets; void* chart_id_net_fifo; void* chart_id_net_events; void* chart_id_net_errors; void* chart_id_net_drops; void* chart_id_net_compressed; void* chart_id_net_bytes; void* chart_type_net_packets; void* chart_type_net_fifo; void* chart_type_net_events; void* chart_type_net_errors; void* chart_type_net_drops; void* chart_type_net_compressed; void* chart_type_net_bytes; int len; } ;


 int VAR_0 ;
 struct netdev* FUNC_0 (int,int) ;
 int VAR_1 ;
 struct netdev* VAR_2 ;
 int FUNC_1 (struct netdev*) ;
 struct netdev* VAR_3 ;
 scalar_t__ FUNC_2 (char const*) ;
 int FUNC_3 (char const*,char const*) ;
 void* FUNC_4 (char const*) ;
 int FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static struct netdev *FUNC_7(const char *VAR_4) {
    struct netdev *VAR_5;

    uint32_t VAR_6 = FUNC_2(VAR_4);


    for(VAR_5 = VAR_2 ; VAR_5 ; VAR_5 = VAR_5->next) {
        if(FUNC_6(VAR_6 == VAR_5->hash && !FUNC_3(VAR_4, VAR_5->name))) {
            VAR_2 = VAR_5->next;
            return VAR_5;
        }
    }


    for(VAR_5 = VAR_3 ; VAR_5 != VAR_2 ; VAR_5 = VAR_5->next) {
        if(FUNC_6(VAR_6 == VAR_5->hash && !FUNC_3(VAR_4, VAR_5->name))) {
            VAR_2 = VAR_5->next;
            return VAR_5;
        }
    }


    VAR_5 = FUNC_0(1, sizeof(struct netdev));
    VAR_5->name = FUNC_4(VAR_4);
    VAR_5->hash = FUNC_2(VAR_5->name);
    VAR_5->len = FUNC_5(VAR_5->name);

    VAR_5->chart_type_net_bytes = FUNC_4("net");
    VAR_5->chart_type_net_compressed = FUNC_4("net_compressed");
    VAR_5->chart_type_net_drops = FUNC_4("net_drops");
    VAR_5->chart_type_net_errors = FUNC_4("net_errors");
    VAR_5->chart_type_net_events = FUNC_4("net_events");
    VAR_5->chart_type_net_fifo = FUNC_4("net_fifo");
    VAR_5->chart_type_net_packets = FUNC_4("net_packets");

    VAR_5->chart_id_net_bytes = FUNC_4(VAR_5->name);
    VAR_5->chart_id_net_compressed = FUNC_4(VAR_5->name);
    VAR_5->chart_id_net_drops = FUNC_4(VAR_5->name);
    VAR_5->chart_id_net_errors = FUNC_4(VAR_5->name);
    VAR_5->chart_id_net_events = FUNC_4(VAR_5->name);
    VAR_5->chart_id_net_fifo = FUNC_4(VAR_5->name);
    VAR_5->chart_id_net_packets = FUNC_4(VAR_5->name);

    VAR_5->chart_family = FUNC_4(VAR_5->name);
    VAR_5->priority = VAR_0;

    FUNC_1(VAR_5);

    VAR_1++;


    if(VAR_3) {
        struct netdev *VAR_7;
        for(VAR_7 = VAR_3; VAR_7->next ; VAR_7 = VAR_7->next) ;
        VAR_7->next = VAR_5;
    }
    else
        VAR_3 = VAR_5;

    return VAR_5;
}
