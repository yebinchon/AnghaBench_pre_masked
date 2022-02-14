
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tsdn_t ;
typedef int extent_t ;
struct TYPE_3__ {int extent_avail_mtx; int extent_avail; int base; } ;
typedef TYPE_1__ arena_t ;


 int * FUNC_0 (int *,int ) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *) ;

extent_t *
FUNC_5(tsdn_t *VAR_0, arena_t *VAR_1) {
 FUNC_3(VAR_0, &VAR_1->extent_avail_mtx);
 extent_t *VAR_2 = FUNC_1(&VAR_1->extent_avail);
 if (VAR_2 == ((void*)0)) {
  FUNC_4(VAR_0, &VAR_1->extent_avail_mtx);
  return FUNC_0(VAR_0, VAR_1->base);
 }
 FUNC_2(&VAR_1->extent_avail, VAR_2);
 FUNC_4(VAR_0, &VAR_1->extent_avail_mtx);
 return VAR_2;
}
