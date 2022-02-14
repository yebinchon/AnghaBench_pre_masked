
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ interval_t ;



__attribute__((used)) static inline void
FUNC_0(interval_t *VAR_0, interval_t VAR_1)
{
    if (VAR_1 < *VAR_0)
    {
        *VAR_0 = VAR_1;
    }
    if (*VAR_0 < 0)
    {
        *VAR_0 = 0;
    }
}
