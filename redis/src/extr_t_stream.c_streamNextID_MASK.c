
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_4__ {scalar_t__ ms; scalar_t__ seq; } ;
typedef TYPE_1__ streamID ;


 scalar_t__ FUNC_0 () ;

void FUNC_1(streamID *VAR_0, streamID *VAR_1) {
    uint64_t VAR_2 = FUNC_0();
    if (VAR_2 > VAR_0->ms) {
        VAR_1->ms = VAR_2;
        VAR_1->seq = 0;
    } else {
        VAR_1->ms = VAR_0->ms;
        VAR_1->seq = VAR_0->seq+1;
    }
}
