
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t szind_t ;
typedef int extent_t ;
struct TYPE_3__ {scalar_t__ allocated; scalar_t__ resident; scalar_t__ mapped; scalar_t__ n_thp; scalar_t__ auto_thp_switched; int * avail; } ;
typedef TYPE_1__ base_t ;


 int FUNC_0 (uintptr_t) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (uintptr_t) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ VAR_3 ;
 size_t FUNC_6 (scalar_t__) ;

__attribute__((used)) static void
FUNC_7(base_t *VAR_4, extent_t *VAR_5, size_t VAR_6,
    void *VAR_7, size_t VAR_8) {
 if (FUNC_3(VAR_5) > 0) {




  szind_t VAR_9 =
      FUNC_6(FUNC_3(VAR_5) + 1) - 1;
  FUNC_4(&VAR_4->avail[VAR_9], VAR_5);
 }

 if (VAR_1) {
  VAR_4->allocated += VAR_8;





  VAR_4->resident += FUNC_1((uintptr_t)VAR_7 + VAR_8) -
      FUNC_1((uintptr_t)VAR_7 - VAR_6);
  FUNC_2(VAR_4->allocated <= VAR_4->resident);
  FUNC_2(VAR_4->resident <= VAR_4->mapped);
  if (FUNC_5() && (VAR_3 ==
      VAR_2 || VAR_4->auto_thp_switched)) {
   VAR_4->n_thp += (FUNC_0((uintptr_t)VAR_7 + VAR_8)
       - FUNC_0((uintptr_t)VAR_7 - VAR_6)) >>
       VAR_0;
   FUNC_2(VAR_4->mapped >= VAR_4->n_thp << VAR_0);
  }
 }
}
