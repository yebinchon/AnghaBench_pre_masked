
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sd_header {size_t data_len; scalar_t__ num_sd; int len; int av_type; int av_flags; } ;
typedef struct sd_header uint8_t ;
typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct pkt_header {size_t data_len; scalar_t__ num_sd; int len; int av_type; int av_flags; } ;
struct demux_packet {int len; TYPE_1__* avpacket; struct sd_header* buffer; } ;
struct demux_cache {int dummy; } ;
typedef int sd_hd ;
typedef int hd ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 struct sd_header* FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (struct demux_cache*,int ) ;
 struct demux_packet* FUNC_2 (size_t) ;
 int FUNC_3 (struct demux_cache*,struct sd_header*,int) ;
 int FUNC_4 (struct demux_packet*) ;

struct demux_packet *FUNC_5(struct demux_cache *VAR_1, uint64_t VAR_2)
{
    if (!FUNC_1(VAR_1, VAR_2))
        return ((void*)0);

    struct pkt_header VAR_3;

    if (!FUNC_3(VAR_1, &VAR_3, sizeof(VAR_3)))
        return ((void*)0);

    if (VAR_3.data_len >= (size_t)-1)
        return ((void*)0);

    struct demux_packet *VAR_4 = FUNC_2(VAR_3.data_len);
    if (!VAR_4)
        goto fail;

    if (!FUNC_3(VAR_1, VAR_4->buffer, VAR_4->len))
        goto fail;

    VAR_4->avpacket->flags = VAR_3.av_flags;

    for (uint32_t VAR_5 = 0; VAR_5 < VAR_3.num_sd; VAR_5++) {
        struct sd_header VAR_6;

        if (!FUNC_3(VAR_1, &VAR_6, sizeof(VAR_6)))
            goto fail;

        if (VAR_6.len > VAR_0)
            goto fail;

        uint8_t *VAR_7 = FUNC_0(VAR_4->avpacket, VAR_6.av_type,
                                              VAR_6.len);
        if (!VAR_7)
            goto fail;

        if (!FUNC_3(VAR_1, VAR_7, VAR_6.len))
            goto fail;
    }

    return VAR_4;

fail:
    FUNC_4(VAR_4);
    return ((void*)0);
}
