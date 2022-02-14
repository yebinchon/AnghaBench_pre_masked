
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int * xsltTransformContextPtr ;
typedef TYPE_1__* xsltExtModulePtr ;
typedef TYPE_2__* xsltExtDataPtr ;
typedef int xmlChar ;
struct TYPE_4__ {int extData; TYPE_1__* extModule; } ;
struct TYPE_3__ {int (* shutdownFunc ) (int *,int const*,int ) ;} ;


 int FUNC_0 (int *,int const*,int ) ;
 int FUNC_1 (int ,char*,int const*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(void *VAR_1, void *VAR_2, const xmlChar * VAR_3)
{
    xsltExtDataPtr VAR_4 = (xsltExtDataPtr) VAR_1;
    xsltTransformContextPtr VAR_5 = (xsltTransformContextPtr) VAR_2;
    xsltExtModulePtr VAR_6;

    if ((VAR_4 == ((void*)0)) || (VAR_5 == ((void*)0)) || (VAR_3 == ((void*)0)))
        return;
    VAR_6 = VAR_4->extModule;
    if ((VAR_6 == ((void*)0)) || (VAR_6->shutdownFunc == ((void*)0)))
        return;





    VAR_6->shutdownFunc(VAR_5, VAR_3, VAR_4->extData);
}
