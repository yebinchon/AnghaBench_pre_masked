
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* xsltStylesheetPtr ;
typedef TYPE_2__* xsltStylePreCompPtr ;
typedef TYPE_3__* xsltStackElemPtr ;
typedef int xmlNodePtr ;
typedef int xmlChar ;
struct TYPE_10__ {scalar_t__ name; scalar_t__ nameURI; int computed; int value; struct TYPE_10__* next; TYPE_2__* comp; int tree; void* select; } ;
struct TYPE_9__ {scalar_t__ type; int inst; } ;
struct TYPE_8__ {int errors; TYPE_3__* variables; int dict; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* FUNC_0 (int ,int const*,int) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int ,char*,int const*) ;
 int VAR_2 ;
 TYPE_3__* FUNC_4 (int *) ;
 int FUNC_5 (int *,TYPE_1__*,int ,char*,scalar_t__) ;

__attribute__((used)) static int
FUNC_6(xsltStylesheetPtr VAR_3, const xmlChar *VAR_4,
       const xmlChar *VAR_5, const xmlChar *VAR_6,
       xmlNodePtr VAR_7, xsltStylePreCompPtr VAR_8,
       const xmlChar *VAR_9) {
    xsltStackElemPtr VAR_10, VAR_11;
    if (VAR_3 == ((void*)0))
 return(-1);
    if (VAR_4 == ((void*)0))
 return(-1);
    if (VAR_8 == ((void*)0))
 return(-1);
    VAR_10 = FUNC_4(((void*)0));
    if (VAR_10 == ((void*)0))
 return(-1);
    VAR_10->comp = VAR_8;
    VAR_10->name = FUNC_0(VAR_3->dict, VAR_4, -1);
    VAR_10->select = FUNC_0(VAR_3->dict, VAR_6, -1);
    if (VAR_5)
 VAR_10->nameURI = FUNC_0(VAR_3->dict, VAR_5, -1);
    VAR_10->tree = VAR_7;
    VAR_11 = VAR_3->variables;
    if (VAR_11 == ((void*)0)) {
 VAR_10->next = ((void*)0);
 VAR_3->variables = VAR_10;
    } else {
 while (VAR_11 != ((void*)0)) {
     if ((VAR_10->comp->type == VAR_1) &&
  (VAR_11->comp->type == VAR_1) &&
  (FUNC_1(VAR_10->name, VAR_11->name)) &&
  ((VAR_10->nameURI == VAR_11->nameURI) ||
   (FUNC_1(VAR_10->nameURI, VAR_11->nameURI))))
     {
  FUNC_5(((void*)0), VAR_3, VAR_8->inst,
  "redefinition of global variable %s\n", VAR_10->name);
  VAR_3->errors++;
     }
     if (VAR_11->next == ((void*)0))
         break;
     VAR_11 = VAR_11->next;
 }
 VAR_10->next = ((void*)0);
 VAR_11->next = VAR_10;
    }
    if (VAR_9 != ((void*)0)) {
 VAR_10->computed = 1;
 VAR_10->value = FUNC_2(VAR_9);
    }
    return(0);
}
