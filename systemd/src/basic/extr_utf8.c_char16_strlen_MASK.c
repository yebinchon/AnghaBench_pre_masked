
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ char16_t ;


 int FUNC_0 (scalar_t__ const*) ;

size_t FUNC_1(const char16_t *VAR_0) {
        size_t VAR_1 = 0;

        FUNC_0(VAR_0);

        while (*VAR_0 != 0)
                VAR_1++, VAR_0++;

        return VAR_1;
}
