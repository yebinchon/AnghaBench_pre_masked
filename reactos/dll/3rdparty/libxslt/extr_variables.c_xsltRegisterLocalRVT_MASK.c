
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
struct TYPE_9__ {int flags; TYPE_2__* fragment; } ;
struct TYPE_8__ {int * prev; void* next; int psvi; } ;
struct TYPE_7__ {TYPE_2__* localRVT; int * contextVariable; } ;


 int VAR_0 ;
 TYPE_5__* FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;

int
FUNC_1(xsltTransformContextPtr VAR_2,
       xmlDocPtr VAR_3)
{
    if ((VAR_2 == ((void*)0)) || (VAR_3 == ((void*)0)))
 return(-1);

    VAR_3->prev = ((void*)0);
    VAR_3->psvi = VAR_0;







    if ((VAR_2->contextVariable != ((void*)0)) &&
 (FUNC_0(VAR_2)->flags & VAR_1))
    {
 VAR_3->next = (xmlNodePtr) FUNC_0(VAR_2)->fragment;
 FUNC_0(VAR_2)->fragment = VAR_3;
 return(0);
    }





    VAR_3->next = (xmlNodePtr) VAR_2->localRVT;
    if (VAR_2->localRVT != ((void*)0))
 VAR_2->localRVT->prev = (xmlNodePtr) VAR_3;
    VAR_2->localRVT = VAR_3;
    return(0);
}
