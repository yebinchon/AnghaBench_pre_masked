
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef TYPE_1__* xmlNodePtr ;
typedef int * xmlDtdPtr ;
typedef TYPE_2__* xmlDocPtr ;
struct TYPE_14__ {int * intSubset; } ;
struct TYPE_13__ {scalar_t__ type; struct TYPE_13__* next; struct TYPE_13__* prev; struct TYPE_13__* parent; TYPE_2__* doc; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,TYPE_2__*,TYPE_1__*,int) ;

__attribute__((used)) static xmlNodePtr
FUNC_3(xmlNodePtr VAR_1, xmlDocPtr VAR_2, xmlNodePtr VAR_3) {
    xmlNodePtr VAR_4 = ((void*)0);
    xmlNodePtr VAR_5 = ((void*)0),VAR_6;

    while (VAR_1 != ((void*)0)) {
     VAR_6 = FUNC_2(VAR_1, VAR_2, VAR_3, 1);
 if (VAR_6 == ((void*)0)) return(((void*)0));
 if (VAR_4 == ((void*)0)) {
     VAR_6->prev = ((void*)0);
     VAR_4 = VAR_5 = VAR_6;
 } else if (VAR_5 != VAR_6) {

     VAR_5->next = VAR_6;
     VAR_6->prev = VAR_5;
     VAR_5 = VAR_6;
 }
 VAR_1 = VAR_1->next;
    }
    return(VAR_4);
}
