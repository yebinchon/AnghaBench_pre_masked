
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* xsltStylesheetPtr ;
typedef int xsltStylesheet ;
struct TYPE_5__ {int omitXmlDeclaration; int standalone; int indent; int internalized; int dict; scalar_t__ forwards_compatible; scalar_t__ literal_result; scalar_t__ extrasNr; int * extInfos; int * exclPrefixTab; scalar_t__ exclPrefixMax; scalar_t__ exclPrefixNr; scalar_t__ warnings; scalar_t__ errors; int decimalFormat; } ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,char*) ;
 int VAR_0 ;
 int FUNC_5 () ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *,int *,char*) ;

xsltStylesheetPtr
FUNC_8(void) {
    xsltStylesheetPtr VAR_1 = ((void*)0);

    VAR_1 = (xsltStylesheetPtr) FUNC_2(sizeof(xsltStylesheet));
    if (VAR_1 == ((void*)0)) {
 FUNC_7(((void*)0), ((void*)0), ((void*)0),
  "xsltNewStylesheet : malloc failed\n");
 goto internal_err;
    }
    FUNC_0(VAR_1, 0, sizeof(xsltStylesheet));

    VAR_1->omitXmlDeclaration = -1;
    VAR_1->standalone = -1;
    VAR_1->decimalFormat = FUNC_6(((void*)0), ((void*)0));
    VAR_1->indent = -1;
    VAR_1->errors = 0;
    VAR_1->warnings = 0;
    VAR_1->exclPrefixNr = 0;
    VAR_1->exclPrefixMax = 0;
    VAR_1->exclPrefixTab = ((void*)0);
    VAR_1->extInfos = ((void*)0);
    VAR_1->extrasNr = 0;
    VAR_1->internalized = 1;
    VAR_1->literal_result = 0;
    VAR_1->forwards_compatible = 0;
    VAR_1->dict = FUNC_1();





    FUNC_5();

    return(VAR_1);

internal_err:
    if (VAR_1 != ((void*)0))
 FUNC_3(VAR_1);
    return(((void*)0));
}
