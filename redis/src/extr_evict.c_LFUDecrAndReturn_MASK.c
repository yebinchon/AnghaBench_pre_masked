
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lru; } ;
typedef TYPE_1__ robj ;
struct TYPE_5__ {int lfu_decay_time; } ;


 unsigned long FUNC_0 (unsigned long) ;
 TYPE_2__ VAR_0 ;

unsigned long FUNC_1(robj *VAR_1) {
    unsigned long VAR_2 = VAR_1->lru >> 8;
    unsigned long VAR_3 = VAR_1->lru & 255;
    unsigned long VAR_4 = VAR_0.lfu_decay_time ? FUNC_0(VAR_2) / VAR_0.lfu_decay_time : 0;
    if (VAR_4)
        VAR_3 = (VAR_4 > VAR_3) ? 0 : VAR_3 - VAR_4;
    return VAR_3;
}
