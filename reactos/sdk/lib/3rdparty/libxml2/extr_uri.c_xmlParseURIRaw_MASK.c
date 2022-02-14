
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* xmlURIPtr ;
struct TYPE_6__ {int cleanup; } ;


 TYPE_1__* FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,char const*) ;

xmlURIPtr
FUNC_3(const char *VAR_0, int VAR_1) {
    xmlURIPtr VAR_2;
    int VAR_3;

    if (VAR_0 == ((void*)0))
 return(((void*)0));
    VAR_2 = FUNC_0();
    if (VAR_2 != ((void*)0)) {
        if (VAR_1) {
     VAR_2->cleanup |= 2;
 }
 VAR_3 = FUNC_2(VAR_2, VAR_0);
        if (VAR_3) {
     FUNC_1(VAR_2);
     return(((void*)0));
 }
    }
    return(VAR_2);
}
