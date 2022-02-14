
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int xsltTransformContextPtr ;
typedef int xsltStylesheetPtr ;
typedef TYPE_1__* xsltParserContextPtr ;
typedef int xsltParserContext ;
struct TYPE_4__ {int ctxt; int style; } ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int *,int *,char*) ;

__attribute__((used)) static xsltParserContextPtr
FUNC_3(xsltStylesheetPtr VAR_0, xsltTransformContextPtr VAR_1) {
    xsltParserContextPtr VAR_2;

    VAR_2 = (xsltParserContextPtr) FUNC_1(sizeof(xsltParserContext));
    if (VAR_2 == ((void*)0)) {
 FUNC_2(((void*)0), ((void*)0), ((void*)0),
  "xsltNewParserContext : malloc failed\n");
 return(((void*)0));
    }
    FUNC_0(VAR_2, 0, sizeof(xsltParserContext));
    VAR_2->style = VAR_0;
    VAR_2->ctxt = VAR_1;
    return(VAR_2);
}
