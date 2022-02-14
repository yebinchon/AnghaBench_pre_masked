
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * res; TYPE_2__* ctxt; int * doctree; } ;
typedef TYPE_1__ xpath_workspace ;
typedef int * xmlXPathObjectPtr ;
typedef int * xmlXPathCompExprPtr ;
typedef int xmlChar ;
typedef int text ;
typedef int int32 ;
struct TYPE_7__ {int node; } ;
typedef int PgXmlErrorContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int *,int) ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (char*,int ) ;
 int * FUNC_11 (int *) ;
 int * FUNC_12 (int *,TYPE_2__*) ;
 int FUNC_13 (int *) ;
 TYPE_2__* FUNC_14 (int *) ;
 int FUNC_15 (int *,int ,int ,char*) ;

__attribute__((used)) static xmlXPathObjectPtr
FUNC_16(text *VAR_3, xmlChar *VAR_4, xpath_workspace *VAR_5)
{
 int32 VAR_6 = FUNC_5(VAR_3);
 PgXmlErrorContext *VAR_7;
 xmlXPathCompExprPtr VAR_8;

 VAR_5->doctree = ((void*)0);
 VAR_5->ctxt = ((void*)0);
 VAR_5->res = ((void*)0);

 VAR_7 = FUNC_8(VAR_2);

 FUNC_3();
 {
  VAR_5->doctree = FUNC_10((char *) FUNC_4(VAR_3),
           VAR_6);
  if (VAR_5->doctree != ((void*)0))
  {
   VAR_5->ctxt = FUNC_14(VAR_5->doctree);
   VAR_5->ctxt->node = FUNC_9(VAR_5->doctree);


   VAR_8 = FUNC_11(VAR_4);
   if (VAR_8 == ((void*)0))
    FUNC_15(VAR_7, VAR_1, VAR_0,
       "XPath Syntax Error");


   VAR_5->res = FUNC_12(VAR_8, VAR_5->ctxt);

   FUNC_13(VAR_8);
  }
 }
 FUNC_0();
 {
  FUNC_6(VAR_5);

  FUNC_7(VAR_7, 1);

  FUNC_2();
 }
 FUNC_1();

 if (VAR_5->res == ((void*)0))
  FUNC_6(VAR_5);

 FUNC_7(VAR_7, 0);

 return VAR_5->res;
}
