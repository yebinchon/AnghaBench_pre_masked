
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef TYPE_3__* xsltTransformContextPtr ;
typedef TYPE_4__* xsltStylesheetPtr ;
typedef TYPE_5__* xsltStackElemPtr ;
struct TYPE_22__ {scalar_t__ doc; } ;
struct TYPE_21__ {struct TYPE_21__* next; int name; TYPE_2__* comp; int nameURI; } ;
struct TYPE_20__ {int errors; TYPE_1__* doc; TYPE_5__* variables; } ;
struct TYPE_19__ {int globalVars; TYPE_4__* style; int * document; } ;
struct TYPE_18__ {scalar_t__ type; TYPE_8__* inst; } ;
struct TYPE_17__ {int * URL; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,TYPE_5__*) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,TYPE_3__*) ;
 TYPE_5__* FUNC_4 (TYPE_5__*) ;
 int VAR_2 ;
 int FUNC_5 (int ,char*,...) ;
 int VAR_3 ;
 TYPE_4__* FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_3__*,TYPE_4__*,TYPE_8__*,char*,int ) ;

int
FUNC_8(xsltTransformContextPtr VAR_4) {
    xsltStackElemPtr VAR_5;
    xsltStylesheetPtr VAR_6;

    if ((VAR_4 == ((void*)0)) || (VAR_4->document == ((void*)0)))
 return(-1);
    VAR_6 = VAR_4->style;
    while (VAR_6 != ((void*)0)) {
 VAR_5 = VAR_6->variables;
 while (VAR_5 != ((void*)0)) {
     xsltStackElemPtr VAR_7;




     VAR_7 = (xsltStackElemPtr)
      FUNC_2(VAR_4->globalVars,
                   VAR_5->name, VAR_5->nameURI);
     if (VAR_7 == ((void*)0)) {

  VAR_7 = FUNC_4(VAR_5);
  FUNC_1(VAR_4->globalVars,
     VAR_5->name, VAR_5->nameURI, VAR_7);
     } else if ((VAR_5->comp != ((void*)0)) &&
         (VAR_5->comp->type == VAR_0)) {




  if ((VAR_5->comp->inst != ((void*)0)) &&
      (VAR_7->comp != ((void*)0)) && (VAR_7->comp->inst != ((void*)0)) &&
      (VAR_5->comp->inst->doc == VAR_7->comp->inst->doc))
  {
      FUNC_7(VAR_4, VAR_6, VAR_5->comp->inst,
   "Global variable %s already defined\n", VAR_5->name);
      if (VAR_6 != ((void*)0)) VAR_6->errors++;
  }
     }
     VAR_5 = VAR_5->next;
 }

 VAR_6 = FUNC_6(VAR_6);
    }




    FUNC_3(VAR_4->globalVars, VAR_2, VAR_4);

    return(0);
}
