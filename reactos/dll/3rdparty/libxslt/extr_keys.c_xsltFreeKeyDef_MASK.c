
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* xsltKeyDefPtr ;
typedef int xsltKeyDef ;
struct TYPE_5__ {struct TYPE_5__* nsList; struct TYPE_5__* use; struct TYPE_5__* match; struct TYPE_5__* nameURI; struct TYPE_5__* name; int * usecomp; int * comp; } ;


 int FUNC_0 (TYPE_1__*,int,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(xsltKeyDefPtr VAR_0) {
    if (VAR_0 == ((void*)0))
 return;
    if (VAR_0->comp != ((void*)0))
 FUNC_2(VAR_0->comp);
    if (VAR_0->usecomp != ((void*)0))
 FUNC_2(VAR_0->usecomp);
    if (VAR_0->name != ((void*)0))
 FUNC_1(VAR_0->name);
    if (VAR_0->nameURI != ((void*)0))
 FUNC_1(VAR_0->nameURI);
    if (VAR_0->match != ((void*)0))
 FUNC_1(VAR_0->match);
    if (VAR_0->use != ((void*)0))
 FUNC_1(VAR_0->use);
    if (VAR_0->nsList != ((void*)0))
        FUNC_1(VAR_0->nsList);
    FUNC_0(VAR_0, -1, sizeof(xsltKeyDef));
    FUNC_1(VAR_0);
}
