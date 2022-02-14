
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_13__ ;


typedef TYPE_2__* xsltTransformContextPtr ;
typedef int xsltTransformContext ;
typedef int xsltTemplatePtr ;
typedef TYPE_3__* xsltStylesheetPtr ;
typedef int xsltStackElemPtr ;
typedef TYPE_4__* xsltRuntimeExtraPtr ;
typedef int xsltRuntimeExtra ;
typedef TYPE_5__* xsltDocumentPtr ;
typedef int xmlNodePtr ;
typedef scalar_t__ xmlDocPtr ;
struct TYPE_23__ {int main; } ;
struct TYPE_19__ {int * ptr; } ;
struct TYPE_22__ {TYPE_1__ val; int * deallocate; int * info; } ;
struct TYPE_21__ {scalar_t__ extrasNr; int nsHash; scalar_t__ internalized; int dict; } ;
struct TYPE_20__ {int internalized; int templMax; int varsMax; int extrasMax; int extrasNr; unsigned long* traceCode; scalar_t__ keyInitLevel; int xinclude; scalar_t__ debugStatus; int sec; int * outputFile; int * inst; TYPE_5__* document; int parserOptions; TYPE_13__* xpathCtxt; TYPE_4__* extras; TYPE_3__* style; scalar_t__ prof; scalar_t__ profMax; scalar_t__ profNr; int * profTab; int maxTemplateVars; scalar_t__ varsBase; int * vars; scalar_t__ varsNr; int * varsTab; int maxTemplateDepth; int * templ; scalar_t__ templNr; int * templTab; int * dict; int * cache; } ;
struct TYPE_18__ {int nsHash; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,int) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (TYPE_13__*,int,int,int ) ;
 int FUNC_7 () ;
 TYPE_13__* FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (int ,char*) ;
 int VAR_5 ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 () ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_5__* FUNC_16 (TYPE_2__*,scalar_t__) ;
 int * FUNC_17 () ;
 int FUNC_18 (TYPE_2__*,int *,int ,char*) ;

xsltTransformContextPtr
FUNC_19(xsltStylesheetPtr VAR_8, xmlDocPtr VAR_9) {
    xsltTransformContextPtr VAR_10;
    xsltDocumentPtr VAR_11;
    int VAR_12;

    FUNC_15();

    VAR_10 = (xsltTransformContextPtr) FUNC_5(sizeof(xsltTransformContext));
    if (VAR_10 == ((void*)0)) {
 FUNC_18(((void*)0), ((void*)0), (xmlNodePtr)VAR_9,
  "xsltNewTransformContext : malloc failed\n");
 return(((void*)0));
    }
    FUNC_2(VAR_10, 0, sizeof(xsltTransformContext));

    VAR_10->cache = FUNC_17();
    if (VAR_10->cache == ((void*)0))
 goto internal_err;




    VAR_10->dict = FUNC_3(VAR_8->dict);
    VAR_10->internalized = ((VAR_8->internalized) && (VAR_10->dict != ((void*)0)));
    VAR_10->templTab = (xsltTemplatePtr *)
         FUNC_5(10 * sizeof(xsltTemplatePtr));
    if (VAR_10->templTab == ((void*)0)) {
 FUNC_18(((void*)0), ((void*)0), (xmlNodePtr) VAR_9,
  "xsltNewTransformContext: out of memory\n");
 goto internal_err;
    }
    VAR_10->templNr = 0;
    VAR_10->templMax = 5;
    VAR_10->templ = ((void*)0);
    VAR_10->maxTemplateDepth = VAR_6;




    VAR_10->varsTab = (xsltStackElemPtr *)
         FUNC_5(10 * sizeof(xsltStackElemPtr));
    if (VAR_10->varsTab == ((void*)0)) {
        FUNC_4(VAR_2,
  "xsltNewTransformContext: out of memory\n");
 goto internal_err;
    }
    VAR_10->varsNr = 0;
    VAR_10->varsMax = 10;
    VAR_10->vars = ((void*)0);
    VAR_10->varsBase = 0;
    VAR_10->maxTemplateVars = VAR_7;




    VAR_10->profTab = ((void*)0);
    VAR_10->profNr = 0;
    VAR_10->profMax = 0;
    VAR_10->prof = 0;

    VAR_10->style = VAR_8;
    FUNC_7();
    VAR_10->xpathCtxt = FUNC_8(VAR_9);
    if (VAR_10->xpathCtxt == ((void*)0)) {
 FUNC_18(((void*)0), ((void*)0), (xmlNodePtr) VAR_9,
  "xsltNewTransformContext : xmlXPathNewContext failed\n");
 goto internal_err;
    }



    if (FUNC_6(VAR_10->xpathCtxt, 1, -1, 0) == -1)
 goto internal_err;



    if (VAR_8->extrasNr != 0) {
 VAR_10->extrasMax = VAR_8->extrasNr + 20;
 VAR_10->extras = (xsltRuntimeExtraPtr)
     FUNC_5(VAR_10->extrasMax * sizeof(xsltRuntimeExtra));
 if (VAR_10->extras == ((void*)0)) {
     FUNC_4(VAR_2,
      "xsltNewTransformContext: out of memory\n");
     goto internal_err;
 }
 VAR_10->extrasNr = VAR_8->extrasNr;
 for (VAR_12 = 0;VAR_12 < VAR_10->extrasMax;VAR_12++) {
     VAR_10->extras[VAR_12].info = ((void*)0);
     VAR_10->extras[VAR_12].deallocate = ((void*)0);
     VAR_10->extras[VAR_12].val.ptr = ((void*)0);
 }
    } else {
 VAR_10->extras = ((void*)0);
 VAR_10->extrasNr = 0;
 VAR_10->extrasMax = 0;
    }

    FUNC_1(VAR_10);
    FUNC_0(VAR_10);
    VAR_10->xpathCtxt->nsHash = VAR_8->nsHash;



    FUNC_14(VAR_10);




    if (VAR_3 == VAR_0)
        FUNC_9(VAR_9);




    VAR_10->parserOptions = VAR_1;
    VAR_11 = FUNC_16(VAR_10, VAR_9);
    if (VAR_11 == ((void*)0)) {
 FUNC_18(VAR_10, ((void*)0), (xmlNodePtr)VAR_9,
  "xsltNewTransformContext : xsltNewDocument failed\n");
 goto internal_err;
    }
    VAR_11->main = 1;
    VAR_10->document = VAR_11;
    VAR_10->inst = ((void*)0);
    VAR_10->outputFile = ((void*)0);
    VAR_10->sec = FUNC_12();
    VAR_10->debugStatus = VAR_3;
    VAR_10->traceCode = (unsigned long*) &VAR_4;
    VAR_10->xinclude = FUNC_13();
    VAR_10->keyInitLevel = 0;

    return(VAR_10);

internal_err:
    if (VAR_10 != ((void*)0))
 FUNC_10(VAR_10);
    return(((void*)0));
}
