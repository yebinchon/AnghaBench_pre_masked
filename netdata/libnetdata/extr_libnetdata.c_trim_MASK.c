
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ssize_t ;


 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char*) ;

char *FUNC_2(char *VAR_0) {

    while (*VAR_0 && FUNC_0(*VAR_0)) VAR_0++;
    if (!*VAR_0) return ((void*)0);



    ssize_t VAR_1 = FUNC_1(VAR_0);
    if (--VAR_1 >= 0) {
        char *VAR_2 = VAR_0 + VAR_1;
        while (VAR_2 > VAR_0 && FUNC_0(*VAR_2)) VAR_2--;
        *++VAR_2 = '\0';
    }

    if (!*VAR_0) return ((void*)0);

    return VAR_0;
}
