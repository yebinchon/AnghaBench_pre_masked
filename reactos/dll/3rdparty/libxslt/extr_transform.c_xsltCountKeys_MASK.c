
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* xsltTransformContextPtr ;
typedef TYPE_2__* xsltStylesheetPtr ;
typedef TYPE_3__* xsltKeyDefPtr ;
struct TYPE_9__ {struct TYPE_9__* next; } ;
struct TYPE_8__ {TYPE_3__* keys; int * keyMatch; } ;
struct TYPE_7__ {int hasTemplKeyPatterns; int nbKeys; TYPE_2__* style; } ;


 TYPE_2__* FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static int
FUNC_1(xsltTransformContextPtr VAR_0)
{
    xsltStylesheetPtr VAR_1;
    xsltKeyDefPtr VAR_2;

    if (VAR_0 == ((void*)0))
 return(-1);




    VAR_0->hasTemplKeyPatterns = 0;
    VAR_1 = VAR_0->style;
    while (VAR_1 != ((void*)0)) {
 if (VAR_1->keyMatch != ((void*)0)) {
     VAR_0->hasTemplKeyPatterns = 1;
     break;
 }
 VAR_1 = FUNC_0(VAR_1);
    }



    VAR_0->nbKeys = 0;
    VAR_1 = VAR_0->style;
    while (VAR_1 != ((void*)0)) {
 VAR_2 = VAR_1->keys;
 while (VAR_2) {
     VAR_0->nbKeys++;
     VAR_2 = VAR_2->next;
 }
 VAR_1 = FUNC_0(VAR_1);
    }
    return(VAR_0->nbKeys);
}
