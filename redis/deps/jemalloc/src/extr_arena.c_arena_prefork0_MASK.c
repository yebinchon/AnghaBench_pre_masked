
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tsdn_t ;
struct TYPE_6__ {int mtx; } ;
struct TYPE_5__ {int mtx; } ;
struct TYPE_7__ {TYPE_2__ decay_muzzy; TYPE_1__ decay_dirty; } ;
typedef TYPE_3__ arena_t ;


 int FUNC_0 (int *,int *) ;

void
FUNC_1(tsdn_t *VAR_0, arena_t *VAR_1) {
 FUNC_0(VAR_0, &VAR_1->decay_dirty.mtx);
 FUNC_0(VAR_0, &VAR_1->decay_muzzy.mtx);
}
