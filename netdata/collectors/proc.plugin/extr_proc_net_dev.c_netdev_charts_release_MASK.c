
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev {int * rd_tcompressed; int * rd_tcarrier; int * rd_tcollisions; int * rd_tfifo; int * rd_tdrops; int * rd_terrors; int * rd_tpackets; int * rd_tbytes; int * rd_rmulticast; int * rd_rcompressed; int * rd_rframe; int * rd_rfifo; int * rd_rdrops; int * rd_rerrors; int * rd_rpackets; int * rd_rbytes; int * st_packets; int * st_fifo; int * st_events; int * st_errors; int * st_drops; int * st_compressed; int * st_bandwidth; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct netdev *VAR_0) {
    if(VAR_0->st_bandwidth) FUNC_0(VAR_0->st_bandwidth);
    if(VAR_0->st_packets) FUNC_0(VAR_0->st_packets);
    if(VAR_0->st_errors) FUNC_0(VAR_0->st_errors);
    if(VAR_0->st_drops) FUNC_0(VAR_0->st_drops);
    if(VAR_0->st_fifo) FUNC_0(VAR_0->st_fifo);
    if(VAR_0->st_compressed) FUNC_0(VAR_0->st_compressed);
    if(VAR_0->st_events) FUNC_0(VAR_0->st_events);

    VAR_0->st_bandwidth = ((void*)0);
    VAR_0->st_compressed = ((void*)0);
    VAR_0->st_drops = ((void*)0);
    VAR_0->st_errors = ((void*)0);
    VAR_0->st_events = ((void*)0);
    VAR_0->st_fifo = ((void*)0);
    VAR_0->st_packets = ((void*)0);

    VAR_0->rd_rbytes = ((void*)0);
    VAR_0->rd_rpackets = ((void*)0);
    VAR_0->rd_rerrors = ((void*)0);
    VAR_0->rd_rdrops = ((void*)0);
    VAR_0->rd_rfifo = ((void*)0);
    VAR_0->rd_rframe = ((void*)0);
    VAR_0->rd_rcompressed = ((void*)0);
    VAR_0->rd_rmulticast = ((void*)0);

    VAR_0->rd_tbytes = ((void*)0);
    VAR_0->rd_tpackets = ((void*)0);
    VAR_0->rd_terrors = ((void*)0);
    VAR_0->rd_tdrops = ((void*)0);
    VAR_0->rd_tfifo = ((void*)0);
    VAR_0->rd_tcollisions = ((void*)0);
    VAR_0->rd_tcarrier = ((void*)0);
    VAR_0->rd_tcompressed = ((void*)0);
}
