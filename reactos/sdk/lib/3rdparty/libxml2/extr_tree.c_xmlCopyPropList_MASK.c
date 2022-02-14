
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_1__* xmlNodePtr ;
typedef TYPE_2__* xmlAttrPtr ;
struct TYPE_10__ {struct TYPE_10__* next; struct TYPE_10__* prev; } ;
struct TYPE_9__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 (TYPE_1__*,TYPE_2__*) ;

xmlAttrPtr
FUNC_1(xmlNodePtr VAR_1, xmlAttrPtr VAR_2) {
    xmlAttrPtr VAR_3 = ((void*)0);
    xmlAttrPtr VAR_4 = ((void*)0),VAR_5;

    if ((VAR_1 != ((void*)0)) && (VAR_1->type != VAR_0))
        return(((void*)0));
    while (VAR_2 != ((void*)0)) {
        VAR_5 = FUNC_0(VAR_1, VAR_2);
 if (VAR_5 == ((void*)0))
     return(((void*)0));
 if (VAR_4 == ((void*)0)) {
     VAR_3 = VAR_4 = VAR_5;
 } else {
     VAR_4->next = VAR_5;
     VAR_5->prev = VAR_4;
     VAR_4 = VAR_5;
 }
 VAR_2 = VAR_2->next;
    }
    return(VAR_3);
}
