
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*) ;

char *FUNC_1(const char *VAR_0, size_t VAR_1) {
        size_t VAR_2;




        FUNC_0(VAR_0);

        for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
                if ((unsigned char) VAR_0[VAR_2] >= 128 || VAR_0[VAR_2] == 0)
                        return ((void*)0);

        return (char*) VAR_0;
}
