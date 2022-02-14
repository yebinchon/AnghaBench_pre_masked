
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * storage; scalar_t__ alloc; } ;
typedef int TIM_SORT_RUN_T ;
typedef TYPE_1__ TEMP_STORAGE_T ;
typedef int SORT_TYPE ;


 int FUNC_0 (int *,size_t const) ;
 int FUNC_1 (int *,size_t) ;
 int FUNC_2 (int *,size_t const,TYPE_1__*,size_t,int *,size_t*,size_t*) ;
 size_t FUNC_3 (int *,int *,size_t,TYPE_1__*,size_t const) ;
 int VAR_0 ;
 size_t FUNC_4 (size_t const) ;

void FUNC_5(SORT_TYPE *VAR_1, const size_t VAR_2) {
  size_t VAR_3;
  TEMP_STORAGE_T VAR_4, *VAR_5;
  TIM_SORT_RUN_T VAR_6[VAR_0];
  size_t VAR_7 = 0;
  size_t VAR_8 = 0;


  if (VAR_2 <= 1) {
    return;
  }

  if (VAR_2 < 64) {
    FUNC_0(VAR_1, VAR_2);
    return;
  }


  VAR_3 = FUNC_4(VAR_2);

  VAR_5 = &VAR_4;
  VAR_5->alloc = 0;
  VAR_5->storage = ((void*)0);

  if (!FUNC_2(VAR_1, VAR_2, VAR_5, VAR_3, VAR_6, &VAR_7, &VAR_8)) {
    return;
  }

  if (!FUNC_2(VAR_1, VAR_2, VAR_5, VAR_3, VAR_6, &VAR_7, &VAR_8)) {
    return;
  }

  if (!FUNC_2(VAR_1, VAR_2, VAR_5, VAR_3, VAR_6, &VAR_7, &VAR_8)) {
    return;
  }

  while (1) {
    if (!FUNC_1(VAR_6, VAR_7)) {
      VAR_7 = FUNC_3(VAR_1, VAR_6, VAR_7, VAR_5, VAR_2);
      continue;
    }

    if (!FUNC_2(VAR_1, VAR_2, VAR_5, VAR_3, VAR_6, &VAR_7, &VAR_8)) {
      return;
    }
  }
}
