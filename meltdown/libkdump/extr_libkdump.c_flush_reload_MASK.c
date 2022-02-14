
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_2__ {scalar_t__ cache_miss_threshold; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static int __attribute__((always_inline)) FUNC_3(void *VAR_1) {
  uint64_t VAR_2 = 0, VAR_3 = 0;

  VAR_2 = FUNC_2();
  FUNC_1(VAR_1);
  VAR_3 = FUNC_2();

  FUNC_0(VAR_1);

  if (VAR_3 - VAR_2 < VAR_0.cache_miss_threshold) {
    return 1;
  }
  return 0;
}
