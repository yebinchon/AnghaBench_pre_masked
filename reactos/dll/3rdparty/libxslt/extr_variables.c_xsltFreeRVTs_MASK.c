
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* xsltTransformContextPtr ;
typedef TYPE_2__* xmlDocPtr ;
struct TYPE_6__ {int * _private; scalar_t__ next; } ;
struct TYPE_5__ {TYPE_2__* persistRVT; TYPE_2__* tmpRVT; TYPE_2__* localRVT; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;

void
FUNC_3(xsltTransformContextPtr VAR_0)
{
    xmlDocPtr VAR_1, VAR_2;

    if (VAR_0 == ((void*)0))
 return;



    VAR_1 = VAR_0->localRVT;
    while (VAR_1 != ((void*)0)) {
        VAR_2 = (xmlDocPtr) VAR_1->next;
 if (VAR_1->_private != ((void*)0)) {
     FUNC_2(VAR_1->_private);
     FUNC_0(VAR_1->_private);
 }
 FUNC_1(VAR_1);
 VAR_1 = VAR_2;
    }
    VAR_0->localRVT = ((void*)0);



    VAR_1 = VAR_0->tmpRVT;
    while (VAR_1 != ((void*)0)) {
        VAR_2 = (xmlDocPtr) VAR_1->next;
 if (VAR_1->_private != ((void*)0)) {
     FUNC_2(VAR_1->_private);
     FUNC_0(VAR_1->_private);
 }
 FUNC_1(VAR_1);
 VAR_1 = VAR_2;
    }
    VAR_0->tmpRVT = ((void*)0);



    VAR_1 = VAR_0->persistRVT;
    while (VAR_1 != ((void*)0)) {
        VAR_2 = (xmlDocPtr) VAR_1->next;
 if (VAR_1->_private != ((void*)0)) {
     FUNC_2(VAR_1->_private);
     FUNC_0(VAR_1->_private);
 }
 FUNC_1(VAR_1);
 VAR_1 = VAR_2;
    }
    VAR_0->persistRVT = ((void*)0);
}
