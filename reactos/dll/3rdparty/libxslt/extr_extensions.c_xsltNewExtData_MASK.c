
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int * xsltExtModulePtr ;
typedef TYPE_1__* xsltExtDataPtr ;
typedef int xsltExtData ;
struct TYPE_3__ {void* extData; int * extModule; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int *,char*) ;

__attribute__((used)) static xsltExtDataPtr
FUNC_2(xsltExtModulePtr VAR_0, void *VAR_1)
{
    xsltExtDataPtr VAR_2;

    if (VAR_0 == ((void*)0))
        return (((void*)0));
    VAR_2 = (xsltExtDataPtr) FUNC_0(sizeof(xsltExtData));
    if (VAR_2 == ((void*)0)) {
        FUNC_1(((void*)0), ((void*)0), ((void*)0),
                           "xsltNewExtData : malloc failed\n");
        return (((void*)0));
    }
    VAR_2->extModule = VAR_0;
    VAR_2->extData = VAR_1;
    return (VAR_2);
}
