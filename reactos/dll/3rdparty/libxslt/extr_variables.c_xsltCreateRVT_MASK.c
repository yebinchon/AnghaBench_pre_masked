
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_2__* xsltTransformContextPtr ;
typedef TYPE_3__* xmlDocPtr ;
struct TYPE_10__ {int * parent; struct TYPE_10__* doc; int dict; int * prev; int * next; } ;
struct TYPE_9__ {int dict; TYPE_1__* cache; } ;
struct TYPE_8__ {scalar_t__ nbRVT; int dbgReusedRVTs; TYPE_3__* RVT; } ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (int *) ;

xmlDocPtr
FUNC_3(xsltTransformContextPtr VAR_0)
{
    xmlDocPtr VAR_1;





    if (VAR_0 == ((void*)0))
 return(((void*)0));




    if (VAR_0->cache->RVT) {
 VAR_1 = VAR_0->cache->RVT;
 VAR_0->cache->RVT = (xmlDocPtr) VAR_1->next;

 VAR_1->next = ((void*)0);
 VAR_1->prev = ((void*)0);
 if (VAR_0->cache->nbRVT > 0)
     VAR_0->cache->nbRVT--;



 return(VAR_1);
    }

    VAR_1 = FUNC_2(((void*)0));
    if (VAR_1 == ((void*)0))
 return(((void*)0));
    VAR_1->dict = VAR_0->dict;
    FUNC_1(VAR_1->dict);
    FUNC_0(VAR_1);
    VAR_1->doc = VAR_1;
    VAR_1->parent = ((void*)0);
    return(VAR_1);
}
