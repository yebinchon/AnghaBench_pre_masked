
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;

__attribute__((used)) static inline bool
FUNC_1(const unsigned char *VAR_0)
{
    unsigned char VAR_1;
    while ((VAR_1 = *VAR_0++))
    {
        if (FUNC_0(VAR_1))
        {
            return 1;
        }
    }
    return 0;
}
