
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char const*,int) ;

__attribute__((used)) static inline bool FUNC_3(const char *VAR_0, int VAR_1)
{
 if (FUNC_0()) {
  FUNC_2("Python failure in %s:%d:", VAR_0, VAR_1);
  FUNC_1();
  return 1;
 }
 return 0;
}
