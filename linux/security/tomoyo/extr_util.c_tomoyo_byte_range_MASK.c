
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static inline bool FUNC_0(const char *VAR_0)
{
 return *VAR_0 >= '0' && *VAR_0++ <= '3' &&
  *VAR_0 >= '0' && *VAR_0++ <= '7' &&
  *VAR_0 >= '0' && *VAR_0 <= '7';
}
