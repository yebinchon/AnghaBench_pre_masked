
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int retries; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;

int __attribute__((optimize("-Os"), noinline)) FUNC_3() {
  size_t VAR_4 = VAR_2.retries + 1;
  uint64_t VAR_5 = 0, VAR_6 = 0;

  while (VAR_4--) {
    if (!FUNC_2(VAR_1)) {
      VAR_0;
    }

    int VAR_7;
    for (VAR_7 = 0; VAR_7 < 256; VAR_7++) {
      if (FUNC_0(VAR_3 + VAR_7 * 4096)) {
        if (VAR_7 >= 1) {
          return VAR_7;
        }
      }
      FUNC_1();
    }
    FUNC_1();
  }
  return 0;
}
