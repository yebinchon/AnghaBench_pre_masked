
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef TYPE_2__* xmlNodePtr ;
typedef TYPE_3__* xmlAttrPtr ;
struct TYPE_16__ {scalar_t__ type; struct TYPE_16__* prev; struct TYPE_16__* next; } ;
struct TYPE_15__ {scalar_t__ type; scalar_t__ name; scalar_t__ doc; struct TYPE_15__* last; struct TYPE_15__* prev; struct TYPE_15__* next; struct TYPE_15__* children; TYPE_3__* properties; TYPE_1__* ns; int * content; struct TYPE_15__* parent; } ;
struct TYPE_14__ {int * href; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,char*) ;
 int VAR_5 ;
 TYPE_3__* FUNC_3 (TYPE_2__*,scalar_t__,int *) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (TYPE_2__*,scalar_t__) ;
 int FUNC_6 (TYPE_2__*) ;

xmlNodePtr
FUNC_7(xmlNodePtr VAR_6, xmlNodePtr VAR_7) {
    xmlNodePtr VAR_8;

    if ((VAR_6 == ((void*)0)) || (VAR_6->type == VAR_3)) {




 return(((void*)0));
    }

    if ((VAR_7 == ((void*)0)) || (VAR_7->type == VAR_3)) {




 return(((void*)0));
    }

    if (VAR_6 == VAR_7) {




 return(((void*)0));
    }




    if (VAR_7->type == VAR_4) {
 if ((VAR_6->type == VAR_4) &&
     (VAR_6->content != ((void*)0)) &&
     (VAR_6->name == VAR_7->name)) {
     FUNC_4(VAR_6, VAR_7->content);
     FUNC_0(VAR_7);
     return(VAR_6);
 }
 if ((VAR_6->last != ((void*)0)) && (VAR_6->last->type == VAR_4) &&
     (VAR_6->last->name == VAR_7->name) &&
     (VAR_6->last != VAR_7)) {
     FUNC_4(VAR_6->last, VAR_7->content);
     FUNC_0(VAR_7);
     return(VAR_6->last);
 }
    }




    VAR_8 = VAR_7->parent;
    VAR_7->parent = VAR_6;
    if (VAR_7->doc != VAR_6->doc) {
 FUNC_5(VAR_7, VAR_6->doc);
    }



    if (VAR_8 == VAR_6)
 return(VAR_7);




    if ((VAR_6->type == VAR_4) &&
 (VAR_6->content != ((void*)0)) &&
 (VAR_6 != VAR_7)) {
 FUNC_4(VAR_6, VAR_7->content);
 FUNC_0(VAR_7);
 return(VAR_6);
    }
    if (VAR_7->type == VAR_1) {
  if (VAR_6->type != VAR_2)
   return(((void*)0));
 if (VAR_6->properties != ((void*)0)) {

     xmlAttrPtr VAR_9;

     if (VAR_7->ns == ((void*)0))
  VAR_9 = FUNC_3(VAR_6, VAR_7->name, ((void*)0));
     else
  VAR_9 = FUNC_3(VAR_6, VAR_7->name, VAR_7->ns->href);
     if ((VAR_9 != ((void*)0)) && (VAR_9 != (xmlAttrPtr) VAR_7) && (VAR_9->type != VAR_0)) {

   FUNC_6((xmlNodePtr) VAR_9);
  FUNC_1(VAR_9);
     }
  if (VAR_9 == (xmlAttrPtr) VAR_7)
   return(VAR_7);

 }
 if (VAR_6->properties == ((void*)0)) {
     VAR_6->properties = (xmlAttrPtr) VAR_7;
 } else {

     xmlAttrPtr VAR_10 = VAR_6->properties;
     while (VAR_10->next != ((void*)0)) {
  VAR_10 = VAR_10->next;
     }
     VAR_10->next = (xmlAttrPtr) VAR_7;
     ((xmlAttrPtr) VAR_7)->prev = VAR_10;
 }
    } else {
 if (VAR_6->children == ((void*)0)) {
     VAR_6->children = VAR_7;
     VAR_6->last = VAR_7;
 } else {
     VAR_8 = VAR_6->last;
     VAR_8->next = VAR_7;
     VAR_7->prev = VAR_8;
     VAR_6->last = VAR_7;
 }
    }
    return(VAR_7);
}
