
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demux_packet {int len; int buffer; scalar_t__ avpacket; } ;


 int FUNC_0 (struct demux_packet*,struct demux_packet*) ;
 struct demux_packet* FUNC_1 (int ,int ) ;
 struct demux_packet* FUNC_2 (scalar_t__) ;

struct demux_packet *FUNC_3(struct demux_packet *VAR_0)
{
    struct demux_packet *VAR_1 = ((void*)0);
    if (VAR_0->avpacket) {
        VAR_1 = FUNC_2(VAR_0->avpacket);
    } else {

        VAR_1 = FUNC_1(VAR_0->buffer, VAR_0->len);
    }
    if (!VAR_1)
        return ((void*)0);
    FUNC_0(VAR_1, VAR_0);
    return VAR_1;
}
