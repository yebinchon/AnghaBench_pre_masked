
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int extent_t ;
struct TYPE_3__ {int slabs_full; } ;
typedef TYPE_1__ bin_t ;
typedef int arena_t ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(arena_t *VAR_0, bin_t *VAR_1, extent_t *VAR_2) {
 FUNC_1(FUNC_3(VAR_2) == 0);





 if (FUNC_0(VAR_0)) {
  return;
 }
 FUNC_2(&VAR_1->slabs_full, VAR_2);
}
