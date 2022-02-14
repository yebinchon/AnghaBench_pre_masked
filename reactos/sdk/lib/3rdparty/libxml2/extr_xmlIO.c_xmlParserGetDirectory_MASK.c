
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;
 int * FUNC_1 (char*,int) ;
 size_t FUNC_2 (char*) ;
 int FUNC_3 (char*,char const*,int) ;
 scalar_t__ VAR_0 ;
 char* FUNC_4 (char*) ;
 int FUNC_5 () ;

char *
FUNC_6(const char *VAR_1) {
    char *VAR_2 = ((void*)0);
    char VAR_3[1024];
    char *VAR_4;





    if (VAR_0 == 0)
 FUNC_5();

    if (VAR_1 == ((void*)0)) return(((void*)0));







    FUNC_3(VAR_3, VAR_1, 1023);
    VAR_3[1023] = 0;
    VAR_4 = &VAR_3[FUNC_2(VAR_3)];
    while (VAR_4 > VAR_3) {
         if (*VAR_4=='/') break;
  VAR_4 --;
    }
    if (*VAR_4=='/') {
        if (VAR_4 == VAR_3) VAR_3[1] = 0;
 else *VAR_4 = 0;
 VAR_2 = FUNC_4(VAR_3);
    } else {
        if (FUNC_1(VAR_3, 1024) != ((void*)0)) {
     VAR_3[1023] = 0;
     VAR_2 = FUNC_4(VAR_3);
 }
    }
    return(VAR_2);

}
