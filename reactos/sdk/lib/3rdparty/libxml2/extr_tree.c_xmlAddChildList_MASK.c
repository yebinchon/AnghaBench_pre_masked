
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* xmlNodePtr ;
struct TYPE_8__ {scalar_t__ type; scalar_t__ name; struct TYPE_8__* last; int * doc; struct TYPE_8__* parent; struct TYPE_8__* next; struct TYPE_8__* prev; int content; struct TYPE_8__* children; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int *) ;

xmlNodePtr
FUNC_4(xmlNodePtr VAR_3, xmlNodePtr VAR_4) {
    xmlNodePtr VAR_5;

    if ((VAR_3 == ((void*)0)) || (VAR_3->type == VAR_0)) {




 return(((void*)0));
    }

    if ((VAR_4 == ((void*)0)) || (VAR_4->type == VAR_0)) {




 return(((void*)0));
    }

    if ((VAR_4->doc != ((void*)0)) && (VAR_3->doc != ((void*)0)) &&
        (VAR_4->doc != VAR_3->doc)) {




    }





    if (VAR_3->children == ((void*)0)) {
        VAR_3->children = VAR_4;
    } else {



 if ((VAR_4->type == VAR_1) &&
     (VAR_3->last->type == VAR_1) &&
     (VAR_4->name == VAR_3->last->name)) {
     FUNC_2(VAR_3->last, VAR_4->content);



     if (VAR_4->next == ((void*)0)) {
  FUNC_0(VAR_4);
  return(VAR_3->last);
     }
     VAR_5 = VAR_4;
     VAR_4 = VAR_4->next;
     FUNC_0(VAR_5);
 }
        VAR_5 = VAR_3->last;
 VAR_5->next = VAR_4;
 VAR_4->prev = VAR_5;
    }
    while (VAR_4->next != ((void*)0)) {
 VAR_4->parent = VAR_3;
 if (VAR_4->doc != VAR_3->doc) {
     FUNC_3(VAR_4, VAR_3->doc);
 }
        VAR_4 = VAR_4->next;
    }
    VAR_4->parent = VAR_3;

    if (VAR_4->doc != VAR_3->doc) {
        FUNC_3(VAR_4, VAR_3->doc);
    }
    VAR_3->last = VAR_4;

    return(VAR_4);
}
