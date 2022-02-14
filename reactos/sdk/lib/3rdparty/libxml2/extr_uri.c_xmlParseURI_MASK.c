
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * xmlURIPtr ;


 int * FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char const*) ;

xmlURIPtr
FUNC_3(const char *VAR_0) {
    xmlURIPtr VAR_1;
    int VAR_2;

    if (VAR_0 == ((void*)0))
 return(((void*)0));
    VAR_1 = FUNC_0();
    if (VAR_1 != ((void*)0)) {
 VAR_2 = FUNC_2(VAR_1, VAR_0);
        if (VAR_2) {
     FUNC_1(VAR_1);
     return(((void*)0));
 }
    }
    return(VAR_1);
}
