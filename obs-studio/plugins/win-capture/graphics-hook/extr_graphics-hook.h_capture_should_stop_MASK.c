
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static inline bool FUNC_4(void)
{
 bool VAR_0 = 0;

 if (FUNC_0()) {
  static uint64_t VAR_1 = 0;
  uint64_t VAR_2 = FUNC_3();
  bool VAR_3 = 1;

  if (VAR_2 - VAR_1 > 5000000000) {
   VAR_3 = FUNC_1();
   VAR_1 = VAR_2;
  }

  VAR_0 = FUNC_2() || !VAR_3;
 }

 return VAR_0;
}
