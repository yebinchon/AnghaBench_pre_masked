
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int xsltStyleExtShutdownFunction ;
typedef int xsltStyleExtInitFunction ;
typedef int xsltExtShutdownFunction ;
typedef TYPE_1__* xsltExtModulePtr ;
typedef int xsltExtModule ;
typedef int xsltExtInitFunction ;
struct TYPE_3__ {int styleShutdownFunc; int styleInitFunc; int shutdownFunc; int initFunc; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int *,char*) ;

__attribute__((used)) static xsltExtModulePtr
FUNC_2(xsltExtInitFunction VAR_0,
                 xsltExtShutdownFunction VAR_1,
                 xsltStyleExtInitFunction VAR_2,
                 xsltStyleExtShutdownFunction VAR_3)
{
    xsltExtModulePtr VAR_4;

    VAR_4 = (xsltExtModulePtr) FUNC_0(sizeof(xsltExtModule));
    if (VAR_4 == ((void*)0)) {
        FUNC_1(((void*)0), ((void*)0), ((void*)0),
                           "xsltNewExtModule : malloc failed\n");
        return (((void*)0));
    }
    VAR_4->initFunc = VAR_0;
    VAR_4->shutdownFunc = VAR_1;
    VAR_4->styleInitFunc = VAR_2;
    VAR_4->styleShutdownFunc = VAR_3;
    return (VAR_4);
}
