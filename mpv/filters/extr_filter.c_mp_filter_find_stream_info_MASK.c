
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_stream_info {int dummy; } ;
struct mp_filter {TYPE_1__* in; struct mp_stream_info* stream_info; } ;
struct TYPE_2__ {struct mp_filter* parent; } ;



struct mp_stream_info *FUNC_0(struct mp_filter *VAR_0)
{
    while (VAR_0) {
        if (VAR_0->stream_info)
            return VAR_0->stream_info;
        VAR_0 = VAR_0->in->parent;
    }
    return ((void*)0);
}
