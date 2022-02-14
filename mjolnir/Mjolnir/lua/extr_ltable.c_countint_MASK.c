
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TValue ;


 unsigned int FUNC_0 (int const*) ;
 size_t FUNC_1 (unsigned int) ;

__attribute__((used)) static int FUNC_2 (const TValue *VAR_0, unsigned int *VAR_1) {
  unsigned int VAR_2 = FUNC_0(VAR_0);
  if (VAR_2 != 0) {
    VAR_1[FUNC_1(VAR_2)]++;
    return 1;
  }
  else
    return 0;
}
