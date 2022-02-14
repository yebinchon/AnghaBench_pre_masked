
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_4__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_1__ ;


typedef TYPE_1__* xmlNsPtr ;
typedef TYPE_2__* xmlNodePtr ;
typedef TYPE_3__* xmlDocPtr ;
typedef int xmlChar ;
typedef TYPE_4__* xmlAttrPtr ;
struct TYPE_34__ {TYPE_2__* children; TYPE_3__* doc; TYPE_2__* parent; TYPE_2__* last; TYPE_1__* ns; int name; } ;
struct TYPE_33__ {int * ids; } ;
struct TYPE_32__ {scalar_t__ type; TYPE_3__* doc; struct TYPE_32__* next; struct TYPE_32__* parent; } ;
struct TYPE_31__ {int href; int prefix; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,TYPE_3__*,int *,TYPE_4__*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_3__*,TYPE_2__*,TYPE_4__*) ;
 TYPE_4__* FUNC_3 (TYPE_3__*,int ,int *) ;
 TYPE_1__* FUNC_4 (TYPE_2__*,int ,int ) ;
 TYPE_1__* FUNC_5 (TYPE_3__*,TYPE_2__*,TYPE_1__*) ;
 int * FUNC_6 (TYPE_3__*,TYPE_2__*,int) ;
 TYPE_1__* FUNC_7 (TYPE_3__*,TYPE_2__*,int ) ;
 TYPE_2__* FUNC_8 (TYPE_2__*,TYPE_3__*,TYPE_2__*) ;
 scalar_t__ FUNC_9 (int ,int ) ;

__attribute__((used)) static xmlAttrPtr
FUNC_10(xmlDocPtr VAR_1, xmlNodePtr VAR_2, xmlAttrPtr VAR_3) {
    xmlAttrPtr VAR_4;

    if (VAR_3 == ((void*)0)) return(((void*)0));
    if ((VAR_2 != ((void*)0)) && (VAR_2->type != VAR_0))
        return(((void*)0));
    if (VAR_2 != ((void*)0))
 VAR_4 = FUNC_3(VAR_2->doc, VAR_3->name, ((void*)0));
    else if (VAR_1 != ((void*)0))
 VAR_4 = FUNC_3(VAR_1, VAR_3->name, ((void*)0));
    else if (VAR_3->parent != ((void*)0))
 VAR_4 = FUNC_3(VAR_3->parent->doc, VAR_3->name, ((void*)0));
    else if (VAR_3->children != ((void*)0))
 VAR_4 = FUNC_3(VAR_3->children->doc, VAR_3->name, ((void*)0));
    else
 VAR_4 = FUNC_3(((void*)0), VAR_3->name, ((void*)0));
    if (VAR_4 == ((void*)0)) return(((void*)0));
    VAR_4->parent = VAR_2;

    if ((VAR_3->ns != ((void*)0)) && (VAR_2 != ((void*)0))) {
      xmlNsPtr VAR_5;

      VAR_5 = FUNC_7(VAR_2->doc, VAR_2, VAR_3->ns->prefix);
      if (VAR_5 == ((void*)0)) {





        VAR_5 = FUNC_7(VAR_3->doc, VAR_3->parent, VAR_3->ns->prefix);
        if (VAR_5 != ((void*)0)) {
          xmlNodePtr VAR_6 = VAR_2;
          xmlNodePtr VAR_7 = ((void*)0);

          while (VAR_6->parent != ((void*)0)) {
            VAR_7 = VAR_6;
            VAR_6 = VAR_6->parent;
          }
          if (VAR_6 == (xmlNodePtr) VAR_2->doc) {

            VAR_6 = VAR_7;
          }
          VAR_4->ns = FUNC_4(VAR_6, VAR_5->href, VAR_5->prefix);
        }
      } else {





        if (FUNC_9(VAR_5->href, VAR_3->ns->href)) {

          VAR_4->ns = VAR_5;
        } else {




          VAR_4->ns = FUNC_5(VAR_2->doc, VAR_2, VAR_3->ns);
        }
      }

    } else
        VAR_4->ns = ((void*)0);

    if (VAR_3->children != ((void*)0)) {
 xmlNodePtr VAR_8;

 VAR_4->children = FUNC_8(VAR_3->children, VAR_4->doc, (xmlNodePtr) VAR_4);
 VAR_4->last = ((void*)0);
 VAR_8 = VAR_4->children;
 while (VAR_8 != ((void*)0)) {

     if (VAR_8->next == ((void*)0))
         VAR_4->last = VAR_8;
     VAR_8 = VAR_8->next;
 }
    }



    if ((VAR_2!= ((void*)0)) && (VAR_3!= ((void*)0)) &&
 (VAR_2->doc != ((void*)0)) && (VAR_3->doc != ((void*)0)) &&
 (VAR_3->doc->ids != ((void*)0)) && (VAR_3->parent != ((void*)0))) {
 if (FUNC_2(VAR_3->doc, VAR_3->parent, VAR_3)) {
     xmlChar *VAR_9;

     VAR_9 = FUNC_6(VAR_3->doc, VAR_3->children, 1);
     if (VAR_9 != ((void*)0)) {
  FUNC_0(((void*)0), VAR_2->doc, VAR_9, VAR_4);
  FUNC_1(VAR_9);
     }
 }
    }
    return(VAR_4);
}
