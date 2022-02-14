
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* xsltStylesheetPtr ;
typedef int xmlHashTablePtr ;
struct TYPE_3__ {int * nsAliases; } ;


 int FUNC_0 (int ,int *) ;

void
FUNC_1(xsltStylesheetPtr VAR_0) {
    if (VAR_0->nsAliases != ((void*)0))
 FUNC_0((xmlHashTablePtr) VAR_0->nsAliases, ((void*)0));
    VAR_0->nsAliases = ((void*)0);
}
