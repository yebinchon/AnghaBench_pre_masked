
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* xsltTransformContextPtr ;
typedef void* xmlNodePtr ;
typedef TYPE_2__* xmlDocPtr ;
struct TYPE_6__ {int * prev; void* next; int psvi; } ;
struct TYPE_5__ {TYPE_2__* persistRVT; } ;


 int VAR_0 ;

int
FUNC_0(xsltTransformContextPtr VAR_1, xmlDocPtr VAR_2)
{
    if ((VAR_1 == ((void*)0)) || (VAR_2 == ((void*)0))) return(-1);

    VAR_2->psvi = VAR_0;
    VAR_2->prev = ((void*)0);
    VAR_2->next = (xmlNodePtr) VAR_1->persistRVT;
    if (VAR_1->persistRVT != ((void*)0))
 VAR_1->persistRVT->prev = (xmlNodePtr) VAR_2;
    VAR_1->persistRVT = VAR_2;
    return(0);
}
