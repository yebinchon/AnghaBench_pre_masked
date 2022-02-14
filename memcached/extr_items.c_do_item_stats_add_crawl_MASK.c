
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_2__ {int crawler_items_checked; int expired_unfetched; int crawler_reclaimed; } ;


 TYPE_1__* VAR_0 ;

void FUNC_0(const int VAR_1, const uint64_t VAR_2,
        const uint64_t VAR_3, const uint64_t VAR_4) {
    VAR_0[VAR_1].crawler_reclaimed += VAR_2;
    VAR_0[VAR_1].expired_unfetched += VAR_3;
    VAR_0[VAR_1].crawler_items_checked += VAR_4;
}
