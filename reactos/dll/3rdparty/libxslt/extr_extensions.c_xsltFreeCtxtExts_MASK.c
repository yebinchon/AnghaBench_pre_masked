
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* xsltTransformContextPtr ;
struct TYPE_3__ {int * extFunctions; int * extElements; } ;


 int FUNC_0 (int *,int *) ;

void
FUNC_1(xsltTransformContextPtr VAR_0)
{
    if (VAR_0->extElements != ((void*)0))
        FUNC_0(VAR_0->extElements, ((void*)0));
    if (VAR_0->extFunctions != ((void*)0))
        FUNC_0(VAR_0->extFunctions, ((void*)0));
}
