
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* xsltTransformCachePtr ;
typedef TYPE_1__* xsltStackElemPtr ;
typedef int xsltDocumentPtr ;
typedef TYPE_3__* xmlDocPtr ;
struct TYPE_8__ {TYPE_1__* _private; scalar_t__ next; } ;
struct TYPE_7__ {struct TYPE_7__* next; struct TYPE_7__* stackItems; TYPE_3__* RVT; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(xsltTransformCachePtr VAR_0)
{
    if (VAR_0 == ((void*)0))
 return;



    if (VAR_0->RVT) {
 xmlDocPtr VAR_1, VAR_2 = VAR_0->RVT;
 while (VAR_2) {
     VAR_1 = VAR_2;
     VAR_2 = (xmlDocPtr) VAR_2->next;
     if (VAR_1->_private != ((void*)0)) {



  FUNC_2((xsltDocumentPtr) VAR_1->_private);
  FUNC_0(VAR_1->_private);
     }
     FUNC_1(VAR_1);
 }
    }



    if (VAR_0->stackItems) {
 xsltStackElemPtr VAR_3, VAR_4 = VAR_0->stackItems;
 while (VAR_4) {
     VAR_3 = VAR_4;
     VAR_4 = VAR_4->next;




     FUNC_0(VAR_3);
 }
    }
    FUNC_0(VAR_0);
}
