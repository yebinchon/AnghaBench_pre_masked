
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mkv_demuxer {scalar_t__ num_packets; struct demux_packet** packets; } ;
struct demuxer {struct mkv_demuxer* priv; } ;
struct demux_packet {int dummy; } ;
struct block_info {int dummy; } ;


 int FUNC_0 (struct demux_packet**,scalar_t__,int ) ;
 int FUNC_1 (struct block_info*) ;
 int FUNC_2 (struct demuxer*,struct block_info*) ;
 int FUNC_3 (struct demuxer*,struct block_info*) ;

__attribute__((used)) static bool FUNC_4(struct demuxer *VAR_0,
                                  struct demux_packet **VAR_1)
{
    struct mkv_demuxer *VAR_2 = VAR_0->priv;

    for (;;) {
        if (VAR_2->num_packets) {
            *VAR_1 = VAR_2->packets[0];
            FUNC_0(VAR_2->packets, VAR_2->num_packets, 0);
            return 1;
        }

        int VAR_3;
        struct block_info VAR_4;
        VAR_3 = FUNC_3(VAR_0, &VAR_4);
        if (VAR_3 < 0)
            return 0;
        if (VAR_3 > 0) {
            FUNC_2(VAR_0, &VAR_4);
            FUNC_1(&VAR_4);
        }
    }
}
