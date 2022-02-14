
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


typedef TYPE_1__* xmlNodePtr ;
struct TYPE_13__ {scalar_t__ type; scalar_t__ name; struct TYPE_13__* last; struct TYPE_13__* next; struct TYPE_13__* parent; struct TYPE_13__* prev; int doc; int content; int * children; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_0 (TYPE_1__*,TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*) ;

xmlNodePtr
FUNC_6(xmlNodePtr VAR_4, xmlNodePtr VAR_5) {
    xmlNodePtr VAR_6;

    if ((VAR_4 == ((void*)0)) || (VAR_4->type == VAR_1)) {




 return(((void*)0));
    }

    if ((VAR_5 == ((void*)0)) || (VAR_5->type == VAR_1)) {




 return(((void*)0));
    }

    if (VAR_4 == VAR_5) {




 return(((void*)0));
    }





    if ((VAR_4->type != VAR_0) && (VAR_4->parent != ((void*)0)) &&
 (VAR_4->parent->children != ((void*)0)) &&
 (VAR_4->parent->last != ((void*)0)) &&
 (VAR_4->parent->last->next == ((void*)0))) {
 VAR_4 = VAR_4->parent->last;
    } else {
 while (VAR_4->next != ((void*)0)) VAR_4 = VAR_4->next;
    }

    FUNC_5(VAR_5);

    if ((VAR_4->type == VAR_2) && (VAR_5->type == VAR_2) &&
        (VAR_4->name == VAR_5->name)) {
 FUNC_3(VAR_4, VAR_5->content);
 FUNC_1(VAR_5);
 return(VAR_4);
    } else if (VAR_5->type == VAR_0) {
  return FUNC_0(VAR_4, VAR_4, VAR_5);
    }

    if (VAR_5->doc != VAR_4->doc) {
 FUNC_4(VAR_5, VAR_4->doc);
    }
    VAR_6 = VAR_4->parent;
    VAR_5->prev = VAR_4;
    VAR_5->next = ((void*)0);
    VAR_5->parent = VAR_6;
    VAR_4->next = VAR_5;
    if (VAR_6 != ((void*)0))
 VAR_6->last = VAR_5;

    return(VAR_5);
}
