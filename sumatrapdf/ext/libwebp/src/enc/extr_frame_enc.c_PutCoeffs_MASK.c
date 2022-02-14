
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int first; int*** prob; int last; int* coeffs; } ;
typedef TYPE_1__ VP8Residual ;
typedef int VP8BitWriter ;


 int* VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;
 size_t* VAR_4 ;
 scalar_t__ FUNC_0 (int * const,int,int const) ;
 int FUNC_1 (int * const,int const) ;

__attribute__((used)) static int FUNC_2(VP8BitWriter* const VAR_5, int VAR_6, const VP8Residual* VAR_7) {
  int VAR_8 = VAR_7->first;

  const uint8_t* VAR_9 = VAR_7->prob[VAR_8][VAR_6];
  if (!FUNC_0(VAR_5, VAR_7->last >= 0, VAR_9[0])) {
    return 0;
  }

  while (VAR_8 < 16) {
    const int VAR_10 = VAR_7->coeffs[VAR_8++];
    const int VAR_11 = VAR_10 < 0;
    int VAR_12 = VAR_11 ? -VAR_10 : VAR_10;
    if (!FUNC_0(VAR_5, VAR_12 != 0, VAR_9[1])) {
      VAR_9 = VAR_7->prob[VAR_4[VAR_8]][0];
      continue;
    }
    if (!FUNC_0(VAR_5, VAR_12 > 1, VAR_9[2])) {
      VAR_9 = VAR_7->prob[VAR_4[VAR_8]][1];
    } else {
      if (!FUNC_0(VAR_5, VAR_12 > 4, VAR_9[3])) {
        if (FUNC_0(VAR_5, VAR_12 != 2, VAR_9[4])) {
          FUNC_0(VAR_5, VAR_12 == 4, VAR_9[5]);
        }
      } else if (!FUNC_0(VAR_5, VAR_12 > 10, VAR_9[6])) {
        if (!FUNC_0(VAR_5, VAR_12 > 6, VAR_9[7])) {
          FUNC_0(VAR_5, VAR_12 == 6, 159);
        } else {
          FUNC_0(VAR_5, VAR_12 >= 9, 165);
          FUNC_0(VAR_5, !(VAR_12 & 1), 145);
        }
      } else {
        int VAR_13;
        const uint8_t* VAR_14;
        if (VAR_12 < 3 + (8 << 1)) {
          FUNC_0(VAR_5, 0, VAR_9[8]);
          FUNC_0(VAR_5, 0, VAR_9[9]);
          VAR_12 -= 3 + (8 << 0);
          VAR_13 = 1 << 2;
          VAR_14 = VAR_0;
        } else if (VAR_12 < 3 + (8 << 2)) {
          FUNC_0(VAR_5, 0, VAR_9[8]);
          FUNC_0(VAR_5, 1, VAR_9[9]);
          VAR_12 -= 3 + (8 << 1);
          VAR_13 = 1 << 3;
          VAR_14 = VAR_1;
        } else if (VAR_12 < 3 + (8 << 3)) {
          FUNC_0(VAR_5, 1, VAR_9[8]);
          FUNC_0(VAR_5, 0, VAR_9[10]);
          VAR_12 -= 3 + (8 << 2);
          VAR_13 = 1 << 4;
          VAR_14 = VAR_2;
        } else {
          FUNC_0(VAR_5, 1, VAR_9[8]);
          FUNC_0(VAR_5, 1, VAR_9[10]);
          VAR_12 -= 3 + (8 << 3);
          VAR_13 = 1 << 10;
          VAR_14 = VAR_3;
        }
        while (VAR_13) {
          FUNC_0(VAR_5, !!(VAR_12 & VAR_13), *VAR_14++);
          VAR_13 >>= 1;
        }
      }
      VAR_9 = VAR_7->prob[VAR_4[VAR_8]][2];
    }
    FUNC_1(VAR_5, VAR_11);
    if (VAR_8 == 16 || !FUNC_0(VAR_5, VAR_8 <= VAR_7->last, VAR_9[0])) {
      return 1;
    }
  }
  return 1;
}
