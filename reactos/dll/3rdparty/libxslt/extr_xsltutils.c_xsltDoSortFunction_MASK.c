
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* xsltTransformContextPtr ;
typedef int xmlNodePtr ;
struct TYPE_5__ {int (* sortfunc ) (TYPE_1__*,int *,int) ;} ;


 int FUNC_0 (TYPE_1__*,int *,int) ;
 int FUNC_1 (TYPE_1__*,int *,int) ;

void
FUNC_2(xsltTransformContextPtr VAR_0, xmlNodePtr * VAR_1,
                   int VAR_2)
{
    if (VAR_0->sortfunc != ((void*)0))
 (VAR_0->sortfunc)(VAR_0, VAR_1, VAR_2);
    else if (&FUNC_1 != ((void*)0))
        FUNC_1(VAR_0, VAR_1, VAR_2);
}
