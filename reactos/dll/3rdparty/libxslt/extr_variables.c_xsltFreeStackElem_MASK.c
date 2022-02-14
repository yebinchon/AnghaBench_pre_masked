
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_2__* xsltTransformContextPtr ;
typedef TYPE_3__* xsltStackElemPtr ;
typedef int xsltStackElem ;
typedef TYPE_4__* xmlDocPtr ;
struct TYPE_15__ {scalar_t__ psvi; scalar_t__ next; } ;
struct TYPE_14__ {struct TYPE_14__* next; TYPE_2__* context; TYPE_4__* fragment; int * value; } ;
struct TYPE_13__ {TYPE_1__* cache; } ;
struct TYPE_12__ {int nbStackItems; int dbgCachedVars; TYPE_3__* stackItems; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ,int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,char*,scalar_t__) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*,TYPE_4__*) ;
 int FUNC_5 (TYPE_2__*,TYPE_4__*) ;

__attribute__((used)) static void
FUNC_6(xsltStackElemPtr VAR_3) {
    if (VAR_3 == ((void*)0))
 return;
    if (VAR_3->value != ((void*)0))
 FUNC_3(VAR_3->value);



    if (VAR_3->context) {
 xmlDocPtr VAR_4;

 while (VAR_3->fragment != ((void*)0)) {
     VAR_4 = VAR_3->fragment;
     VAR_3->fragment = (xmlDocPtr) VAR_4->next;

            if (VAR_4->psvi == VAR_1) {
  FUNC_5(VAR_3->context, VAR_4);
            } else if (VAR_4->psvi == VAR_0) {
                FUNC_4(VAR_3->context, VAR_4);
                VAR_4->psvi = VAR_0;
            } else {
                FUNC_2(VAR_2,
                        "xsltFreeStackElem: Unexpected RVT flag %p\n",
                        VAR_4->psvi);
            }
 }
    }



    if (VAR_3->context && (VAR_3->context->cache->nbStackItems < 50)) {



 xsltTransformContextPtr VAR_5 = VAR_3->context;
 FUNC_0(VAR_3, 0, sizeof(xsltStackElem));
 VAR_3->context = VAR_5;
 VAR_3->next = VAR_5->cache->stackItems;
 VAR_5->cache->stackItems = VAR_3;
 VAR_5->cache->nbStackItems++;



 return;
    }
    FUNC_1(VAR_3);
}
