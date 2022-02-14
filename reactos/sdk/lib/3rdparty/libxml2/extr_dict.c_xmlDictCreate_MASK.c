
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* xmlDictPtr ;
typedef int xmlDictEntry ;
typedef int xmlDict ;
struct TYPE_4__ {int ref_counter; int size; scalar_t__ seed; void* dict; int * subdict; int * strings; scalar_t__ nbElems; scalar_t__ limit; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (void*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (TYPE_1__*) ;
 void* FUNC_5 (int) ;

xmlDictPtr
FUNC_6(void) {
    xmlDictPtr VAR_3;

    if (!VAR_2)
        if (!FUNC_0())
            return(((void*)0));





    VAR_3 = FUNC_5(sizeof(xmlDict));
    if (VAR_3) {
        VAR_3->ref_counter = 1;
        VAR_3->limit = 0;

        VAR_3->size = VAR_0;
 VAR_3->nbElems = 0;
        VAR_3->dict = FUNC_5(VAR_0 * sizeof(xmlDictEntry));
 VAR_3->strings = ((void*)0);
 VAR_3->subdict = ((void*)0);
        if (VAR_3->dict) {
     FUNC_3(VAR_3->dict, 0, VAR_0 * sizeof(xmlDictEntry));



            VAR_3->seed = 0;

     return(VAR_3);
        }
        FUNC_4(VAR_3);
    }
    return(((void*)0));
}
