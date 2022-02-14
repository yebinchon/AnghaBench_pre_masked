
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (unsigned long) ;

__attribute__((used)) static inline bool FUNC_1(const void *VAR_2)
{
 if (VAR_2 >= (void *)VAR_1 && VAR_2 < (void *)VAR_0)
  return 1;
 if (FUNC_0((unsigned long)VAR_2))
  return 1;
 return 0;
}
