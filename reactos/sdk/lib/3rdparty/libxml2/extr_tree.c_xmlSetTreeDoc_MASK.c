
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* xmlNodePtr ;
typedef void* xmlDocPtr ;
typedef int xmlChar ;
typedef TYPE_2__* xmlAttrPtr ;
struct TYPE_9__ {scalar_t__ atype; struct TYPE_9__* next; int * children; void* doc; } ;
struct TYPE_8__ {scalar_t__ type; void* doc; int * children; TYPE_2__* properties; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,void*,int *,TYPE_2__*) ;
 scalar_t__ FUNC_1 (void*,TYPE_1__*,TYPE_2__*) ;
 int * FUNC_2 (void*,int *,int) ;
 int FUNC_3 (void*,TYPE_2__*) ;
 int FUNC_4 (int *,void*) ;

void
FUNC_5(xmlNodePtr VAR_3, xmlDocPtr VAR_4) {
    xmlAttrPtr VAR_5;

    if ((VAR_3 == ((void*)0)) || (VAR_3->type == VAR_2))
 return;
    if (VAR_3->doc != VAR_4) {
 if(VAR_3->type == VAR_1) {
     VAR_5 = VAR_3->properties;
     while (VAR_5 != ((void*)0)) {
                if (VAR_5->atype == VAR_0) {
                    FUNC_3(VAR_3->doc, VAR_5);
                }

  VAR_5->doc = VAR_4;
  FUNC_4(VAR_5->children, VAR_4);
  VAR_5 = VAR_5->next;
     }
 }
 if (VAR_3->children != ((void*)0))
     FUNC_4(VAR_3->children, VAR_4);
 VAR_3->doc = VAR_4;
    }
}
