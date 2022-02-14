
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (char const*,int *,int) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0) {
  unsigned long VAR_1 = (unsigned long) FUNC_0();
  unsigned long VAR_2 = (unsigned long) FUNC_1(VAR_0, ((void*)0), 16);
  return (VAR_1 >= VAR_2) && (VAR_1 - VAR_2 < 60 * 60);
}
