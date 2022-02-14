
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* xmlNsPtr ;
struct TYPE_6__ {struct TYPE_6__* next; } ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;

xmlNsPtr
FUNC_1(xmlNsPtr VAR_0) {
    xmlNsPtr VAR_1 = ((void*)0);
    xmlNsPtr VAR_2 = ((void*)0),VAR_3;

    while (VAR_0 != ((void*)0)) {
        VAR_3 = FUNC_0(VAR_0);
 if (VAR_2 == ((void*)0)) {
     VAR_1 = VAR_2 = VAR_3;
 } else {
     VAR_2->next = VAR_3;
     VAR_2 = VAR_3;
 }
 VAR_0 = VAR_0->next;
    }
    return(VAR_1);
}
