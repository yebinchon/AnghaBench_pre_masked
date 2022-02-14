
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* xsltAttrVTPtr ;
typedef int xmlXPathCompExprPtr ;
struct TYPE_5__ {int strstart; int nb_seg; struct TYPE_5__* nsList; int ** segments; } ;
typedef TYPE_1__ xmlChar ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(xsltAttrVTPtr VAR_0) {
    int VAR_1;

    if (VAR_0 == ((void*)0)) return;

    if (VAR_0->strstart == 1) {
 for (VAR_1 = 0;VAR_1 < VAR_0->nb_seg; VAR_1 += 2)
     if (VAR_0->segments[VAR_1] != ((void*)0))
  FUNC_0((xmlChar *) VAR_0->segments[VAR_1]);
 for (VAR_1 = 1;VAR_1 < VAR_0->nb_seg; VAR_1 += 2)
     FUNC_1((xmlXPathCompExprPtr) VAR_0->segments[VAR_1]);
    } else {
 for (VAR_1 = 0;VAR_1 < VAR_0->nb_seg; VAR_1 += 2)
     FUNC_1((xmlXPathCompExprPtr) VAR_0->segments[VAR_1]);
 for (VAR_1 = 1;VAR_1 < VAR_0->nb_seg; VAR_1 += 2)
     if (VAR_0->segments[VAR_1] != ((void*)0))
  FUNC_0((xmlChar *) VAR_0->segments[VAR_1]);
    }
    if (VAR_0->nsList != ((void*)0))
        FUNC_0(VAR_0->nsList);
    FUNC_0(VAR_0);
}
