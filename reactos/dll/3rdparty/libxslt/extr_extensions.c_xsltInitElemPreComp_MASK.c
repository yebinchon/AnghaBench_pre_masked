
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int xsltTransformFunction ;
typedef TYPE_1__* xsltStylesheetPtr ;
typedef TYPE_2__* xsltElemPreCompPtr ;
typedef int xsltElemPreCompDeallocator ;
typedef int xmlNodePtr ;
struct TYPE_6__ {struct TYPE_6__* next; int free; int inst; int func; int type; } ;
struct TYPE_5__ {TYPE_2__* preComps; } ;


 int VAR_0 ;

void
FUNC_0(xsltElemPreCompPtr VAR_1, xsltStylesheetPtr VAR_2,
                    xmlNodePtr VAR_3, xsltTransformFunction VAR_4,
                    xsltElemPreCompDeallocator VAR_5)
{
    VAR_1->type = VAR_0;
    VAR_1->func = VAR_4;
    VAR_1->inst = VAR_3;
    VAR_1->free = VAR_5;

    VAR_1->next = VAR_2->preComps;
    VAR_2->preComps = VAR_1;
}
