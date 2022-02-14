
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xmlURIPtr ;
typedef int xmlChar ;
typedef int FILE ;


 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;

void
FUNC_3(FILE *VAR_0, xmlURIPtr VAR_1) {
    xmlChar *VAR_2;

    VAR_2 = FUNC_2(VAR_1);
    if (VAR_2 != ((void*)0)) {
 FUNC_0(VAR_0, "%s", (char *) VAR_2);
 FUNC_1(VAR_2);
    }
}
