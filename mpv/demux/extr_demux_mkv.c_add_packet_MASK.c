
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct sh_stream {int index; } ;
struct demuxer {TYPE_1__* priv; } ;
struct demux_packet {int stream; } ;
struct TYPE_3__ {int num_packets; int packets; } ;
typedef TYPE_1__ mkv_demuxer_t ;


 int FUNC_0 (TYPE_1__*,int ,int ,struct demux_packet*) ;

__attribute__((used)) static void FUNC_1(struct demuxer *VAR_0, struct sh_stream *VAR_1,
                       struct demux_packet *VAR_2)
{
    mkv_demuxer_t *VAR_3 = VAR_0->priv;
    if (!VAR_2)
        return;

    VAR_2->stream = VAR_1->index;
    FUNC_0(VAR_3, VAR_3->packets, VAR_3->num_packets, VAR_2);
}
