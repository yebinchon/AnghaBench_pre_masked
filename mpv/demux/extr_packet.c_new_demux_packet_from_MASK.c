
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct demux_packet {int dummy; } ;
struct TYPE_3__ {void* data; size_t size; } ;
typedef TYPE_1__ AVPacket ;


 size_t VAR_0 ;
 struct demux_packet* FUNC_0 (TYPE_1__*) ;

struct demux_packet *FUNC_1(void *VAR_1, size_t VAR_2)
{
    if (VAR_2 > VAR_0)
        return ((void*)0);
    AVPacket VAR_3 = { .data = VAR_1, .size = VAR_2 };
    return FUNC_0(&VAR_3);
}
