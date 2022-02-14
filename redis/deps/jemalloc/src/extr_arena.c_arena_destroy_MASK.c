
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int tsd_t ;
struct TYPE_5__ {int base; int extents_muzzy; int extents_dirty; } ;
typedef TYPE_1__ arena_t ;


 int FUNC_0 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (scalar_t__,int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_7 (int *) ;

void
FUNC_8(tsd_t *VAR_1, arena_t *VAR_2) {
 FUNC_3(FUNC_5(VAR_2->base) >= VAR_0);
 FUNC_3(FUNC_1(VAR_2, 0) == 0);
 FUNC_3(FUNC_1(VAR_2, 1) == 0);






 FUNC_3(FUNC_6(&VAR_2->extents_dirty) == 0);
 FUNC_3(FUNC_6(&VAR_2->extents_muzzy) == 0);


 FUNC_0(FUNC_7(VAR_1), VAR_2);
 FUNC_2(FUNC_5(VAR_2->base), ((void*)0));





 FUNC_4(FUNC_7(VAR_1), VAR_2->base);
}
