
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ucs2_char_t ;



int
FUNC_0(const ucs2_char_t *VAR_0, const ucs2_char_t *VAR_1, size_t VAR_2)
{
        while (1) {
                if (VAR_2 == 0)
                        return 0;
                if (*VAR_0 < *VAR_1)
                        return -1;
                if (*VAR_0 > *VAR_1)
                        return 1;
                if (*VAR_0 == 0)
                        return 0;
                VAR_0++;
                VAR_1++;
                VAR_2--;
        }
}
