
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ms; scalar_t__ seq; } ;
typedef TYPE_1__ streamID ;



int FUNC_0(streamID *VAR_0, streamID *VAR_1) {
    if (VAR_0->ms > VAR_1->ms) return 1;
    else if (VAR_0->ms < VAR_1->ms) return -1;

    else if (VAR_0->seq > VAR_1->seq) return 1;
    else if (VAR_0->seq < VAR_1->seq) return -1;

    return 0;
}
