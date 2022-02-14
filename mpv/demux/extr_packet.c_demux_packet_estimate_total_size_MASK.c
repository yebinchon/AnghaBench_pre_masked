
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct demux_packet {int len; TYPE_2__* avpacket; int is_cached; } ;
struct TYPE_4__ {int side_data_elems; TYPE_1__* side_data; } ;
struct TYPE_3__ {int size; } ;
typedef int AVPacket ;
typedef int AVBufferRef ;


 size_t FUNC_0 (int) ;
 int FUNC_1 (int) ;

size_t FUNC_2(struct demux_packet *VAR_0)
{
    size_t VAR_1 = FUNC_0(sizeof(struct demux_packet));
    VAR_1 += 8 * sizeof(void *);
    VAR_1 += 10 * sizeof(void *);
    if (VAR_0->avpacket) {
        FUNC_1(!VAR_0->is_cached);
        VAR_1 += FUNC_0(VAR_0->len);
        VAR_1 += FUNC_0(sizeof(AVPacket));
        VAR_1 += 8 * sizeof(void *);
        VAR_1 += FUNC_0(sizeof(AVBufferRef));
        VAR_1 += FUNC_0(64);
        VAR_1 += FUNC_0(VAR_0->avpacket->side_data_elems *
                            sizeof(VAR_0->avpacket->side_data[0]));
        for (int VAR_2 = 0; VAR_2 < VAR_0->avpacket->side_data_elems; VAR_2++)
            VAR_1 += FUNC_0(VAR_0->avpacket->side_data[VAR_2].size);
    }
    return VAR_1;
}
