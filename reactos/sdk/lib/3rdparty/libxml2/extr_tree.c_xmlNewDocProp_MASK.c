
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* xmlNodePtr ;
typedef TYPE_2__* xmlDocPtr ;
typedef int xmlChar ;
typedef TYPE_3__* xmlAttrPtr ;
typedef int xmlAttr ;
struct TYPE_12__ {TYPE_1__* last; TYPE_1__* children; TYPE_2__* doc; int name; int type; } ;
struct TYPE_11__ {int * dict; } ;
struct TYPE_10__ {struct TYPE_10__* next; struct TYPE_10__* parent; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ,int) ;
 int FUNC_1 (int *,int const*,int) ;
 int FUNC_2 (int ,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int const*) ;
 TYPE_1__* FUNC_6 (TYPE_2__*,int const*) ;
 int FUNC_7 (char*) ;

xmlAttrPtr
FUNC_8(xmlDocPtr VAR_3, const xmlChar *VAR_4, const xmlChar *VAR_5) {
    xmlAttrPtr VAR_6;

    if (VAR_4 == ((void*)0)) {




 return(((void*)0));
    }




    VAR_6 = (xmlAttrPtr) FUNC_3(sizeof(xmlAttr));
    if (VAR_6 == ((void*)0)) {
 FUNC_7("building attribute");
 return(((void*)0));
    }
    FUNC_0(VAR_6, 0, sizeof(xmlAttr));
    VAR_6->type = VAR_0;

    if ((VAR_3 != ((void*)0)) && (VAR_3->dict != ((void*)0)))
 VAR_6->name = FUNC_1(VAR_3->dict, VAR_4, -1);
    else
 VAR_6->name = FUNC_5(VAR_4);
    VAR_6->doc = VAR_3;
    if (VAR_5 != ((void*)0)) {
 xmlNodePtr VAR_7;

 VAR_6->children = FUNC_6(VAR_3, VAR_5);
 VAR_6->last = ((void*)0);

 VAR_7 = VAR_6->children;
 while (VAR_7 != ((void*)0)) {
     VAR_7->parent = (xmlNodePtr) VAR_6;
     if (VAR_7->next == ((void*)0))
  VAR_6->last = VAR_7;
     VAR_7 = VAR_7->next;
 }
    }

    if ((VAR_1) && (&FUNC_4))
 FUNC_4((xmlNodePtr)VAR_6);
    return(VAR_6);
}
