
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* xmlDictPtr ;
struct TYPE_6__ {struct TYPE_6__* subdict; int seed; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;

xmlDictPtr
FUNC_3(xmlDictPtr VAR_1) {
    xmlDictPtr VAR_2 = FUNC_1();

    if ((VAR_2 != ((void*)0)) && (VAR_1 != ((void*)0))) {



        VAR_2->seed = VAR_1->seed;
        VAR_2->subdict = VAR_1;
 FUNC_2(VAR_2->subdict);
    }
    return(VAR_2);
}
