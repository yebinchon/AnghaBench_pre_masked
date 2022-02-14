
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int xmlNsMapPtr ;
typedef TYPE_1__* xmlDOMWrapCtxtPtr ;
struct TYPE_4__ {int * namespaceMap; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(xmlDOMWrapCtxtPtr VAR_0)
{
    if (VAR_0 == ((void*)0))
 return;
    if (VAR_0->namespaceMap != ((void*)0))
 FUNC_0((xmlNsMapPtr) VAR_0->namespaceMap);



    FUNC_1(VAR_0);
}
