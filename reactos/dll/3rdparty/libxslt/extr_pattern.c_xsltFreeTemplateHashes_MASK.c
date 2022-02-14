
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* xsltStylesheetPtr ;
typedef int * xmlHashTablePtr ;
struct TYPE_3__ {int * namedTemplates; int * commentMatch; int * piMatch; int * textMatch; int * parentMatch; int * attrMatch; int * elemMatch; int * keyMatch; int * rootMatch; int * templatesHash; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int * VAR_0 ;

void
FUNC_2(xsltStylesheetPtr VAR_1) {
    if (VAR_1->templatesHash != ((void*)0))
 FUNC_0((xmlHashTablePtr) VAR_1->templatesHash,
      VAR_0);
    if (VAR_1->rootMatch != ((void*)0))
        FUNC_1(VAR_1->rootMatch);
    if (VAR_1->keyMatch != ((void*)0))
        FUNC_1(VAR_1->keyMatch);
    if (VAR_1->elemMatch != ((void*)0))
        FUNC_1(VAR_1->elemMatch);
    if (VAR_1->attrMatch != ((void*)0))
        FUNC_1(VAR_1->attrMatch);
    if (VAR_1->parentMatch != ((void*)0))
        FUNC_1(VAR_1->parentMatch);
    if (VAR_1->textMatch != ((void*)0))
        FUNC_1(VAR_1->textMatch);
    if (VAR_1->piMatch != ((void*)0))
        FUNC_1(VAR_1->piMatch);
    if (VAR_1->commentMatch != ((void*)0))
        FUNC_1(VAR_1->commentMatch);
    if (VAR_1->namedTemplates != ((void*)0))
        FUNC_0(VAR_1->namedTemplates, ((void*)0));
}
