
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * xsltTransformContextPtr ;
typedef TYPE_1__* xsltAttrVTPtr ;
typedef scalar_t__ xmlXPathCompExprPtr ;
typedef int * xmlNodePtr ;
typedef int const xmlChar ;
struct TYPE_2__ {int strstart; int nb_seg; int nsList; int nsNr; scalar_t__* segments; } ;


 int FUNC_0 (int const*) ;
 int const* FUNC_1 (int const*,int const*) ;
 int const* FUNC_2 (int *,scalar_t__,int ,int ) ;

xmlChar *
FUNC_3(xsltTransformContextPtr VAR_0, void *VAR_1, xmlNodePtr VAR_2) {
    xmlChar *VAR_3 = ((void*)0), *VAR_4;
    xmlXPathCompExprPtr VAR_5;
    xsltAttrVTPtr VAR_6 = (xsltAttrVTPtr) VAR_1;
    int VAR_7;
    int VAR_8;

    if ((VAR_0 == ((void*)0)) || (VAR_1 == ((void*)0)) || (VAR_2 == ((void*)0)))
        return(((void*)0));
    VAR_8 = VAR_6->strstart;
    for (VAR_7 = 0;VAR_7 < VAR_6->nb_seg;VAR_7++) {
        if (VAR_8) {
     VAR_3 = FUNC_1(VAR_3, (const xmlChar *) VAR_6->segments[VAR_7]);
 } else {
     VAR_5 = (xmlXPathCompExprPtr) VAR_6->segments[VAR_7];
     VAR_4 = FUNC_2(VAR_0, VAR_5, VAR_6->nsNr, VAR_6->nsList);
     if (VAR_4 != ((void*)0)) {
         if (VAR_3 != ((void*)0)) {
      VAR_3 = FUNC_1(VAR_3, VAR_4);
      FUNC_0(VAR_4);
  } else {
      VAR_3 = VAR_4;
  }
     }
 }
 VAR_8 = !VAR_8;
    }
    return(VAR_3);
}
