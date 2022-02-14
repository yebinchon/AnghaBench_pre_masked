
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* xsltTransformContextPtr ;
typedef void* xmlNodePtr ;
typedef TYPE_2__* xmlDocPtr ;
struct TYPE_9__ {TYPE_2__* fragment; } ;
struct TYPE_8__ {int * prev; void* next; int psvi; } ;
struct TYPE_7__ {TYPE_2__* tmpRVT; int * contextVariable; } ;


 int VAR_0 ;
 TYPE_5__* FUNC_0 (TYPE_1__*) ;

int
FUNC_1(xsltTransformContextPtr VAR_1, xmlDocPtr VAR_2)
{
    if ((VAR_1 == ((void*)0)) || (VAR_2 == ((void*)0)))
 return(-1);

    VAR_2->prev = ((void*)0);
    VAR_2->psvi = VAR_0;






    if (VAR_1->contextVariable != ((void*)0)) {
 VAR_2->next = (xmlNodePtr) FUNC_0(VAR_1)->fragment;
 FUNC_0(VAR_1)->fragment = VAR_2;
 return(0);
    }

    VAR_2->next = (xmlNodePtr) VAR_1->tmpRVT;
    if (VAR_1->tmpRVT != ((void*)0))
 VAR_1->tmpRVT->prev = (xmlNodePtr) VAR_2;
    VAR_1->tmpRVT = VAR_2;
    return(0);
}
