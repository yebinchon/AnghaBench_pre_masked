
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


typedef TYPE_1__* xsltStylesheetPtr ;
typedef TYPE_2__* xsltPrincipalStylesheetDataPtr ;
typedef TYPE_3__* xsltCompilerCtxtPtr ;
typedef int xmlNodePtr ;
typedef TYPE_4__* xmlDocPtr ;
struct TYPE_25__ {int URL; int * dict; } ;
struct TYPE_24__ {int depth; TYPE_2__* psData; TYPE_1__* style; int * dict; } ;
struct TYPE_23__ {scalar_t__ nsMap; } ;
struct TYPE_22__ {scalar_t__ errors; TYPE_4__* doc; TYPE_3__* compCtxt; struct TYPE_22__* principal; int * dict; TYPE_2__* principalData; struct TYPE_22__* parent; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 TYPE_3__* FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (TYPE_3__*,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int ,char*,int ) ;
 int VAR_0 ;
 TYPE_2__* FUNC_11 () ;
 TYPE_1__* FUNC_12 () ;
 int * FUNC_13 (TYPE_1__*,TYPE_4__*) ;
 int FUNC_14 (scalar_t__,TYPE_4__*) ;

xsltStylesheetPtr
FUNC_15(xmlDocPtr VAR_1,
          xsltStylesheetPtr VAR_2) {
    xsltStylesheetPtr VAR_3;

    if (VAR_1 == ((void*)0))
 return(((void*)0));

    VAR_3 = FUNC_12();
    if (VAR_3 == ((void*)0))
 return(((void*)0));



    VAR_3->parent = VAR_2;



    if (VAR_1->dict != ((void*)0)) {
        FUNC_0(VAR_3->dict);
 VAR_3->dict = VAR_1->dict;





 FUNC_1(VAR_3->dict);
    }





    FUNC_9(VAR_3);
    VAR_3->doc = VAR_1;
    if (FUNC_13(VAR_3, VAR_1) == ((void*)0)) {
  VAR_3->doc = ((void*)0);
  FUNC_8(VAR_3);
  VAR_3 = ((void*)0);
    }
    if (VAR_3 != ((void*)0)) {
 if (VAR_3->errors != 0) {
     VAR_3->doc = ((void*)0);
     if (VAR_2 == ((void*)0))
  FUNC_3(VAR_1,
      FUNC_2(VAR_1));
     FUNC_8(VAR_3);
     VAR_3 = ((void*)0);
 }
    }


    return(VAR_3);
}
