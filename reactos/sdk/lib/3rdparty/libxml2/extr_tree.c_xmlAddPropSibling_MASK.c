
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_2__* xmlNodePtr ;
typedef TYPE_3__* xmlAttrPtr ;
struct TYPE_15__ {TYPE_3__* properties; } ;
struct TYPE_14__ {scalar_t__ type; } ;
struct TYPE_13__ {scalar_t__ type; scalar_t__ doc; TYPE_7__* parent; struct TYPE_13__* prev; struct TYPE_13__* next; TYPE_1__* ns; int name; } ;
struct TYPE_12__ {int * href; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* FUNC_0 (TYPE_7__*,int ,int *) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static xmlNodePtr
FUNC_3(xmlNodePtr VAR_2, xmlNodePtr VAR_3, xmlNodePtr VAR_4) {
 xmlAttrPtr VAR_5;

 if ((VAR_3 == ((void*)0)) || (VAR_3->type != VAR_1) ||
     (VAR_4 == ((void*)0)) || (VAR_4->type != VAR_1) ||
     ((VAR_2 != ((void*)0)) && (VAR_2->type != VAR_1)))
  return(((void*)0));


 if (VAR_4->ns == ((void*)0))
  VAR_5 = FUNC_0(VAR_3->parent, VAR_4->name, ((void*)0));
 else
  VAR_5 = FUNC_0(VAR_3->parent, VAR_4->name, VAR_4->ns->href);

 if (VAR_4->doc != VAR_3->doc) {
  FUNC_2(VAR_4, VAR_3->doc);
 }
 VAR_4->parent = VAR_3->parent;
 VAR_4->prev = VAR_2;
 if (VAR_2 != ((void*)0)) {
  VAR_4->next = VAR_2->next;
  VAR_2->next = VAR_4;
  if (VAR_4->next)
   VAR_4->next->prev = VAR_4;
 } else {
  VAR_4->next = VAR_3;
  VAR_3->prev = VAR_4;
 }
 if (VAR_4->prev == ((void*)0) && VAR_4->parent != ((void*)0))
  VAR_4->parent->properties = (xmlAttrPtr) VAR_4;
 if ((VAR_5 != ((void*)0)) && (VAR_5->type != VAR_0)) {

  FUNC_1((xmlAttrPtr) VAR_5);
 }
 return VAR_4;
}
