
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct demux_packet {int dummy; } ;
struct AVBufferRef {int data; int size; } ;
struct TYPE_3__ {struct AVBufferRef* buf; int data; int size; } ;
typedef TYPE_1__ AVPacket ;


 struct demux_packet* FUNC_0 (TYPE_1__*) ;

struct demux_packet *FUNC_1(struct AVBufferRef *VAR_0)
{
    if (!VAR_0)
        return ((void*)0);
    AVPacket VAR_1 = {
        .size = VAR_0->size,
        .data = VAR_0->data,
        .buf = VAR_0,
    };
    return FUNC_0(&VAR_1);
}
