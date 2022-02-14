
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;


 int FUNC_0 (char const*,int *,int) ;

__attribute__((used)) static inline int64_t FUNC_1(const char *VAR_0)
{
 if (!VAR_0 || !*VAR_0)
  return 0;

 if (VAR_0[0] == '0' && VAR_0[1] == 'x')
  return FUNC_0(VAR_0 + 2, ((void*)0), 16);
 else
  return FUNC_0(VAR_0, ((void*)0), 10);
}
