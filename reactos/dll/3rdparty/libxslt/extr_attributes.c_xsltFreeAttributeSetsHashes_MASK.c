
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* xsltStylesheetPtr ;
typedef int xmlHashTablePtr ;
struct TYPE_3__ {int * attributeSets; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;

void
FUNC_1(xsltStylesheetPtr VAR_1) {
    if (VAR_1->attributeSets != ((void*)0))
 FUNC_0((xmlHashTablePtr) VAR_1->attributeSets,
      VAR_0);
    VAR_1->attributeSets = ((void*)0);
}
