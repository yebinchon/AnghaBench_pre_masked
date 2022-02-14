
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* xsltStylesheetPtr ;
typedef TYPE_2__* xsltExtDataPtr ;
typedef int * xmlHashTablePtr ;
typedef int xmlChar ;
struct TYPE_6__ {int * extData; } ;
struct TYPE_5__ {int * extInfos; } ;


 TYPE_2__* FUNC_0 (int *,int const*) ;

xmlHashTablePtr
FUNC_1(xsltStylesheetPtr VAR_0, const xmlChar * VAR_1)
{
    xsltExtDataPtr VAR_2;
    if (VAR_0 != ((void*)0) && VAR_0->extInfos != ((void*)0)) {
        VAR_2 = FUNC_0(VAR_0->extInfos, VAR_1);
        if (VAR_2 != ((void*)0) && VAR_2->extData != ((void*)0))
            return VAR_2->extData;
    }
    return ((void*)0);
}
