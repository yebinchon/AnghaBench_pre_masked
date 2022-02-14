
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char**) ;

char **FUNC_1(char **VAR_0, size_t VAR_1) {

        while (VAR_1 > 0) {
                if (FUNC_0(VAR_0))
                        return VAR_0;

                VAR_0++, VAR_1--;
        }

        return VAR_0;
}
