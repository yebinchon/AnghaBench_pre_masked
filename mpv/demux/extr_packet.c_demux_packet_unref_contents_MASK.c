
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demux_packet {scalar_t__ len; int * buffer; int * avpacket; int is_cached; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct demux_packet *VAR_0)
{
    if (VAR_0->avpacket) {
        FUNC_0(!VAR_0->is_cached);
        FUNC_1(VAR_0->avpacket);
        FUNC_2(VAR_0->avpacket);
        VAR_0->avpacket = ((void*)0);
        VAR_0->buffer = ((void*)0);
        VAR_0->len = 0;
    }
}
