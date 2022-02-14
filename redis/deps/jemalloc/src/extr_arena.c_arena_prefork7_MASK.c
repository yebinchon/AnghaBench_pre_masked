
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tsdn_t ;
struct TYPE_3__ {int * bins; } ;
typedef TYPE_1__ arena_t ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *,int *) ;

void
FUNC_1(tsdn_t *VAR_1, arena_t *VAR_2) {
 for (unsigned VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  FUNC_0(VAR_1, &VAR_2->bins[VAR_3]);
 }
}
