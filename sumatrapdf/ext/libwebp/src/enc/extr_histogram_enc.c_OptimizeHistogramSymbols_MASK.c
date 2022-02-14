
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_3__ {int max_size; } ;
typedef TYPE_1__ VP8LHistogramSet ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int* const,int ,int) ;

__attribute__((used)) static void FUNC_2(const VP8LHistogramSet* const VAR_1,
                                     uint16_t* const VAR_2,
                                     int VAR_3,
                                     uint16_t* const VAR_4,
                                     uint16_t* const VAR_5) {
  int VAR_6, VAR_7;
  int VAR_8 = 1;

  while (VAR_8) {
    VAR_8 = 0;
    for (VAR_6 = 0; VAR_6 < VAR_3; ++VAR_6) {
      int VAR_9;
      VAR_9 = VAR_2[VAR_6];
      while (VAR_9 != VAR_2[VAR_9]) {
        VAR_2[VAR_9] = VAR_2[VAR_2[VAR_9]];
        VAR_9 = VAR_2[VAR_9];
      }
      if (VAR_9 != VAR_2[VAR_6]) {
        VAR_8 = 1;
        VAR_2[VAR_6] = VAR_9;
      }
    }
  }

  VAR_7 = 0;
  FUNC_1(VAR_4, 0,
         VAR_1->max_size * sizeof(*VAR_4));
  FUNC_0(VAR_2[0] == 0);

  for (VAR_6 = 0; VAR_6 < VAR_1->max_size; ++VAR_6) {
    int VAR_10;
    if (VAR_5[VAR_6] == VAR_0) continue;
    VAR_10 = VAR_2[VAR_5[VAR_6]];
    FUNC_0(VAR_5[VAR_6] < VAR_3);
    if (VAR_10 > 0 && VAR_4[VAR_10] == 0) {
      ++VAR_7;
      VAR_4[VAR_10] = VAR_7;
    }
    VAR_5[VAR_6] = VAR_4[VAR_10];
  }


  VAR_7 = 0;
  for (VAR_6 = 0; VAR_6 < VAR_1->max_size; ++VAR_6) {
    if (VAR_5[VAR_6] == VAR_0) continue;
    if (VAR_5[VAR_6] <= VAR_7) continue;
    ++VAR_7;
    FUNC_0(VAR_5[VAR_6] == VAR_7);
  }
}
