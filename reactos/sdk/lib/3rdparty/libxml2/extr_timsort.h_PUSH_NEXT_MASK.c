
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int * storage; } ;
struct TYPE_7__ {size_t start; size_t length; } ;
typedef TYPE_1__ TIM_SORT_RUN_T ;
typedef TYPE_2__ TEMP_STORAGE_T ;
typedef int SORT_TYPE ;


 int FUNC_0 (int *,size_t,size_t) ;
 size_t FUNC_1 (int *,size_t,size_t const) ;
 int FUNC_2 (int *,TYPE_1__*,size_t,TYPE_2__*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static __inline int FUNC_4(SORT_TYPE *VAR_0,
                              const size_t VAR_1,
                              TEMP_STORAGE_T *VAR_2,
                              const size_t VAR_3,
                              TIM_SORT_RUN_T *VAR_4,
                              size_t *VAR_5,
                              size_t *VAR_6) {
  size_t VAR_7 = FUNC_1(VAR_0, *VAR_6, VAR_1);
  size_t VAR_8 = VAR_3;

  if (VAR_8 > VAR_1 - *VAR_6) {
    VAR_8 = VAR_1 - *VAR_6;
  }

  if (VAR_8 > VAR_7) {
    FUNC_0(&VAR_0[*VAR_6], VAR_7, VAR_8);
    VAR_7 = VAR_8;
  }

  VAR_4[*VAR_5].start = *VAR_6;
  VAR_4[*VAR_5].length = VAR_7;
  (*VAR_5)++;
  *VAR_6 += VAR_7;

  if (*VAR_6 == VAR_1) {

    while (*VAR_5 > 1) {
      FUNC_2(VAR_0, VAR_4, *VAR_5, VAR_2);
      VAR_4[*VAR_5 - 2].length += VAR_4[*VAR_5 - 1].length;
      (*VAR_5)--;
    }

    if (VAR_2->storage != ((void*)0)) {
      FUNC_3(VAR_2->storage);
      VAR_2->storage = ((void*)0);
    }

    return 0;
  }

  return 1;
}
