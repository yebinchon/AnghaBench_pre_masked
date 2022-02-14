
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef TYPE_2__* xsltTransformContextPtr ;
typedef TYPE_3__* xsltStylesheetPtr ;
typedef TYPE_4__* xsltKeyDefPtr ;
typedef TYPE_5__* xsltDocumentPtr ;
struct TYPE_18__ {TYPE_1__* doc; } ;
struct TYPE_17__ {struct TYPE_17__* next; } ;
struct TYPE_16__ {scalar_t__ keys; } ;
struct TYPE_15__ {TYPE_3__* style; } ;
struct TYPE_14__ {int * URL; } ;


 int FUNC_0 (TYPE_2__*,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,int *) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_2__*,TYPE_5__*,TYPE_4__*) ;
 TYPE_3__* FUNC_4 (TYPE_3__*) ;

void
FUNC_5(xsltTransformContextPtr VAR_3, xsltDocumentPtr VAR_4) {
    xsltStylesheetPtr VAR_5;
    xsltKeyDefPtr VAR_6;

    if ((VAR_3 == ((void*)0)) || (VAR_4 == ((void*)0)))
 return;
    VAR_5 = VAR_3->style;
    while (VAR_5 != ((void*)0)) {
 VAR_6 = (xsltKeyDefPtr) VAR_5->keys;
 while (VAR_6 != ((void*)0)) {
     FUNC_3(VAR_3, VAR_4, VAR_6);

     VAR_6 = VAR_6->next;
 }

 VAR_5 = FUNC_4(VAR_5);
    }





}
