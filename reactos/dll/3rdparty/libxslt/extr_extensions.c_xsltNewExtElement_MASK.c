
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int * xsltTransformFunction ;
typedef int xsltPreComputeFunction ;
typedef TYPE_1__* xsltExtElementPtr ;
typedef int xsltExtElement ;
struct TYPE_3__ {int * transform; int precomp; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int *,char*) ;

__attribute__((used)) static xsltExtElementPtr
FUNC_2(xsltPreComputeFunction VAR_0,
                  xsltTransformFunction VAR_1)
{
    xsltExtElementPtr VAR_2;

    if (VAR_1 == ((void*)0))
        return (((void*)0));

    VAR_2 = (xsltExtElementPtr) FUNC_0(sizeof(xsltExtElement));
    if (VAR_2 == ((void*)0)) {
        FUNC_1(((void*)0), ((void*)0), ((void*)0),
                           "xsltNewExtElement : malloc failed\n");
        return (((void*)0));
    }
    VAR_2->precomp = VAR_0;
    VAR_2->transform = VAR_1;
    return (VAR_2);
}
