
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* xmlNodePtr ;
typedef int xmlDocPtr ;
struct TYPE_4__ {scalar_t__ type; struct TYPE_4__* next; int doc; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;

void
FUNC_1(xmlNodePtr VAR_1, xmlDocPtr VAR_2) {
    xmlNodePtr VAR_3;

    if ((VAR_1 == ((void*)0)) || (VAR_1->type == VAR_0))
 return;
    VAR_3 = VAR_1;
    while (VAR_3 != ((void*)0)) {
 if (VAR_3->doc != VAR_2)
     FUNC_0(VAR_3, VAR_2);
 VAR_3 = VAR_3->next;
    }
}
