
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,size_t) ;

__attribute__((used)) static inline char *FUNC_1(const char *VAR_0, size_t VAR_1)
{
 char *VAR_2;
 if (!VAR_0)
  return ((void*)0);

 VAR_2 = (char *)FUNC_0(VAR_0, VAR_1 + 1);
 VAR_2[VAR_1] = 0;

 return VAR_2;
}
