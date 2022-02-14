
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef TYPE_2__* xmlNodePtr ;
typedef int xmlChar ;
struct TYPE_16__ {scalar_t__ type; scalar_t__ name; TYPE_1__* parent; struct TYPE_16__* prev; struct TYPE_16__* next; int doc; int content; } ;
struct TYPE_15__ {TYPE_2__* last; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* FUNC_0 (TYPE_2__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,char*) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (TYPE_2__*,int ) ;
 int * FUNC_7 (int *,int ) ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (TYPE_2__*) ;

xmlNodePtr
FUNC_10(xmlNodePtr VAR_4, xmlNodePtr VAR_5) {
    if ((VAR_4 == ((void*)0)) || (VAR_4->type == VAR_1)) {




 return(((void*)0));
    }
    if ((VAR_5 == ((void*)0)) || (VAR_5->type == VAR_1)) {




 return(((void*)0));
    }

    if (VAR_4 == VAR_5) {




 return(((void*)0));
    }

    FUNC_9(VAR_5);

    if (VAR_5->type == VAR_2) {
 if (VAR_4->type == VAR_2) {
     FUNC_4(VAR_4, VAR_5->content);
     FUNC_2(VAR_5);
     return(VAR_4);
 }
 if ((VAR_4->next != ((void*)0)) && (VAR_4->next->type == VAR_2) &&
            (VAR_4->name == VAR_4->next->name)) {
     xmlChar *VAR_6;

     VAR_6 = FUNC_8(VAR_5->content);
     VAR_6 = FUNC_7(VAR_6, VAR_4->next->content);
     FUNC_5(VAR_4->next, VAR_6);
     FUNC_1(VAR_6);
     FUNC_2(VAR_5);
     return(VAR_4->next);
 }
    } else if (VAR_5->type == VAR_0) {
  return FUNC_0(VAR_4, VAR_4, VAR_5);
    }

    if (VAR_5->doc != VAR_4->doc) {
 FUNC_6(VAR_5, VAR_4->doc);
    }
    VAR_5->parent = VAR_4->parent;
    VAR_5->prev = VAR_4;
    VAR_5->next = VAR_4->next;
    VAR_4->next = VAR_5;
    if (VAR_5->next != ((void*)0))
 VAR_5->next->prev = VAR_5;
    if ((VAR_5->parent != ((void*)0)) && (VAR_5->parent->last == VAR_4))
 VAR_5->parent->last = VAR_5;
    return(VAR_5);
}
