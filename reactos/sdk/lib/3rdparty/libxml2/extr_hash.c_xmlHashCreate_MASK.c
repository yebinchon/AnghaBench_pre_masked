
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* xmlHashTablePtr ;
typedef int xmlHashTable ;
typedef int xmlHashEntry ;
struct TYPE_4__ {int size; int random_seed; void* table; scalar_t__ nbElems; int * dict; } ;


 int FUNC_0 () ;
 int FUNC_1 (void*,int ,int) ;
 int FUNC_2 (TYPE_1__*) ;
 void* FUNC_3 (int) ;

xmlHashTablePtr
FUNC_4(int VAR_0) {
    xmlHashTablePtr VAR_1;

    if (VAR_0 <= 0)
        VAR_0 = 256;

    VAR_1 = FUNC_3(sizeof(xmlHashTable));
    if (VAR_1) {
        VAR_1->dict = ((void*)0);
        VAR_1->size = VAR_0;
 VAR_1->nbElems = 0;
        VAR_1->table = FUNC_3(VAR_0 * sizeof(xmlHashEntry));
        if (VAR_1->table) {
     FUNC_1(VAR_1->table, 0, VAR_0 * sizeof(xmlHashEntry));



     return(VAR_1);
        }
        FUNC_2(VAR_1);
    }
    return(((void*)0));
}
