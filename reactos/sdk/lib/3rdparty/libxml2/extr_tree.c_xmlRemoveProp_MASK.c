
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_2__* xmlAttrPtr ;
struct TYPE_6__ {struct TYPE_6__* next; struct TYPE_6__* prev; TYPE_1__* parent; } ;
struct TYPE_5__ {TYPE_2__* properties; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;

int
FUNC_2(xmlAttrPtr VAR_1) {
    xmlAttrPtr VAR_2;
    if (VAR_1 == ((void*)0)) {




 return(-1);
    }
    if (VAR_1->parent == ((void*)0)) {




 return(-1);
    }
    VAR_2 = VAR_1->parent->properties;
    if (VAR_2 == VAR_1) {
        VAR_1->parent->properties = VAR_1->next;
  if (VAR_1->next != ((void*)0))
   VAR_1->next->prev = ((void*)0);
 FUNC_0(VAR_1);
 return(0);
    }
    while (VAR_2 != ((void*)0)) {
 if (VAR_2->next == VAR_1) {
     VAR_2->next = VAR_1->next;
     if (VAR_2->next != ((void*)0))
  VAR_2->next->prev = VAR_2;
     FUNC_0(VAR_1);
     return(0);
 }
        VAR_2 = VAR_2->next;
    }




    return(-1);
}
