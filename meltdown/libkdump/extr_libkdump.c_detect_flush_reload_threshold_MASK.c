
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_2__ {size_t cache_miss_threshold; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (int ,char*,size_t,...) ;
 int FUNC_1 (size_t*) ;
 int FUNC_2 (size_t*) ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static void FUNC_4() {
  size_t VAR_3 = 0, VAR_4 = 0, VAR_5, VAR_6 = 1000000;
  size_t VAR_7[16];
  size_t *VAR_8 = VAR_7 + 8;
  uint64_t VAR_9 = 0, VAR_10 = 0;

  FUNC_2(VAR_8);
  for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
    VAR_9 = FUNC_3();
    FUNC_2(VAR_8);
    VAR_10 = FUNC_3();
    VAR_3 += (VAR_10 - VAR_9);
  }
  for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++) {
    VAR_9 = FUNC_3();
    FUNC_2(VAR_8);
    VAR_10 = FUNC_3();
    FUNC_1(VAR_8);
    VAR_4 += (VAR_10 - VAR_9);
  }
  VAR_3 /= VAR_6;
  VAR_4 /= VAR_6;

  FUNC_0(VAR_0, "Flush+Reload: %zd cycles, Reload only: %zd cycles\n",
        VAR_4, VAR_3);
  VAR_2.cache_miss_threshold = (VAR_4 + VAR_3 * 2) / 3;
  FUNC_0(VAR_1, "Flush+Reload threshold: %zd cycles\n",
        VAR_2.cache_miss_threshold);
}
