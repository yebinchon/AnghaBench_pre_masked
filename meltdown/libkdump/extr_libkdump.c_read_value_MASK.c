
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;

__attribute__((used)) static int __attribute__((always_inline)) FUNC_2() {
  int VAR_1, VAR_2 = 0;
  for (VAR_1 = 0; VAR_1 < 256; VAR_1++) {
    if (FUNC_0(VAR_0 + VAR_1 * 4096)) {
      VAR_2 = VAR_1 + 1;
    }
    FUNC_1();
  }
  return VAR_2 - 1;
}
