
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_2__* xsltTransformContextPtr ;
typedef TYPE_3__* xsltStackElemPtr ;
typedef int xsltStackElem ;
struct TYPE_9__ {TYPE_2__* context; struct TYPE_9__* next; } ;
struct TYPE_8__ {TYPE_1__* cache; } ;
struct TYPE_7__ {int dbgReusedVars; int nbStackItems; TYPE_3__* stackItems; } ;


 int FUNC_0 (TYPE_3__*,int ,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int *,int *,char*) ;

__attribute__((used)) static xsltStackElemPtr
FUNC_3(xsltTransformContextPtr VAR_0)
{
    xsltStackElemPtr VAR_1;



    if (VAR_0 && VAR_0->cache->stackItems) {
 VAR_1 = VAR_0->cache->stackItems;
 VAR_0->cache->stackItems = VAR_1->next;
 VAR_1->next = ((void*)0);
 VAR_0->cache->nbStackItems--;



 return(VAR_1);
    }
    VAR_1 = (xsltStackElemPtr) FUNC_1(sizeof(xsltStackElem));
    if (VAR_1 == ((void*)0)) {
 FUNC_2(((void*)0), ((void*)0), ((void*)0),
  "xsltNewStackElem : malloc failed\n");
 return(((void*)0));
    }
    FUNC_0(VAR_1, 0, sizeof(xsltStackElem));
    VAR_1->context = VAR_0;
    return(VAR_1);
}
