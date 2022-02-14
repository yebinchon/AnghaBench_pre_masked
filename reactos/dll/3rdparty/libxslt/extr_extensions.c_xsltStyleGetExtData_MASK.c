
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* xsltStylesheetPtr ;
typedef TYPE_2__* xsltExtDataPtr ;
typedef int xmlChar ;
struct TYPE_9__ {void* extData; } ;
struct TYPE_8__ {int * extInfos; struct TYPE_8__* parent; } ;


 scalar_t__ FUNC_0 (int *,int const*) ;
 int * VAR_0 ;
 TYPE_1__* FUNC_1 (TYPE_1__*) ;
 TYPE_2__* FUNC_2 (TYPE_1__*,int const*) ;

void *
FUNC_3(xsltStylesheetPtr VAR_1, const xmlChar * VAR_2)
{
    xsltExtDataPtr VAR_3 = ((void*)0);
    xsltStylesheetPtr VAR_4;

    if ((VAR_1 == ((void*)0)) || (VAR_2 == ((void*)0)) ||
 (VAR_0 == ((void*)0)))
 return (((void*)0));
    VAR_4 = VAR_1;
    while (VAR_4 != ((void*)0)) {
 if (VAR_4->extInfos != ((void*)0)) {
     VAR_3 =
  (xsltExtDataPtr) FUNC_0(VAR_4->extInfos, VAR_2);
     if (VAR_3 != ((void*)0)) {
  return(VAR_3->extData);
     }
 }
 VAR_4 = FUNC_1(VAR_4);
    }
    VAR_4 = VAR_1;


    VAR_3 =
        FUNC_2(VAR_4, VAR_2);
    if (VAR_3 != ((void*)0))
 return (VAR_3->extData);
    return(((void*)0));
}
