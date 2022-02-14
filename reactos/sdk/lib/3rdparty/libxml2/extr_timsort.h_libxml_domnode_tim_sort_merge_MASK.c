
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * storage; } ;
struct TYPE_6__ {size_t length; size_t start; } ;
typedef TYPE_1__ TIM_SORT_RUN_T ;
typedef TYPE_2__ TEMP_STORAGE_T ;
typedef int SORT_TYPE ;


 int FUNC_0 (size_t const,size_t const) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (int *,int *,size_t const) ;

__attribute__((used)) static void FUNC_4(SORT_TYPE *VAR_0, const TIM_SORT_RUN_T *VAR_1, const int VAR_2,
                           TEMP_STORAGE_T *VAR_3) {
  const size_t VAR_4 = VAR_1[VAR_2 - 2].length;
  const size_t VAR_5 = VAR_1[VAR_2 - 1].length;
  const size_t VAR_6 = VAR_1[VAR_2 - 2].start;
  SORT_TYPE *VAR_7;
  size_t VAR_8, VAR_9, VAR_10;
  FUNC_2(VAR_3, FUNC_0(VAR_4, VAR_5));
  VAR_7 = VAR_3->storage;


  if (VAR_4 < VAR_5) {
    FUNC_3(VAR_7, &VAR_0[VAR_6], VAR_4 * sizeof(SORT_TYPE));
    VAR_8 = 0;
    VAR_9 = VAR_6 + VAR_4;

    for (VAR_10 = VAR_6; VAR_10 < VAR_6 + VAR_4 + VAR_5; VAR_10++) {
      if ((VAR_8 < VAR_4) && (VAR_9 < VAR_6 + VAR_4 + VAR_5)) {
        if (FUNC_1(VAR_7[VAR_8], VAR_0[VAR_9]) <= 0) {
          VAR_0[VAR_10] = VAR_7[VAR_8++];
        } else {
          VAR_0[VAR_10] = VAR_0[VAR_9++];
        }
      } else if (VAR_8 < VAR_4) {
        VAR_0[VAR_10] = VAR_7[VAR_8++];
      } else {
        break;
      }
    }
  } else {

    FUNC_3(VAR_7, &VAR_0[VAR_6 + VAR_4], VAR_5 * sizeof(SORT_TYPE));
    VAR_8 = VAR_5;
    VAR_9 = VAR_6 + VAR_4;
    VAR_10 = VAR_6 + VAR_4 + VAR_5;

    while (VAR_10-- > VAR_6) {
      if ((VAR_8 > 0) && (VAR_9 > VAR_6)) {
        if (FUNC_1(VAR_0[VAR_9 - 1], VAR_7[VAR_8 - 1]) > 0) {
          VAR_0[VAR_10] = VAR_0[--VAR_9];
        } else {
          VAR_0[VAR_10] = VAR_7[--VAR_8];
        }
      } else if (VAR_8 > 0) {
        VAR_0[VAR_10] = VAR_7[--VAR_8];
      } else {
        break;
      }
    }
  }
}
