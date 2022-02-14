
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int res_stat ;
struct TYPE_2__ {int measurements; scalar_t__ fault_handling; char accept_after; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,int,char) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 size_t VAR_4 ;
 int FUNC_3 () ;

int __attribute__((optimize("-O0"))) FUNC_4(size_t VAR_5) {
  VAR_4 = VAR_5;

  char VAR_6[256];
  int VAR_7, VAR_8, VAR_9;
  for (VAR_7 = 0; VAR_7 < 256; VAR_7++)
    VAR_6[VAR_7] = 0;

  FUNC_3();

  for (VAR_7 = 0; VAR_7 < VAR_2.measurements; VAR_7++) {
    if (VAR_2.fault_handling == VAR_1) {
      VAR_9 = FUNC_2();
    } else {
      VAR_9 = FUNC_1();
    }
    VAR_6[VAR_9]++;
  }
  int VAR_10 = 0, VAR_11 = 0;

  if (VAR_3) {
    for (VAR_7 = 0; VAR_7 < sizeof(VAR_6); VAR_7++) {
      if (VAR_6[VAR_7] == 0)
        continue;
      FUNC_0(VAR_0, "res_stat[%x] = %d\n",
            VAR_7, VAR_6[VAR_7]);
    }
  }

  for (VAR_7 = 1; VAR_7 < 256; VAR_7++) {
    if (VAR_6[VAR_7] > VAR_10 && VAR_6[VAR_7] >= VAR_2.accept_after) {
      VAR_10 = VAR_6[VAR_7];
      VAR_11 = VAR_7;
    }
  }
  return VAR_11;
}
