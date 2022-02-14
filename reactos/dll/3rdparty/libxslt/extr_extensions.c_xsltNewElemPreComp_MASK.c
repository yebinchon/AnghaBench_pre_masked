
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xsltTransformFunction ;
typedef int xsltStylesheetPtr ;
typedef int * xsltElemPreCompPtr ;
typedef int xsltElemPreComp ;
typedef int xmlNodePtr ;


 int FUNC_0 (int *,int ,int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ,int ,int ,int ) ;
 int FUNC_3 (int *,int ,int *,char*) ;

xsltElemPreCompPtr
FUNC_4(xsltStylesheetPtr VAR_1, xmlNodePtr VAR_2,
                   xsltTransformFunction VAR_3)
{
    xsltElemPreCompPtr VAR_4;

    VAR_4 = (xsltElemPreCompPtr) FUNC_1(sizeof(xsltElemPreComp));
    if (VAR_4 == ((void*)0)) {
        FUNC_3(((void*)0), VAR_1, ((void*)0),
                           "xsltNewExtElement : malloc failed\n");
        return (((void*)0));
    }
    FUNC_0(VAR_4, 0, sizeof(xsltElemPreComp));

    FUNC_2(VAR_4, VAR_1, VAR_2, VAR_3, VAR_0);

    return (VAR_4);
}
