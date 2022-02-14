
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* xmlNodePtr ;
struct TYPE_6__ {TYPE_1__* children; } ;
typedef TYPE_2__ xmlDoc ;
struct TYPE_5__ {scalar_t__ type; struct TYPE_5__* next; } ;


 scalar_t__ VAR_0 ;

xmlNodePtr
FUNC_0(const xmlDoc *VAR_1) {
    xmlNodePtr VAR_2;

    if (VAR_1 == ((void*)0)) return(((void*)0));
    VAR_2 = VAR_1->children;
    while (VAR_2 != ((void*)0)) {
 if (VAR_2->type == VAR_0)
     return(VAR_2);
        VAR_2 = VAR_2->next;
    }
    return(VAR_2);
}
