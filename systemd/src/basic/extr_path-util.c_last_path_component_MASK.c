
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (char const*) ;

const char *FUNC_1(const char *VAR_0) {
        unsigned VAR_1, VAR_2;

        if (!VAR_0)
                return ((void*)0);

        VAR_1 = VAR_2 = FUNC_0(VAR_0);
        if (VAR_1 == 0)
                return VAR_0;

        while (VAR_2 > 0 && VAR_0[VAR_2-1] == '/')
                VAR_2--;

        if (VAR_2 == 0)
                return VAR_0 + VAR_1 - 1;

        while (VAR_2 > 0 && VAR_0[VAR_2-1] != '/')
                VAR_2--;

        return VAR_0 + VAR_2;
}
