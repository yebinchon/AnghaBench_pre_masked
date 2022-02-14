
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char**,int,char*,int,void const*,size_t,int) ;

int FUNC_1(
                char **VAR_0, int VAR_1,
                const void *VAR_2, size_t VAR_3,
                int VAR_4, int VAR_5) {

        if (VAR_1 > VAR_5 / 2 || VAR_1 + VAR_4 > VAR_5)

                return FUNC_0(VAR_0, VAR_1, "\n", VAR_4, VAR_2, VAR_3, VAR_5 - VAR_4 - 1);
        else

                return FUNC_0(VAR_0, VAR_1, " ", VAR_1, VAR_2, VAR_3, VAR_5 - VAR_1 - 1);
}
