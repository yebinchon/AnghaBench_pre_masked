
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* xsltTransformContextPtr ;
typedef int xsltDocumentPtr ;
typedef int xmlRefTablePtr ;
typedef scalar_t__ xmlNodePtr ;
typedef int xmlIDTablePtr ;
typedef TYPE_3__* xmlDocPtr ;
struct TYPE_9__ {int * _private; scalar_t__ next; int * psvi; int * refs; int * ids; int * last; int * children; } ;
struct TYPE_8__ {TYPE_1__* cache; } ;
struct TYPE_7__ {int nbRVT; int dbgCachedRVTs; TYPE_3__* RVT; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

void
FUNC_6(xsltTransformContextPtr VAR_0, xmlDocPtr VAR_1)
{
    if (VAR_1 == ((void*)0))
 return;

    if (VAR_0 && (VAR_0->cache->nbRVT < 40)) {




 if (VAR_1->_private != ((void*)0)) {
     FUNC_5((xsltDocumentPtr) VAR_1->_private);
     FUNC_0(VAR_1->_private);
     VAR_1->_private = ((void*)0);
 }




 if (VAR_1->children != ((void*)0)) {
     FUNC_3(VAR_1->children);
     VAR_1->children = ((void*)0);
     VAR_1->last = ((void*)0);
 }
 if (VAR_1->ids != ((void*)0)) {
     FUNC_2((xmlIDTablePtr) VAR_1->ids);
     VAR_1->ids = ((void*)0);
 }
 if (VAR_1->refs != ((void*)0)) {
     FUNC_4((xmlRefTablePtr) VAR_1->refs);
     VAR_1->refs = ((void*)0);
 }




 VAR_1->psvi = ((void*)0);

 VAR_1->next = (xmlNodePtr) VAR_0->cache->RVT;
 VAR_0->cache->RVT = VAR_1;

 VAR_0->cache->nbRVT++;




 return;
    }



    if (VAR_1->_private != ((void*)0)) {
 FUNC_5((xsltDocumentPtr) VAR_1->_private);
 FUNC_0(VAR_1->_private);
    }
    FUNC_1(VAR_1);
}
