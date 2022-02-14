
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ type; int name; TYPE_2__* doc; TYPE_4__* properties; } ;
typedef TYPE_1__ xmlNode ;
typedef TYPE_2__* xmlDocPtr ;
typedef int xmlChar ;
typedef TYPE_3__* xmlAttributePtr ;
typedef TYPE_4__* xmlAttrPtr ;
struct TYPE_11__ {struct TYPE_11__* next; int name; } ;
struct TYPE_10__ {int * defaultValue; } ;
struct TYPE_9__ {int * extSubset; int * intSubset; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (int *,int ,int const*) ;
 scalar_t__ FUNC_1 (int ,int const*) ;

xmlAttrPtr
FUNC_2(const xmlNode *VAR_2, const xmlChar *VAR_3) {
    xmlAttrPtr VAR_4;
    xmlDocPtr VAR_5;

    if ((VAR_2 == ((void*)0)) || (VAR_2->type != VAR_0) || (VAR_3 == ((void*)0)))
        return(((void*)0));



    VAR_4 = VAR_2->properties;
    while (VAR_4 != ((void*)0)) {
        if (FUNC_1(VAR_4->name, VAR_3)) {
     return(VAR_4);
        }
 VAR_4 = VAR_4->next;
    }
    if (!VAR_1) return(((void*)0));





    VAR_5 = VAR_2->doc;
    if (VAR_5 != ((void*)0)) {
        xmlAttributePtr VAR_6;
        if (VAR_5->intSubset != ((void*)0)) {
     VAR_6 = FUNC_0(VAR_5->intSubset, VAR_2->name, VAR_3);
     if ((VAR_6 == ((void*)0)) && (VAR_5->extSubset != ((void*)0)))
  VAR_6 = FUNC_0(VAR_5->extSubset, VAR_2->name, VAR_3);
            if ((VAR_6 != ((void*)0)) && (VAR_6->defaultValue != ((void*)0)))


  return((xmlAttrPtr) VAR_6);
 }
    }
    return(((void*)0));
}
