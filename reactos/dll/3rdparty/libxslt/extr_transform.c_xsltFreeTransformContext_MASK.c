
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_1__* xsltTransformContextPtr ;
typedef int xsltTransformContext ;
struct TYPE_12__ {int * nsHash; } ;
struct TYPE_11__ {scalar_t__ extrasNr; int dict; int cache; struct TYPE_11__* extras; int * info; int (* deallocate ) (int *) ;struct TYPE_11__* profTab; struct TYPE_11__* varsTab; struct TYPE_11__* templTab; TYPE_8__* xpathCtxt; } ;


 int FUNC_0 (TYPE_1__*,int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_8__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int ,char*) ;
 int VAR_0 ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int ) ;

void
FUNC_12(xsltTransformContextPtr VAR_1) {
    if (VAR_1 == ((void*)0))
 return;





    FUNC_10(VAR_1);

    if (VAR_1->xpathCtxt != ((void*)0)) {
 VAR_1->xpathCtxt->nsHash = ((void*)0);
 FUNC_4(VAR_1->xpathCtxt);
    }
    if (VAR_1->templTab != ((void*)0))
 FUNC_3(VAR_1->templTab);
    if (VAR_1->varsTab != ((void*)0))
 FUNC_3(VAR_1->varsTab);
    if (VAR_1->profTab != ((void*)0))
 FUNC_3(VAR_1->profTab);
    if ((VAR_1->extrasNr > 0) && (VAR_1->extras != ((void*)0))) {
 int VAR_2;

 for (VAR_2 = 0;VAR_2 < VAR_1->extrasNr;VAR_2++) {
     if ((VAR_1->extras[VAR_2].deallocate != ((void*)0)) &&
  (VAR_1->extras[VAR_2].info != ((void*)0)))
  VAR_1->extras[VAR_2].deallocate(VAR_1->extras[VAR_2].info);
 }
 FUNC_3(VAR_1->extras);
    }
    FUNC_7(VAR_1);
    FUNC_6(VAR_1);
    FUNC_5(VAR_1);
    FUNC_8(VAR_1);
    FUNC_11(VAR_1->cache);
    FUNC_2(VAR_1->dict);




    FUNC_0(VAR_1, -1, sizeof(xsltTransformContext));
    FUNC_3(VAR_1);
}
