
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* xsltTemplatePtr ;
typedef int xsltTemplate ;
struct TYPE_5__ {struct TYPE_5__* templCountTab; struct TYPE_5__* templCalledTab; struct TYPE_5__* inheritedNs; struct TYPE_5__* match; } ;


 int FUNC_0 (TYPE_1__*,int,int) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(xsltTemplatePtr VAR_0) {
    if (VAR_0 == ((void*)0))
 return;
    if (VAR_0->match) FUNC_1(VAR_0->match);
    if (VAR_0->inheritedNs) FUNC_1(VAR_0->inheritedNs);


    if (VAR_0->templCalledTab) FUNC_1(VAR_0->templCalledTab);
    if (VAR_0->templCountTab) FUNC_1(VAR_0->templCountTab);

    FUNC_0(VAR_0, -1, sizeof(xsltTemplate));
    FUNC_1(VAR_0);
}
