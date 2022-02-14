
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*) ;

char *
FUNC_4(const char *VAR_0, int VAR_1, char *VAR_2) {
    char *VAR_3, *VAR_4;
    const char *VAR_5;

    if (VAR_0 == ((void*)0))
 return(((void*)0));
    if (VAR_1 <= 0) VAR_1 = FUNC_1(VAR_0);
    if (VAR_1 < 0) return(((void*)0));

    if (VAR_2 == ((void*)0)) {
 VAR_3 = (char *) FUNC_2(VAR_1 + 1);
 if (VAR_3 == ((void*)0)) {
            FUNC_3("unescaping URI value\n");
     return(((void*)0));
 }
    } else
 VAR_3 = VAR_2;
    VAR_5 = VAR_0;
    VAR_4 = VAR_3;
    while(VAR_1 > 0) {
 if ((VAR_1 > 2) && (*VAR_5 == '%') && (FUNC_0(VAR_5[1])) && (FUNC_0(VAR_5[2]))) {
     VAR_5++;
     if ((*VAR_5 >= '0') && (*VAR_5 <= '9'))
         *VAR_4 = (*VAR_5 - '0');
     else if ((*VAR_5 >= 'a') && (*VAR_5 <= 'f'))
         *VAR_4 = (*VAR_5 - 'a') + 10;
     else if ((*VAR_5 >= 'A') && (*VAR_5 <= 'F'))
         *VAR_4 = (*VAR_5 - 'A') + 10;
     VAR_5++;
     if ((*VAR_5 >= '0') && (*VAR_5 <= '9'))
         *VAR_4 = *VAR_4 * 16 + (*VAR_5 - '0');
     else if ((*VAR_5 >= 'a') && (*VAR_5 <= 'f'))
         *VAR_4 = *VAR_4 * 16 + (*VAR_5 - 'a') + 10;
     else if ((*VAR_5 >= 'A') && (*VAR_5 <= 'F'))
         *VAR_4 = *VAR_4 * 16 + (*VAR_5 - 'A') + 10;
     VAR_5++;
     VAR_1 -= 3;
     VAR_4++;
 } else {
     *VAR_4++ = *VAR_5++;
     VAR_1--;
 }
    }
    *VAR_4 = 0;
    return(VAR_3);
}
