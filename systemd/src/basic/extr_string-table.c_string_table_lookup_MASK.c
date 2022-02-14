
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 scalar_t__ FUNC_0 (char const* const,char const*) ;

ssize_t FUNC_1(const char * const *VAR_0, size_t VAR_1, const char *VAR_2) {
        size_t VAR_3;

        if (!VAR_2)
                return -1;

        for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3)
                if (FUNC_0(VAR_0[VAR_3], VAR_2))
                        return (ssize_t) VAR_3;

        return -1;
}
